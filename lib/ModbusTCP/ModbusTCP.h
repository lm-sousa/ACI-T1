#ifndef __MODBUSTCP_H__
#define __MODBUSTCP_H__

#include <stdlib.h>
#include <stdint.h>
#include <sys/types.h>

#include "socket.h"


int Send_Modbus_request(char* server_add, uint16_t port, uint8_t* apdu, size_t apdu_size, uint8_t** r_apdu);

int Receive_Modbus_response(int fd, uint8_t* apdu , size_t apdu_len);

int Send_Modbus_response(uint16_t TI, uint8_t* resp_apdu , size_t resp_apdu_size);

#endif