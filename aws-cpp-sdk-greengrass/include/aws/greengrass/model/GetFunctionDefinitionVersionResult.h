﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrass/model/FunctionDefinitionVersion.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Greengrass
{
namespace Model
{
  class AWS_GREENGRASS_API GetFunctionDefinitionVersionResult
  {
  public:
    GetFunctionDefinitionVersionResult();
    GetFunctionDefinitionVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetFunctionDefinitionVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * Arn of the function definition version.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * Arn of the function definition version.
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * Arn of the function definition version.
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * Arn of the function definition version.
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * Arn of the function definition version.
     */
    inline GetFunctionDefinitionVersionResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * Arn of the function definition version.
     */
    inline GetFunctionDefinitionVersionResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * Arn of the function definition version.
     */
    inline GetFunctionDefinitionVersionResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * Timestamp when the funtion definition version was created.
     */
    inline const Aws::String& GetCreationTimestamp() const{ return m_creationTimestamp; }

    /**
     * Timestamp when the funtion definition version was created.
     */
    inline void SetCreationTimestamp(const Aws::String& value) { m_creationTimestamp = value; }

    /**
     * Timestamp when the funtion definition version was created.
     */
    inline void SetCreationTimestamp(Aws::String&& value) { m_creationTimestamp = std::move(value); }

    /**
     * Timestamp when the funtion definition version was created.
     */
    inline void SetCreationTimestamp(const char* value) { m_creationTimestamp.assign(value); }

    /**
     * Timestamp when the funtion definition version was created.
     */
    inline GetFunctionDefinitionVersionResult& WithCreationTimestamp(const Aws::String& value) { SetCreationTimestamp(value); return *this;}

    /**
     * Timestamp when the funtion definition version was created.
     */
    inline GetFunctionDefinitionVersionResult& WithCreationTimestamp(Aws::String&& value) { SetCreationTimestamp(std::move(value)); return *this;}

    /**
     * Timestamp when the funtion definition version was created.
     */
    inline GetFunctionDefinitionVersionResult& WithCreationTimestamp(const char* value) { SetCreationTimestamp(value); return *this;}


    /**
     * Information on the definition.
     */
    inline const FunctionDefinitionVersion& GetDefinition() const{ return m_definition; }

    /**
     * Information on the definition.
     */
    inline void SetDefinition(const FunctionDefinitionVersion& value) { m_definition = value; }

    /**
     * Information on the definition.
     */
    inline void SetDefinition(FunctionDefinitionVersion&& value) { m_definition = std::move(value); }

    /**
     * Information on the definition.
     */
    inline GetFunctionDefinitionVersionResult& WithDefinition(const FunctionDefinitionVersion& value) { SetDefinition(value); return *this;}

    /**
     * Information on the definition.
     */
    inline GetFunctionDefinitionVersionResult& WithDefinition(FunctionDefinitionVersion&& value) { SetDefinition(std::move(value)); return *this;}


    /**
     * Id of the function definition the version belongs to.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * Id of the function definition the version belongs to.
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * Id of the function definition the version belongs to.
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * Id of the function definition the version belongs to.
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * Id of the function definition the version belongs to.
     */
    inline GetFunctionDefinitionVersionResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * Id of the function definition the version belongs to.
     */
    inline GetFunctionDefinitionVersionResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * Id of the function definition the version belongs to.
     */
    inline GetFunctionDefinitionVersionResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * Version of the function definition version.
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * Version of the function definition version.
     */
    inline void SetVersion(const Aws::String& value) { m_version = value; }

    /**
     * Version of the function definition version.
     */
    inline void SetVersion(Aws::String&& value) { m_version = std::move(value); }

    /**
     * Version of the function definition version.
     */
    inline void SetVersion(const char* value) { m_version.assign(value); }

    /**
     * Version of the function definition version.
     */
    inline GetFunctionDefinitionVersionResult& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * Version of the function definition version.
     */
    inline GetFunctionDefinitionVersionResult& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * Version of the function definition version.
     */
    inline GetFunctionDefinitionVersionResult& WithVersion(const char* value) { SetVersion(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_creationTimestamp;

    FunctionDefinitionVersion m_definition;

    Aws::String m_id;

    Aws::String m_version;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
