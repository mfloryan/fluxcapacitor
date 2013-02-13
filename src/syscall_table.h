#if defined(__x86_64__)
#  include "vki-scnums-amd64-linux.h"
#elif defined(__i386__)
#  include "vki-scnums-x86-linux.h"
#elif defined(__ARMEL__)
#  include "vki-scnums-arm-linux.h"
#else
#  error "Unknown architecture!"
#endif

static char *syscall_table[] = {
	[__NR_restart_syscall] = "restart_syscall",
	[__NR_exit] = "exit",
	[__NR_fork] = "fork",
	[__NR_read] = "read",
	[__NR_write] = "write",
	[__NR_open] = "open",
	[__NR_close] = "close",
#ifdef __NR_waitpid
	[__NR_waitpid] = "waitpid",
#endif
	[__NR_creat] = "creat",
	[__NR_link] = "link",
	[__NR_unlink] = "unlink",
	[__NR_execve] = "execve",
	[__NR_chdir] = "chdir",
	[__NR_time] = "time",
	[__NR_mknod] = "mknod",
	[__NR_chmod] = "chmod",
	[__NR_lchown] = "lchown",
#ifdef __NR_break
	[__NR_break] = "break",
#endif
#ifdef __NR_oldstat
	[__NR_oldstat] = "oldstat",
#endif
	[__NR_lseek] = "lseek",
	[__NR_getpid] = "getpid",
	[__NR_mount] = "mount",
	[__NR_umount] = "umount",
	[__NR_setuid] = "setuid",
	[__NR_getuid] = "getuid",
	[__NR_stime] = "stime",
	[__NR_ptrace] = "ptrace",
	[__NR_alarm] = "alarm",
#ifdef __NR_oldfstat
	[__NR_oldfstat] = "oldfstat",
#endif
	[__NR_pause] = "pause",
	[__NR_utime] = "utime",
#ifdef __NR_stty
	[__NR_stty] = "stty",
#endif
#ifdef __NR_gtty
	[__NR_gtty] = "gtty",
#endif
	[__NR_access] = "access",
	[__NR_nice] = "nice",
#ifdef __NR_ftime
	[__NR_ftime] = "ftime",
#endif
	[__NR_sync] = "sync",
	[__NR_kill] = "kill",
	[__NR_rename] = "rename",
	[__NR_mkdir] = "mkdir",
	[__NR_rmdir] = "rmdir",
	[__NR_dup] = "dup",
	[__NR_pipe] = "pipe",
	[__NR_times] = "times",
#ifdef __NR_prof
	[__NR_prof] = "prof",
#endif
	[__NR_brk] = "brk",
	[__NR_setgid] = "setgid",
	[__NR_getgid] = "getgid",
#ifdef __NR_signal
	[__NR_signal] = "signal",
#endif
	[__NR_geteuid] = "geteuid",
	[__NR_getegid] = "getegid",
	[__NR_acct] = "acct",
	[__NR_umount2] = "umount2",
#ifdef __NR_lock
	[__NR_lock] = "lock",
#endif
	[__NR_ioctl] = "ioctl",
	[__NR_fcntl] = "fcntl",
#ifdef __NR_mpx
	[__NR_mpx] = "mpx",
#endif
	[__NR_setpgid] = "setpgid",
#ifdef __NR_ulimit
	[__NR_ulimit] = "ulimit",
#endif
#ifdef __NR_oldolduname
	[__NR_oldolduname] = "oldolduname",
#endif
	[__NR_umask] = "umask",
	[__NR_chroot] = "chroot",
	[__NR_ustat] = "ustat",
	[__NR_dup2] = "dup2",
	[__NR_getppid] = "getppid",
	[__NR_getpgrp] = "getpgrp",
	[__NR_setsid] = "setsid",
	[__NR_sigaction] = "sigaction",
#ifdef __NR_sgetmask
	[__NR_sgetmask] = "sgetmask",
#endif
#ifdef __NR_ssetmask
	[__NR_ssetmask] = "ssetmask",
#endif
	[__NR_setreuid] = "setreuid",
	[__NR_setregid] = "setregid",
	[__NR_sigsuspend] = "sigsuspend",
	[__NR_sigpending] = "sigpending",
	[__NR_sethostname] = "sethostname",
	[__NR_setrlimit] = "setrlimit",
	[__NR_getrlimit] = "getrlimit",
	[__NR_getrusage] = "getrusage",
	[__NR_gettimeofday] = "gettimeofday",
	[__NR_settimeofday] = "settimeofday",
	[__NR_getgroups] = "getgroups",
	[__NR_setgroups] = "setgroups",
	[__NR_select] = "_oldselect",
	[__NR_symlink] = "symlink",
#ifdef __NR_oldlstat
	[__NR_oldlstat] = "oldlstat",
#endif
	[__NR_readlink] = "readlink",
	[__NR_uselib] = "uselib",
	[__NR_swapon] = "swapon",
	[__NR_reboot] = "reboot",
	[__NR_readdir] = "readdir",
	[__NR_mmap] = "mmap",
	[__NR_munmap] = "munmap",
	[__NR_truncate] = "truncate",
	[__NR_ftruncate] = "ftruncate",
	[__NR_fchmod] = "fchmod",
	[__NR_fchown] = "fchown",
	[__NR_getpriority] = "getpriority",
	[__NR_setpriority] = "setpriority",
#ifdef __NR_profil
	[__NR_profil] = "profil",
#endif
	[__NR_statfs] = "statfs",
#ifdef __NR_fstatfs
	[__NR_fstatfs] = "fstatfs",
#endif
#ifdef __NR_ioperm
	[__NR_ioperm] = "ioperm",
#endif
	[__NR_socketcall] = "socketcall",
	[__NR_syslog] = "syslog",
	[__NR_setitimer] = "setitimer",
	[__NR_getitimer] = "getitimer",
	[__NR_stat] = "stat",
	[__NR_lstat] = "lstat",
	[__NR_fstat] = "fstat",
#ifdef __NR_olduname
	[__NR_olduname] = "olduname",
#endif
#ifdef __NR_iopl
	[__NR_iopl] = "iopl",
#endif
	[__NR_vhangup] = "vhangup",
#ifdef __NR_idle
	[__NR_idle] = "idle",
#endif
#ifdef __NR_vm86old
	[__NR_vm86old] = "vm86old",
#endif
	[__NR_wait4] = "wait4",
	[__NR_swapoff] = "swapoff",
	[__NR_sysinfo] = "sysinfo",
	[__NR_ipc] = "ipc",
	[__NR_fsync] = "fsync",
	[__NR_sigreturn] = "sigreturn",
	[__NR_clone] = "clone",
	[__NR_setdomainname] = "setdomainname",
	[__NR_uname] = "uname",
#ifdef __NR_modify_ldt
	[__NR_modify_ldt] = "modify_ldt",
#endif
	[__NR_adjtimex] = "adjtimex",
	[__NR_mprotect] = "mprotect",
	[__NR_sigprocmask] = "sigprocmask",
#ifdef __NR_create_module
	[__NR_create_module] = "create_module",
#endif
	[__NR_init_module] = "init_module",
	[__NR_delete_module] = "delete_module",
#ifdef __NR_get_kernel_syms
	[__NR_get_kernel_syms] = "get_kernel_syms",
#endif
	[__NR_quotactl] = "quotactl",
	[__NR_getpgid] = "getpgid",
	[__NR_fchdir] = "fchdir",
	[__NR_bdflush] = "bdflush",
	[__NR_sysfs] = "sysfs",
	[__NR_personality] = "personality",
#ifdef __NR_afs_syscall
	[__NR_afs_syscall] = "afs_syscall",
#endif
	[__NR_setfsuid] = "setfsuid",
	[__NR_setfsgid] = "setfsgid",
	[__NR__llseek] = "_llseek",
	[__NR_getdents] = "getdents",
	[__NR__newselect] = "select",
	[__NR_flock] = "flock",
	[__NR_msync] = "msync",
	[__NR_readv] = "readv",
	[__NR_writev] = "writev",
	[__NR_getsid] = "getsid",
	[__NR_fdatasync] = "fdatasync",
	[__NR__sysctl] = "_sysctl",
	[__NR_mlock] = "mlock",
	[__NR_munlock] = "munlock",
	[__NR_mlockall] = "mlockall",
	[__NR_munlockall] = "munlockall",
	[__NR_sched_setparam] = "sched_setparam",
	[__NR_sched_getparam] = "sched_getparam",
	[__NR_sched_setscheduler] = "sched_setscheduler",
	[__NR_sched_getscheduler] = "sched_getscheduler",
	[__NR_sched_yield] = "sched_yield",
	[__NR_sched_get_priority_max] = "sched_get_priority_max",
	[__NR_sched_get_priority_min] = "sched_get_priority_min",
	[__NR_sched_rr_get_interval] = "sched_rr_get_interval",
	[__NR_nanosleep] = "nanosleep",
	[__NR_mremap] = "mremap",
	[__NR_setresuid] = "setresuid",
	[__NR_getresuid] = "getresuid",
#ifdef __NR_vm86
	[__NR_vm86] = "vm86",
#endif
#ifdef __NR_query_module
	[__NR_query_module] = "query_module",
#endif
	[__NR_poll] = "poll",
	[__NR_nfsservctl] = "nfsservctl",
	[__NR_setresgid] = "setresgid",
	[__NR_getresgid] = "getresgid",
	[__NR_prctl] = "prctl",
	[__NR_rt_sigreturn] = "rt_sigreturn",
	[__NR_rt_sigaction] = "rt_sigaction",
	[__NR_rt_sigprocmask] = "rt_sigprocmask",
	[__NR_rt_sigpending] = "rt_sigpending",
	[__NR_rt_sigtimedwait] = "rt_sigtimedwait",
	[__NR_rt_sigqueueinfo] = "rt_sigqueueinfo",
	[__NR_rt_sigsuspend] = "rt_sigsuspend",
	[__NR_pread64] = "pread64",
	[__NR_pwrite64] = "pwrite64",
	[__NR_chown] = "chown",
	[__NR_getcwd] = "getcwd",
	[__NR_capget] = "capget",
	[__NR_capset] = "capset",
	[__NR_sigaltstack] = "sigaltstack",
	[__NR_sendfile] = "sendfile",
#ifdef __NR_getpmsg
	[__NR_getpmsg] = "getpmsg",
#endif
#ifdef __NR_putpmsg
	[__NR_putpmsg] = "putpmsg",
#endif
	[__NR_vfork] = "vfork",
	[__NR_ugetrlimit] = "ugetrlimit",
	[__NR_mmap2] = "mmap2",
	[__NR_truncate64] = "truncate64",
	[__NR_ftruncate64] = "ftruncate64",
	[__NR_stat64] = "stat64",
	[__NR_lstat64] = "lstat64",
	[__NR_fstat64] = "fstat64",
	[__NR_lchown32] = "lchown32",
	[__NR_getuid32] = "getuid32",
	[__NR_getgid32] = "getgid32",
	[__NR_geteuid32] = "geteuid32",
	[__NR_getegid32] = "getegid32",
	[__NR_setreuid32] = "setreuid32",
	[__NR_setregid32] = "setregid32",
	[__NR_getgroups32] = "getgroups32",
	[__NR_setgroups32] = "setgroups32",
	[__NR_fchown32] = "fchown32",
	[__NR_setresuid32] = "setresuid32",
	[__NR_getresuid32] = "getresuid32",
	[__NR_setresgid32] = "setresgid32",
	[__NR_getresgid32] = "getresgid32",
	[__NR_chown32] = "chown32",
	[__NR_setuid32] = "setuid32",
	[__NR_setgid32] = "setgid32",
	[__NR_setfsuid32] = "setfsuid32",
	[__NR_setfsgid32] = "setfsgid32",
	[__NR_pivot_root] = "pivot_root",
	[__NR_mincore] = "mincore",
	[__NR_madvise] = "madvise",
	[__NR_getdents64] = "getdents64",
	[__NR_fcntl64] = "fcntl64",
	[__NR_gettid] = "gettid",
	[__NR_readahead] = "readahead",
	[__NR_setxattr] = "setxattr",
	[__NR_lsetxattr] = "lsetxattr",
	[__NR_fsetxattr] = "fsetxattr",
	[__NR_getxattr] = "getxattr",
	[__NR_lgetxattr] = "lgetxattr",
	[__NR_fgetxattr] = "fgetxattr",
	[__NR_listxattr] = "listxattr",
	[__NR_llistxattr] = "llistxattr",
	[__NR_flistxattr] = "flistxattr",
	[__NR_removexattr] = "removexattr",
	[__NR_lremovexattr] = "lremovexattr",
	[__NR_fremovexattr] = "fremovexattr",
	[__NR_tkill] = "tkill",
	[__NR_sendfile64] = "sendfile64",
	[__NR_futex] = "futex",
	[__NR_sched_setaffinity] = "sched_setaffinity",
	[__NR_sched_getaffinity] = "sched_getaffinity",
#ifdef __NR_set_thread_area
	[__NR_set_thread_area] = "set_thread_area",
#endif
#ifdef __NR_get_thread_area
	[__NR_get_thread_area] = "get_thread_area",
#endif
	[__NR_io_setup] = "io_setup",
	[__NR_io_destroy] = "io_destroy",
	[__NR_io_getevents] = "io_getevents",
	[__NR_io_submit] = "io_submit",
	[__NR_io_cancel] = "io_cancel",
#ifdef __NR_fadvise64
	[__NR_fadvise64] = "fadvise64",
#endif
	[__NR_exit_group] = "exit_group",
	[__NR_lookup_dcookie] = "lookup_dcookie",
	[__NR_epoll_create] = "epoll_create",
	[__NR_epoll_ctl] = "epoll_ctl",
	[__NR_epoll_wait] = "epoll_wait",
	[__NR_remap_file_pages] = "remap_file_pages",
	[__NR_set_tid_address] = "set_tid_address",
	[__NR_timer_create] = "timer_create",
	[__NR_timer_settime] = "timer_settime",
	[__NR_timer_gettime] = "timer_gettime",
	[__NR_timer_getoverrun] = "timer_getoverrun",
	[__NR_timer_delete] = "timer_delete",
	[__NR_clock_settime] = "clock_settime",
	[__NR_clock_gettime] = "clock_gettime",
	[__NR_clock_getres] = "clock_getres",
	[__NR_clock_nanosleep] = "clock_nanosleep",
	[__NR_statfs64] = "statfs64",
	[__NR_fstatfs64] = "fstatfs64",
	[__NR_tgkill] = "tgkill",
	[__NR_utimes] = "utimes",
#ifdef __NR_fadvise64_64
	[__NR_fadvise64_64] = "fadvise64_64",
#endif
	[__NR_vserver] = "vserver",
	[__NR_mbind] = "mbind",
	[__NR_get_mempolicy] = "get_mempolicy",
	[__NR_set_mempolicy] = "set_mempolicy",
	[__NR_mq_open] = "mq_open",
	[__NR_mq_unlink] = "mq_unlink",
	[__NR_mq_timedsend] = "mq_timedsend",
	[__NR_mq_timedreceive] = "mq_timedreceive",
	[__NR_mq_notify] = "mq_notify",
	[__NR_mq_getsetattr] = "mq_getsetattr",
	[__NR_waitid] = "waitid",
	[__NR_add_key] = "add_key",
	[__NR_request_key] = "request_key",
	[__NR_keyctl] = "keyctl",
	[__NR_ioprio_set] = "ioprio_set",
	[__NR_ioprio_get] = "ioprio_get",
	[__NR_inotify_init] = "inotify_init",
	[__NR_inotify_add_watch] = "inotify_add_watch",
	[__NR_inotify_rm_watch] = "inotify_rm_watch",
#ifdef __NR_migrate_pages
	[__NR_migrate_pages] = "migrate_pages",
#endif
	[__NR_openat] = "openat",
	[__NR_mkdirat] = "mkdirat",
	[__NR_mknodat] = "mknodat",
	[__NR_fchownat] = "fchownat",
	[__NR_futimesat] = "futimesat",
	[__NR_fstatat64] = "fstatat64",
	[__NR_unlinkat] = "unlinkat",
	[__NR_renameat] = "renameat",
	[__NR_linkat] = "linkat",
	[__NR_symlinkat] = "symlinkat",
	[__NR_readlinkat] = "readlinkat",
	[__NR_fchmodat] = "fchmodat",
	[__NR_faccessat] = "faccessat",
	[__NR_pselect6] = "pselect6",
	[__NR_ppoll] = "ppoll",
	[__NR_unshare] = "unshare",
	[__NR_set_robust_list] = "set_robust_list",
	[__NR_get_robust_list] = "get_robust_list",
	[__NR_splice] = "splice",
#ifdef __NR_sync_file_range
	[__NR_sync_file_range] = "sync_file_range",
#endif
#ifdef __NR_arm_sync_file_range
	[__NR_arm_sync_file_range] = "sync_file_range",
#endif
	[__NR_tee] = "tee",
	[__NR_vmsplice] = "vmsplice",
	[__NR_move_pages] = "move_pages",
	[__NR_getcpu] = "getcpu",
	[__NR_epoll_pwait] = "epoll_pwait",
	[__NR_utimensat] = "utimensat",
	[__NR_signalfd] = "signalfd",
	[__NR_timerfd_create] = "timerfd_create",
	[__NR_eventfd] = "eventfd",
	[__NR_fallocate] = "fallocate",
	[__NR_timerfd_settime] = "timerfd_settime",
	[__NR_timerfd_gettime] = "timerfd_gettime",
	[__NR_signalfd4] = "signalfd4",
	[__NR_eventfd2] = "eventfd2",
	[__NR_epoll_create1] = "epoll_create1",
	[__NR_dup3] = "dup3",
	[__NR_pipe2] = "pipe2",
	[__NR_inotify_init1] = "inotify_init1",
	[__NR_preadv] = "preadv",
	[__NR_pwritev] = "pwritev",
	[__NR_rt_tgsigqueueinfo] = "rt_tgsigqueueinfo",
	[__NR_perf_event_open] = "perf_event_open",
	[__NR_recvmmsg] = "recvmmsg",
	[__NR_fanotify_init] = "fanotify_init",
	[__NR_fanotify_mark] = "fanotify_mark",
	[__NR_prlimit64] = "prlimit64",
	[__NR_name_to_handle_at] = "name_to_handle_at",
	[__NR_open_by_handle_at] = "open_by_handle_at",
	[__NR_clock_adjtime] = "clock_adjtime",
	[__NR_syncfs] = "syncfs",
	[__NR_sendmmsg] = "sendmmsg",
	[__NR_setns] = "setns",
	[__NR_process_vm_readv] = "process_vm_readv",
	[__NR_process_vm_writev] = "process_vm_writev"
};
