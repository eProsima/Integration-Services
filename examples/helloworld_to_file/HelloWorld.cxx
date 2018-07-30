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
 * @file HelloWorld.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace { char dummy; }
#endif

#include "HelloWorld.h"

#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

HelloWorld::HelloWorld()
{
    m_index = 0;

}

HelloWorld::~HelloWorld()
{
}

HelloWorld::HelloWorld(const HelloWorld &x)
{
    m_index = x.m_index;
    m_message = x.m_message;
}

HelloWorld::HelloWorld(HelloWorld &&x)
{
    m_index = x.m_index;
    m_message = std::move(x.m_message);
}

HelloWorld& HelloWorld::operator=(const HelloWorld &x)
{
    m_index = x.m_index;
    m_message = x.m_message;
    
    return *this;
}

HelloWorld& HelloWorld::operator=(HelloWorld &&x)
{
    m_index = x.m_index;
    m_message = std::move(x.m_message);
    
    return *this;
}

size_t HelloWorld::getMaxCdrSerializedSize(size_t current_alignment)
{
    size_t initial_alignment = current_alignment;
            
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + 255 + 1;


    return current_alignment - initial_alignment;
}

size_t HelloWorld::getCdrSerializedSize(const HelloWorld& data, size_t current_alignment)
{
    size_t initial_alignment = current_alignment;
            
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.message().size() + 1;


    return current_alignment - initial_alignment;
}

void HelloWorld::serialize(eprosima::fastcdr::Cdr &scdr) const
{
    scdr << m_index;
    scdr << m_message;
}

void HelloWorld::deserialize(eprosima::fastcdr::Cdr &dcdr)
{
    dcdr >> m_index;
    dcdr >> m_message;
}

size_t HelloWorld::getKeyMaxCdrSerializedSize(size_t current_alignment)
{
	size_t current_align = current_alignment;
            



    return current_align;
}

bool HelloWorld::isKeyDefined()
{
    return false;
}

void HelloWorld::serializeKey(eprosima::fastcdr::Cdr &scdr) const
{
	 
	 
}
