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

/*! 
 * @file CameraInfo.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _CameraInfo_H_
#define _CameraInfo_H_

// TODO Poner en el contexto.

#include <stdint.h>
#include <array>
#include <string>
#include <vector>

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#define eProsima_user_DllExport __declspec( dllexport )
#else
#define eProsima_user_DllExport
#endif
#else
#define eProsima_user_DllExport
#endif

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#if defined(CameraInfo_SOURCE)
#define CameraInfo_DllAPI __declspec( dllexport )
#else
#define CameraInfo_DllAPI __declspec( dllimport )
#endif // CameraInfo_SOURCE
#else
#define CameraInfo_DllAPI
#endif
#else
#define CameraInfo_DllAPI
#endif // _WIN32

namespace eprosima
{
    namespace fastcdr
    {
        class Cdr;
    }
}

/*!
 * @brief This class represents the structure GuestLocation defined by the user in the IDL file.
 * @ingroup CAMERAINFO
 */
class GuestLocation
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport GuestLocation();
    
    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~GuestLocation();
    
    /*!
     * @brief Copy constructor.
     * @param x Reference to the object GuestLocation that will be copied.
     */
    eProsima_user_DllExport GuestLocation(const GuestLocation &x);
    
    /*!
     * @brief Move constructor.
     * @param x Reference to the object GuestLocation that will be copied.
     */
    eProsima_user_DllExport GuestLocation(GuestLocation &&x);
    
    /*!
     * @brief Copy assignment.
     * @param x Reference to the object GuestLocation that will be copied.
     */
    eProsima_user_DllExport GuestLocation& operator=(const GuestLocation &x);
    
    /*!
     * @brief Move assignment.
     * @param x Reference to the object GuestLocation that will be copied.
     */
    eProsima_user_DllExport GuestLocation& operator=(GuestLocation &&x);
    
    /*!
     * @brief This function sets a value in member floor
     * @param _floor New value for member floor
     */
    inline eProsima_user_DllExport void floor(uint32_t _floor)
    {
        m_floor = _floor;
    }

    /*!
     * @brief This function returns the value of member floor
     * @return Value of member floor
     */
    inline eProsima_user_DllExport uint32_t floor() const
    {
        return m_floor;
    }

    /*!
     * @brief This function returns a reference to member floor
     * @return Reference to member floor
     */
    inline eProsima_user_DllExport uint32_t& floor()
    {
        return m_floor;
    }
    /*!
     * @brief This function sets a value in member x
     * @param _x New value for member x
     */
    inline eProsima_user_DllExport void x(uint32_t _x)
    {
        m_x = _x;
    }

    /*!
     * @brief This function returns the value of member x
     * @return Value of member x
     */
    inline eProsima_user_DllExport uint32_t x() const
    {
        return m_x;
    }

    /*!
     * @brief This function returns a reference to member x
     * @return Reference to member x
     */
    inline eProsima_user_DllExport uint32_t& x()
    {
        return m_x;
    }
    /*!
     * @brief This function sets a value in member y
     * @param _y New value for member y
     */
    inline eProsima_user_DllExport void y(uint32_t _y)
    {
        m_y = _y;
    }

    /*!
     * @brief This function returns the value of member y
     * @return Value of member y
     */
    inline eProsima_user_DllExport uint32_t y() const
    {
        return m_y;
    }

    /*!
     * @brief This function returns a reference to member y
     * @return Reference to member y
     */
    inline eProsima_user_DllExport uint32_t& y()
    {
        return m_y;
    }
    
    /*!
     * @brief This function returns the maximum serialized size of an object
     * depending on the buffer alignment.
     * @param current_alignment Buffer alignment.
     * @return Maximum serialized size.
     */
    eProsima_user_DllExport static size_t getMaxCdrSerializedSize(size_t current_alignment = 0);

    /*!
     * @brief This function returns the serialized size of a data depending on the buffer alignment.
     * @param data Data which is calculated its serialized size.
     * @param current_alignment Buffer alignment.
     * @return Serialized size.
     */
    eProsima_user_DllExport static size_t getCdrSerializedSize(const GuestLocation& data, size_t current_alignment = 0);


    /*!
     * @brief This function serializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void serialize(eprosima::fastcdr::Cdr &cdr) const;

    /*!
     * @brief This function deserializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void deserialize(eprosima::fastcdr::Cdr &cdr);



    /*!
     * @brief This function returns the maximum serialized size of the Key of an object
     * depending on the buffer alignment.
     * @param current_alignment Buffer alignment.
     * @return Maximum serialized size.
     */
    eProsima_user_DllExport static size_t getKeyMaxCdrSerializedSize(size_t current_alignment = 0);

    /*!
     * @brief This function tells you if the Key has been defined for this type
     */
    eProsima_user_DllExport static bool isKeyDefined();

    /*!
     * @brief This function serializes the key members of an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void serializeKey(eprosima::fastcdr::Cdr &cdr) const;
    
private:
    uint32_t m_floor;
    uint32_t m_x;
    uint32_t m_y;
};
/*!
 * @brief This class represents the structure GuestFeature defined by the user in the IDL file.
 * @ingroup CAMERAINFO
 */
