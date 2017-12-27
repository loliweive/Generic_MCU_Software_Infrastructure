/****************************************************************************
*  Copyright 2017 Gorgon Meducer (Email:embedded_zhuoran@hotmail.com)       *
*                                                                           *
*  Licensed under the Apache License, Version 2.0 (the "License");          *
*  you may not use this file except in compliance with the License.         *
*  You may obtain a copy of the License at                                  *
*                                                                           *
*     http://www.apache.org/licenses/LICENSE-2.0                            *
*                                                                           *
*  Unless required by applicable law or agreed to in writing, software      *
*  distributed under the License is distributed on an "AS IS" BASIS,        *
*  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. *
*  See the License for the specific language governing permissions and      *
*  limitations under the License.                                           *
*                                                                           *
****************************************************************************/



#ifndef __USE_SERVICE_H__
#define __USE_SERVICE_H__

/*============================ INCLUDES ======================================*/
#include ".\app_cfg.h"
#include ".\scheduler\scheduler.h"
#include ".\communication\communication.h"
#include ".\encryption\encryption.h"
#include ".\memory\memory.h"
#include ".\gui\gui.h"
#include ".\time\time.h"

/*============================ MACROS ========================================*/
/*============================ MACROFIED FUNCTIONS ===========================*/
/*============================ TYPES =========================================*/
/*============================ GLOBAL VARIABLES ==============================*/
/*============================ LOCAL VARIABLES ===============================*/
/*============================ PROTOTYPES ====================================*/

/*! \brief initialize all services
 *! \param none
 *! \retval TRUE initialize services succeed.
 *! \retval FALSE initialize services failed.
 */
extern bool service_init(void);




#endif
