#include <linux/smp.h>
unsigned long host_cpuid(void) {
	//return the current pCPU ID of the caller vCPU
	return smp_processor_id();
}