class GuestFeature
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport GuestFeature();
    
    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~GuestFeature();
    
    /*!
     * @brief Copy constructor.
     * @param x Reference to the object GuestFeature that will be copied.
     */
    eProsima_user_DllExport GuestFeature(const GuestFeature &x);
    
    /*!
     * @brief Move constructor.
     * @param x Reference to the object GuestFeature that will be copied.
     */
    eProsima_user_DllExport GuestFeature(GuestFeature &&x);
    
    /*!
     * @brief Copy assignment.
     * @param x Reference to the object GuestFeature that will be copied.
     */
    eProsima_user_DllExport GuestFeature& operator=(const GuestFeature &x);
    
    /*!
     * @brief Move assignment.
     * @param x Reference to the object GuestFeature that will be copied.
     */
    eProsima_user_DllExport GuestFeature& operator=(GuestFeature &&x);
    
    /*!
     * @brief This function copies the value in member color
     * @param _color New value to be copied in member color
     */
    inline eProsima_user_DllExport void color(const std::string &_color)
    {
        m_color = _color;
    }

    /*!
     * @brief This function moves the value in member color
     * @param _color New value to be moved in member color
     */
    inline eProsima_user_DllExport void color(std::string &&_color)
    {
        m_color = std::move(_color);
    }

    /*!
     * @brief This function returns a constant reference to member color
     * @return Constant reference to member color
     */
    inline eProsima_user_DllExport const std::string& color() const
    {
        return m_color;
    }

    /*!
     * @brief This function returns a reference to member color
     * @return Reference to member color
     */
    inline eProsima_user_DllExport std::string& color()
    {
        return m_color;
    }
    /*!
     * @brief This function copies the value in member other
     * @param _other New value to be copied in member other
     */
    inline eProsima_user_DllExport void other(const std::string &_other)
    {
        m_other = _other;
    }

    /*!
     * @brief This function moves the value in member other
     * @param _other New value to be moved in member other
     */
    inline eProsima_user_DllExport void other(std::string &&_other)
    {
        m_other = std::move(_other);
    }

    /*!
     * @brief This function returns a constant reference to member other
     * @return Constant reference to member other
     */
    inline eProsima_user_DllExport const std::string& other() const
    {
        return m_other;
    }

    /*!
     * @brief This function returns a reference to member other
     * @return Reference to member other
     */
    inline eProsima_user_DllExport std::string& other()
    {
        return m_other;
    }
    
    /*!
     * @brief This function returns the maximum serialized size of an object
     * depending on the buffer alignment.
     * @param current_alignment Buffer alignment.
     * @return Maximum serialized size.
     */
    eProsima_user_DllExport static size_t getMaxCdrSerializedSize(size_t current_alignment = 0);

    /*!
     * @brief This function returns the serialized size of a data depending on the buffer alignment.
     * @param data Data which is calculated its serialized size.
     * @param current_alignment Buffer alignment.
     * @return Serialized size.
     */
    eProsima_user_DllExport static size_t getCdrSerializedSize(const GuestFeature& data, size_t current_alignment = 0);


    /*!
     * @brief This function serializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void serialize(eprosima::fastcdr::Cdr &cdr) const;

    /*!
     * @brief This function deserializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void deserialize(eprosima::fastcdr::Cdr &cdr);



    /*!
     * @brief This function returns the maximum serialized size of the Key of an object
     * depending on the buffer alignment.
     * @param current_alignment Buffer alignment.
     * @return Maximum serialized size.
     */
    eProsima_user_DllExport static size_t getKeyMaxCdrSerializedSize(size_t current_alignment = 0);

    /*!
     * @brief This function tells you if the Key has been defined for this type
     */
    eProsima_user_DllExport static bool isKeyDefined();

    /*!
     * @brief This function serializes the key members of an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void serializeKey(eprosima::fastcdr::Cdr &cdr) const;
    
private:
    std::string m_color;
    std::string m_other;
};
/*!
 * @brief This class represents the structure CameraInfo defined by the user in the IDL file.
 * @ingroup CAMERAINFO
 */
