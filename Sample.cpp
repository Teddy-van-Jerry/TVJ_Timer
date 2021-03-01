#include <iostream>
#include "TVJ_Timer.h"
using namespace std::chrono;
using namespace std;

int main()
{
	TVJ_Timer timer("u", true);
	for (int i = 0; i != 1000000000; i++);
	cout << timer << endl;                             // 1303736us
	timer.setUnit("m");
	cout << timer << endl;                             // 1304
	for (int i = 0; i != 1000000000; i++);
	timer.setUnit("m.6", true);
	cout << timer << endl;                             // 2606.6ms
	timer.restart();
	cout << timer << endl;                             // 0ms
	for (int i = 0; i != 1000000000; i++);
	
	TVJ_Timer timer_;
	for (int i = 0; i != 1000000000; i++);
	int int_time = timer_.durationTime();
	double double_time = timer_.durationTimeDouble();
	cout << int_time << " " << double_time << endl;    // 1267 1267.57

	return 0;
}