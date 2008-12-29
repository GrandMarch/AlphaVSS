/* Copyright (c) 2008 Peter Palotas
 *  
 *  Permission is hereby granted, free of charge, to any person obtaining a copy
 *  of this software and associated documentation files (the "Software"), to deal
 *  in the Software without restriction, including without limitation the rights
 *  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 *  copies of the Software, and to permit persons to whom the Software is
 *  furnished to do so, subject to the following conditions:
 *  
 *  The above copyright notice and this permission notice shall be included in
 *  all copies or substantial portions of the Software.
 *  
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 *  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 *  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 *  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 *  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 *  THE SOFTWARE.
 */
#pragma once

using namespace System;

#include "Exceptions/VssException.h"

namespace Alphaleonis { namespace Win32 { namespace Vss
{
	/// <summary>
	///		<para>Exception thrown to indicate that the provider encountered an error that requires the user to restart the computer.</para>
	///		<para><b>Windows Server 2003 and Windows XP:</b>This value is not supported until Windows Vista.</para>
	/// </summary>
	[Serializable]
	public ref class VssRebootRequiredException : VssException
	{
	public:
		/// <summary>Initializes a new instance of the <see cref="VssRebootRequiredException"/> class with a system-supplied message describing the error.</summary>
		VssRebootRequiredException();
		/// <summary>Initializes a new instance of the <see cref="VssRebootRequiredException"/> class with a specified error message.</summary>
		/// <param name="message">The message that describes the error</param>
		VssRebootRequiredException(String ^ message);
		/// <summary>Initializes a new instance of the <see cref="VssRebootRequiredException"/> class with a specified error message and a reference to the inner exception that is the cause of this exception.</summary>
		/// <param name="message">The message that describes the error</param>
		/// <param name="innerException">The exception that is the cause of the current exception.</param>
		VssRebootRequiredException(String ^ message, Exception ^ innerException);
	protected:		
		/// <summary>Initializes a new instance of the <see cref="VssRebootRequiredException"/> class with serialized data.</summary>
		/// <param name="info">The object that holds the serialized object data. </param>
		/// <param name="context">The contextual information about the source or destination.</param>
		VssRebootRequiredException(System::Runtime::Serialization::SerializationInfo ^ info, System::Runtime::Serialization::StreamingContext context);
	};
}
} }