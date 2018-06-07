// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.


#ifndef _ISMANAGER_H_
#define _ISMANAGER_H_

#include <map>
#include <iostream>
#include <tinyxml2.h>
#include "log/ISLog.h"
#include "ISBridge.h"
#include "dynamicload/dynamicload.h"
#include <fastrtps/participant/Participant.h>
#include <fastrtps/participant/ParticipantListener.h>

typedef ISBridge* (*loadbridgef_t)(const char *config);

class MyParticipantListener : public ParticipantListener
{
public:
    virtual void onParticipantDiscovery(Participant* /*p*/, ParticipantDiscoveryInfo info)
    {
        if (info.rtps.m_status == DISCOVERY_STATUS::DISCOVERED_RTPSPARTICIPANT)
        {
            LOG_INFO("Participant discovered " << info.rtps.m_RTPSParticipantName);
        }
        else if (info.rtps.m_status == DISCOVERY_STATUS::REMOVED_RTPSPARTICIPANT)
        {
            LOG_INFO("Participant removed " << info.rtps.m_RTPSParticipantName);
        }
        else if (info.rtps.m_status == DISCOVERY_STATUS::DROPPED_RTPSPARTICIPANT)
        {
            LOG_INFO("Participant dropped " << info.rtps.m_RTPSParticipantName);
        }
        else if (info.rtps.m_status == DISCOVERY_STATUS::CHANGED_QOS_RTPSPARTICIPANT)
        {
            LOG_INFO("Participant changed QOS " << info.rtps.m_RTPSParticipantName);
        }
    }
};

class ISManager
{
    std::map<std::string, ISBridge*> bridges;
    std::map<std::string, ISSubscriber*> subscribers;
    std::map<std::string, ISPublisher*> publishers;
    std::map<std::string, void*> handles;
    std::map<std::string, bool> registered_types;
    std::map<std::string, typef_t> typesLibs;
    std::vector<typef_t> defaultTypesLibs;
    bool active;
    void parseProperties(tinyxml2::XMLElement *parent_element,
                         std::vector<std::pair<std::string, std::string>> &props);
    MyParticipantListener myParticipantListener;
    TopicDataType* getTopicDataType(const std::string &type);
public:
    ISManager(const std::string &xml_file_path);
    ~ISManager();
    bool isActive();
    void addBridge(ISBridge* b);
    void addPublisher(ISPublisher* p);
    void addSubscriber(ISSubscriber* s);
    void addPublisher(const std::string &part_name, ISPublisher* p);
    void addSubscriber(const std::string &part_name, ISSubscriber* s);
    void loadTopicTypes(tinyxml2::XMLElement *topic_types_element);
    void loadParticipant(tinyxml2::XMLElement *participant_element);
    void loadSubscriber(Participant* participant, tinyxml2::XMLElement *subscriber_element);
    void loadPublisher(Participant* participant, tinyxml2::XMLElement *publisher_element);
    void loadBridge(tinyxml2::XMLElement *bridge_element);
    void loadConnector(tinyxml2::XMLElement *connector_element);
    void onTerminate();
    void* getLibraryHandle(const std::string &libpath);
    void* getTypeHandle(const std::string &libpath);
    std::string getEndPointName(const std::string &partName, const std::string &epName)
    {
        return partName + "." + epName;
    }
};

#endif // _ISMANAGER_H_
