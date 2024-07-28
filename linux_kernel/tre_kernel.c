#include <linux/version.h>
#include "linux_kernel.h"

// entry function
static int __init tre_load(void) {
    pr_info("Module loaded\n");
    return 0;
}

static void __exit tre_unload(void) {
    pr_info("Module removed");
}

// register entry/exit point functions
module_init(tre_load);
module_exit(tre_unload);

// module metadata
MODULE_AUTHOR("Ville Laurikari <vl@iki.fi>, Gleb Semenov <gleb.semenov@gmail.com>");
MODULE_DESCRIPTION("tre regex library for linux kernel");
MODULE_LICENSE("GPL");
