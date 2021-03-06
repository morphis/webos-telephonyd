/* @@@LICENSE
*
* Copyright (c) 2012 Simon Busch <morphis@gravedo.de>
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*
* LICENSE@@@ */

#ifndef TELEPHONY_SERVICE_H_
#define TELEPHONY_SERVICE_H_

#include <luna-service2/lunaservice.h>

struct telephony_driver;

struct telephony_service* telephony_service_create(LSPalmService *palm_service);
void telephony_service_free(struct telephony_service *service);

void telephony_service_set_data(struct telephony_service *service, void *data);
void* telephony_service_get_data(struct telephony_service *service);
void telephony_service_register_driver(struct telephony_service *service, struct telephony_driver *driver);

#endif

// vim:ts=4:sw=4:noexpandtab
