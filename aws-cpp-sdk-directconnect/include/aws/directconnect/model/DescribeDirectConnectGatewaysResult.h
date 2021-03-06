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
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/directconnect/model/DirectConnectGateway.h>
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
namespace DirectConnect
{
namespace Model
{
  /**
   * <p>Container for the response from the DescribeDirectConnectGateways API
   * call</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeDirectConnectGatewaysResult">AWS
   * API Reference</a></p>
   */
  class AWS_DIRECTCONNECT_API DescribeDirectConnectGatewaysResult
  {
  public:
    DescribeDirectConnectGatewaysResult();
    DescribeDirectConnectGatewaysResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeDirectConnectGatewaysResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the direct connect gateways.</p>
     */
    inline const Aws::Vector<DirectConnectGateway>& GetDirectConnectGateways() const{ return m_directConnectGateways; }

    /**
     * <p>Information about the direct connect gateways.</p>
     */
    inline void SetDirectConnectGateways(const Aws::Vector<DirectConnectGateway>& value) { m_directConnectGateways = value; }

    /**
     * <p>Information about the direct connect gateways.</p>
     */
    inline void SetDirectConnectGateways(Aws::Vector<DirectConnectGateway>&& value) { m_directConnectGateways = std::move(value); }

    /**
     * <p>Information about the direct connect gateways.</p>
     */
    inline DescribeDirectConnectGatewaysResult& WithDirectConnectGateways(const Aws::Vector<DirectConnectGateway>& value) { SetDirectConnectGateways(value); return *this;}

    /**
     * <p>Information about the direct connect gateways.</p>
     */
    inline DescribeDirectConnectGatewaysResult& WithDirectConnectGateways(Aws::Vector<DirectConnectGateway>&& value) { SetDirectConnectGateways(std::move(value)); return *this;}

    /**
     * <p>Information about the direct connect gateways.</p>
     */
    inline DescribeDirectConnectGatewaysResult& AddDirectConnectGateways(const DirectConnectGateway& value) { m_directConnectGateways.push_back(value); return *this; }

    /**
     * <p>Information about the direct connect gateways.</p>
     */
    inline DescribeDirectConnectGatewaysResult& AddDirectConnectGateways(DirectConnectGateway&& value) { m_directConnectGateways.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline DescribeDirectConnectGatewaysResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline DescribeDirectConnectGatewaysResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline DescribeDirectConnectGatewaysResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DirectConnectGateway> m_directConnectGateways;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
