#include <linux/smp.h>
unsigned long host_cpuid(void) {
	//return the current pCPU ID of the caller vCPU
	unsigned long cpuid = get_cpu();
	put_cpu();
	return cpuid;
}
