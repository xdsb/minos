#ifndef __MINOS_BOOTMEM_H__
#define __MINOS_BOOTMEM_H__

void *alloc_boot_mem(size_t size);
void *alloc_boot_pages(int pages);
void reclaim_bootmem(void);
int bootmem_is_locked(void);

#endif
