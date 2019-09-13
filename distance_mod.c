#include <stdio.h>
int main(void) {

	double light_speed = 300000;
	double distance = 149600000;
	double time;

	int real_time;

	time = distance / light_speed;
	real_time = time;
	if((double)real_time < time) real_time += 1;

	printf("빛의 속도는 %fkm/s\n", light_speed);
	printf("태양과 지구와의 거리 %fkm\n", distance);
	printf("도달 시간은 %f초\n", time);
	printf("실제 도달 시간은 약 %d분 %d초\n", real_time/60, real_time%60);

	return 0;

}
