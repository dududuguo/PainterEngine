#ifndef PX_TIME_H
#define PX_TIME_H

int PX_TimeGetYear();
int PX_TimeGetMonth();
int PX_TimeGetDay();
int PX_TimeGetHour();
int PX_TimeGetMinute();
int PX_TimeGetSecond();
unsigned int PX_TimeGetTime();
unsigned int PX_TimeGetTimeUs();
void PX_Sleep(unsigned int ms);
#endif