class CameraInfo
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport CameraInfo();
    
    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~CameraInfo();
    
    /*!
     * @brief Copy constructor.
     * @param x Reference to the object CameraInfo that will be copied.
     */
    eProsima_user_DllExport CameraInfo(const CameraInfo &x);
    
    /*!
     * @brief Move constructor.
     * @param x Reference to the object CameraInfo that will be copied.
     */
    eProsima_user_DllExport CameraInfo(CameraInfo &&x);
    
    /*!
     * @brief Copy assignment.
     * @param x Reference to the object CameraInfo that will be copied.
     */
    eProsima_user_DllExport CameraInfo& operator=(const CameraInfo &x);
    
    /*!
     * @brief Move assignment.
     * @param x Reference to the object CameraInfo that will be copied.
     */
    eProsima_user_DllExport CameraInfo& operator=(CameraInfo &&x);
    
    /*!
     * @brief This function copies the value in member camera_id
     * @param _camera_id New value to be copied in member camera_id
     */
    inline eProsima_user_DllExport void camera_id(const std::string &_camera_id)
    {
        m_camera_id = _camera_id;
    }

    /*!
     * @brief This function moves the value in member camera_id
     * @param _camera_id New value to be moved in member camera_id
     */
    inline eProsima_user_DllExport void camera_id(std::string &&_camera_id)
    {
        m_camera_id = std::move(_camera_id);
    }

    /*!
     * @brief This function returns a constant reference to member camera_id
     * @return Constant reference to member camera_id
     */
    inline eProsima_user_DllExport const std::string& camera_id() const
    {
        return m_camera_id;
    }

    /*!
     * @brief This function returns a reference to member camera_id
     * @return Reference to member camera_id
     */
    inline eProsima_user_DllExport std::string& camera_id()
    {
        return m_camera_id;
    }
    /*!
     * @brief This function sets a value in member transmission_time
     * @param _transmission_time New value for member transmission_time
     */
    inline eProsima_user_DllExport void transmission_time(uint32_t _transmission_time)
    {
        m_transmission_time = _transmission_time;
    }

    /*!
     * @brief This function returns the value of member transmission_time
     * @return Value of member transmission_time
     */
    inline eProsima_user_DllExport uint32_t transmission_time() const
    {
        return m_transmission_time;
    }

    /*!
     * @brief This function returns a reference to member transmission_time
     * @return Reference to member transmission_time
     */
    inline eProsima_user_DllExport uint32_t& transmission_time()
    {
        return m_transmission_time;
    }
    /*!
     * @brief This function sets a value in member number_of_people
     * @param _number_of_people New value for member number_of_people
     */
    inline eProsima_user_DllExport void number_of_people(uint32_t _number_of_people)
    {
        m_number_of_people = _number_of_people;
    }

    /*!
     * @brief This function returns the value of member number_of_people
     * @return Value of member number_of_people
     */
    inline eProsima_user_DllExport uint32_t number_of_people() const
    {
        return m_number_of_people;
    }

    /*!
     * @brief This function returns a reference to member number_of_people
     * @return Reference to member number_of_people
     */
    inline eProsima_user_DllExport uint32_t& number_of_people()
    {
        return m_number_of_people;
    }
    /*!
     * @brief This function copies the value in member guest_locations
     * @param _guest_locations New value to be copied in member guest_locations
     */
    inline eProsima_user_DllExport void guest_locations(const std::vector<GuestLocation> &_guest_locations)
    {
        m_guest_locations = _guest_locations;
    }

    /*!
     * @brief This function moves the value in member guest_locations
     * @param _guest_locations New value to be moved in member guest_locations
     */
    inline eProsima_user_DllExport void guest_locations(std::vector<GuestLocation> &&_guest_locations)
    {
        m_guest_locations = std::move(_guest_locations);
    }

    /*!
     * @brief This function returns a constant reference to member guest_locations
     * @return Constant reference to member guest_locations
     */
    inline eProsima_user_DllExport const std::vector<GuestLocation>& guest_locations() const
    {
        return m_guest_locations;
    }

    /*!
     * @brief This function returns a reference to member guest_locations
     * @return Reference to member guest_locations
     */
    inline eProsima_user_DllExport std::vector<GuestLocation>& guest_locations()
    {
        return m_guest_locations;
    }
    /*!
     * @brief This function copies the value in member guest_features
     * @param _guest_features New value to be copied in member guest_features
     */
    inline eProsima_user_DllExport void guest_features(const std::vector<GuestFeature> &_guest_features)
    {
        m_guest_features = _guest_features;
    }

    /*!
     * @brief This function moves the value in member guest_features
     * @param _guest_features New value to be moved in member guest_features
     */
    inline eProsima_user_DllExport void guest_features(std::vector<GuestFeature> &&_guest_features)
    {
        m_guest_features = std::move(_guest_features);
    }

    /*!
     * @brief This function returns a constant reference to member guest_features
     * @return Constant reference to member guest_features
     */
    inline eProsima_user_DllExport const std::vector<GuestFeature>& guest_features() const
    {
        return m_guest_features;
    }

    /*!
     * @brief This function returns a reference to member guest_features
     * @return Reference to member guest_features
     */
    inline eProsima_user_DllExport std::vector<GuestFeature>& guest_features()
    {
        return m_guest_features;
    }
    
    /*!
     * @brief This function returns the maximum serialized size of an object
     * depending on the buffer alignment.
     * @param current_alignment Buffer alignment.
     * @return Maximum serialized size.
     */
    eProsima_user_DllExport static size_t getMaxCdrSerializedSize(size_t current_alignment = 0);

    /*!
     * @brief This function returns the serialized size of a data depending on the buffer alignment.
     * @param data Data which is calculated its serialized size.
     * @param current_alignment Buffer alignment.
     * @return Serialized size.
     */
    eProsima_user_DllExport static size_t getCdrSerializedSize(const CameraInfo& data, size_t current_alignment = 0);


    /*!
     * @brief This function serializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void serialize(eprosima::fastcdr::Cdr &cdr) const;

    /*!
     * @brief This function deserializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void deserialize(eprosima::fastcdr::Cdr &cdr);



    /*!
     * @brief This function returns the maximum serialized size of the Key of an object
     * depending on the buffer alignment.
     * @param current_alignment Buffer alignment.
     * @return Maximum serialized size.
     */
    eProsima_user_DllExport static size_t getKeyMaxCdrSerializedSize(size_t current_alignment = 0);

    /*!
     * @brief This function tells you if the Key has been defined for this type
     */
    eProsima_user_DllExport static bool isKeyDefined();

    /*!
     * @brief This function serializes the key members of an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void serializeKey(eprosima::fastcdr::Cdr &cdr) const;
    
private:
    std::string m_camera_id;
    uint32_t m_transmission_time;
    uint32_t m_number_of_people;
    std::vector<GuestLocation> m_guest_locations;
    std::vector<GuestFeature> m_guest_features;
};

#endif // _CameraInfo_H_