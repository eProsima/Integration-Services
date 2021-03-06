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


#ifndef _ISBRIDGERTPS_PUBLISHER_H_
#define _ISBRIDGERTPS_PUBLISHER_H_

#include <string>
#include <mutex>

#include "fastrtps/participant/Participant.h"
#include "fastrtps/attributes/ParticipantAttributes.h"
#include "fastrtps/publisher/Publisher.h"
#include "fastrtps/publisher/PublisherListener.h"
#include "fastrtps/attributes/PublisherAttributes.h"
#include "fastrtps/subscriber/SampleInfo.h"
#include <fastrtps/fastrtps_fwd.h>

#include "ISBridge.h"
#include "dynamicload/dynamicload.h"

using namespace eprosima::fastrtps;
using namespace eprosima::fastrtps::rtps;

// ISWriter for RTPS protocol (known as publisher)
class RTPSPublisher : public PublisherListener, public ISWriter
{
private:
    Publisher *mp_publisher;
    Participant *mp_participant;
    void* m_buffer;
    std::mutex m_bufferMutex;
public:
    RTPSPublisher(const std::string &name);
    virtual bool write(SerializedPayload_t * data) override;
    virtual bool write(DynamicData * data) override;
    ~RTPSPublisher() override;
    void onPublicationMatched(Publisher* pub, MatchingInfo& info) override;
    void setParticipant(Participant* part);
    bool hasParticipant();
    Participant* getParticipant();
    bool hasRTPSPublisher();
    void setRTPSPublisher(Publisher* pub);
    Publisher* getRTPSPublisher() { return mp_publisher; }
};

#endif // _ISBRIDGERTPS_PUBLISHER_H_
