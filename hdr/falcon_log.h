/******************************************************************************
 *
 * MIT License
 *
 * Copyright (c) 2018 OrthogonalHawk
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to
 * deal in the Software without restriction, including without limitation the
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 *
 *****************************************************************************/

/******************************************************************************
 *
 * @file     falcon_log.h
 * @author   OrthogonalHawk
 * @date     02-Feb-2018
 *
 * @brief    Logging library abstraction layer definition.
 *
 * @section  DESCRIPTION
 *
 * The falcon_log class provides a logging library abstraction layer to FALCON
 *  applications and libraries. It serves as a common, standardized interface
 *  layer even when the underlying log functionality changes.
 *
 * @section  HISTORY
 *
 * 02-Feb-2018  OrthogonalHawk  File created.
 *
 *****************************************************************************/

#ifndef __FALCON_LOG_H__
#define __FALCON_LOG_H__

/******************************************************************************
 *                               INCLUDE_FILES
 *****************************************************************************/

/******************************************************************************
 *                                 CONSTANTS
 *****************************************************************************/

/******************************************************************************
 *                              ENUMS & TYPEDEFS
 *****************************************************************************/

/******************************************************************************
 *                                  MACROS
 *****************************************************************************/

//#define FALCON_LOG_INFO(subsys, format, args...) \
//
//#define

/******************************************************************************
 *                              CLASS DECLARATION
 *****************************************************************************/

class falcon_log
{
public:

    falcon_log(void);
    ~falcon_log(void);

    bool initialize(void);
    bool shutdown(void);

private:
};
#endif // __FALCON_LOG_H__
