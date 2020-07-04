#include "Tools/CPLogger.h"

using namespace std;

int main() {
	logger::init_log();

	logger::log_info("Started car-pet server.");

	return 0;
}