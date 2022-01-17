#pragma once
#include <stdbool.h>
#ifdef __cplusplus
#include <deque>
#include <string>
#endif

void AP_Init(const char*, const char*, const char*, const char*);
bool AP_IsInit();

void AP_SetItemClearCallback(void (*f_itemclr)());
void AP_SetItemRecvCallback(void (*f_itemrecv)(int));

void AP_Start();

// Sends LocationCheck for given index
void AP_SendItem(int);

// Called when Story completed, sends StatusUpdate
void AP_StoryComplete();

#ifdef __cplusplus
std::deque<std::pair<std::string,int>> AP_GetMsgQueue();
#endif