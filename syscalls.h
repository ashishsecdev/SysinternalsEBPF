/*
    SysinternalsEBPF

    Copyright (c) Microsoft Corporation

    All rights reserved.

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
*/

//====================================================================
//
// syscalls.h
//
// Linux syscall names and number of arguments, indexed by syscall
// number.
//
//====================================================================

#ifndef SYSCALLS_H
#define SYSCALLS_H

#include "sysinternalsEBPF.h"

typedef struct {
    const char name[SYSCALL_NAME_LEN];
    const unsigned int numArgs;
} syscallNames;

const syscallNames syscallNumToName[SYSCALL_MAX+1] = {
    {"read",3},
    {"write",3},
    {"open",3},
    {"close",1},
    {"stat",2},
    {"fstat",2},
    {"lstat",2},
    {"poll",3},
    {"lseek",3},
    {"mmap",6},
    {"mprotect",3},
    {"munmap",2},
    {"brk",1},
    {"rt_sigaction",4},
    {"rt_sigprocmask",4},
    {"rt_sigreturn",1},
    {"ioctl",3},
    {"pread64",4},
    {"pwrite64",4},
    {"readv",3},
    {"writev",3},
    {"access",2},
    {"pipe",1},
    {"select",5},
    {"sched_yield",0},
    {"mremap",5},
    {"msync",3},
    {"mincore",3},
    {"madvise",3},
    {"shmget",3},
    {"shmat",3},
    {"shmctl",3},
    {"dup",1},
    {"dup2",2},
    {"pause",0},
    {"nanosleep",2},
    {"getitimer",2},
    {"alarm",1},
    {"setitimer",3},
    {"getpid",0},
    {"sendfile",4},
    {"socket",3},
    {"connect",3},
    {"accept",3},
    {"sendto",6},
    {"recvfrom",6},
    {"sendmsg",3},
    {"recvmsg",3},
    {"shutdown",2},
    {"bind",3},
    {"listen",2},
    {"getsockname",3},
    {"getpeername",3},
    {"socketpair",4},
    {"setsockopt",5},
    {"getsockopt",5},
    {"clone",5},
    {"fork",0},
    {"vfork",0},
    {"execve",3},
    {"exit",1},
    {"wait4",4},
    {"kill",2},
    {"uname",1},
    {"semget",3},
    {"semop",3},
    {"semctl",4},
    {"shmdt",1},
    {"msgget",2},
    {"msgsnd",4},
    {"msgrcv",5},
    {"msgctl",3},
    {"fcntl",3},
    {"flock",2},
    {"fsync",1},
    {"fdatasync",1},
    {"truncate",2},
    {"ftruncate",2},
    {"getdents",3},
    {"getcwd",2},
    {"chdir",1},
    {"fchdir",1},
    {"rename",2},
    {"mkdir",2},
    {"rmdir",1},
    {"creat",2},
    {"link",2},
    {"unlink",1},
    {"symlink",2},
    {"readlink",3},
    {"chmod",2},
    {"fchmod",2},
    {"chown",3},
    {"fchown",3},
    {"lchown",3},
    {"umask",1},
    {"gettimeofday",2},
    {"getrlimit",2},
    {"getrusage",2},
    {"sysinfo",1},
    {"times",1},
    {"ptrace",4},
    {"getuid",0},
    {"syslog",3},
    {"getgid",0},
    {"setuid",1},
    {"setgid",1},
    {"geteuid",0},
    {"getegid",0},
    {"setpgid",2},
    {"getppid",0},
    {"getpgrp",0},
    {"setsid",0},
    {"setreuid",2},
    {"setregid",2},
    {"getgroups",2},
    {"setgroups",2},
    {"setresuid",3},
    {"getresuid",3},
    {"setresgid",3},
    {"getresgid",3},
    {"getpgid",1},
    {"setfsuid",1},
    {"setfsgid",1},
    {"getsid",1},
    {"capget",2},
    {"capset",2},
    {"rt_sigpending",2},
    {"rt_sigtimedwait",4},
    {"rt_sigqueueinfo",3},
    {"rt_sigsuspend",2},
    {"sigaltstack",2},
    {"utime",2},
    {"mknod",3},
    {"uselib",0},
    {"personality",1},
    {"ustat",2},
    {"statfs",2},
    {"fstatfs",2},
    {"sysfs",3},
    {"getpriority",2},
    {"setpriority",3},
    {"sched_setparam",2},
    {"sched_getparam",2},
    {"sched_setscheduler",3},
    {"sched_getscheduler",1},
    {"sched_get_priority_max",1},
    {"sched_get_priority_min",1},
    {"sched_rr_get_interval",2},
    {"mlock",2},
    {"munlock",2},
    {"mlockall",1},
    {"munlockall",0},
    {"vhangup",0},
    {"modify_ldt",3},
    {"pivot_root",2},
    {"_sysctl",1},
    {"prctl",5},
    {"arch_prctl",3},
    {"adjtimex",1},
    {"setrlimit",2},
    {"chroot",1},
    {"sync",0},
    {"acct",1},
    {"settimeofday",2},
    {"mount",5},
    {"umount2",2},
    {"swapon",2},
    {"swapoff",1},
    {"reboot",4},
    {"sethostname",2},
    {"setdomainname",2},
    {"iopl",2},
    {"ioperm",3},
    {"create_module",0},
    {"init_module",3},
    {"delete_module",2},
    {"get_kernel_syms",0},
    {"query_module",0},
    {"quotactl",4},
    {"nfsservctl",0},
    {"getpmsg",0},
    {"putpmsg",0},
    {"afs_syscall",0},
    {"tuxcall",0},
    {"security",0},
    {"gettid",0},
    {"readahead",3},
    {"setxattr",5},
    {"lsetxattr",5},
    {"fsetxattr",5},
    {"getxattr",4},
    {"lgetxattr",4},
    {"fgetxattr",4},
    {"listxattr",3},
    {"llistxattr",3},
    {"flistxattr",3},
    {"removexattr",2},
    {"lremovexattr",2},
    {"fremovexattr",2},
    {"tkill",2},
    {"time",1},
    {"futex",6},
    {"sched_setaffinity",3},
    {"sched_getaffinity",3},
    {"set_thread_area",0},
    {"io_setup",2},
    {"io_destroy",1},
    {"io_getevents",4},
    {"io_submit",3},
    {"io_cancel",3},
    {"get_thread_area",0},
    {"lookup_dcookie",3},
    {"epoll_create",1},
    {"epoll_ctl_old",0},
    {"epoll_wait_old",0},
    {"remap_file_pages",5},
    {"getdents64",3},
    {"set_tid_address",1},
    {"restart_syscall",0},
    {"semtimedop",4},
    {"fadvise64",4},
    {"timer_create",3},
    {"timer_settime",4},
    {"timer_gettime",2},
    {"timer_getoverrun",1},
    {"timer_delete",1},
    {"clock_settime",2},
    {"clock_gettime",2},
    {"clock_getres",2},
    {"clock_nanosleep",4},
    {"exit_group",1},
    {"epoll_wait",4},
    {"epoll_ctl",4},
    {"tgkill",3},
    {"utimes",2},
    {"vserver",0},
    {"mbind",6},
    {"set_mempolicy",3},
    {"get_mempolicy",5},
    {"mq_open",4},
    {"mq_unlink",1},
    {"mq_timedsend",5},
    {"mq_timedreceive",5},
    {"mq_notify",2},
    {"mq_getsetattr",3},
    {"kexec_load",4},
    {"waitid",5},
    {"add_key",4},
    {"request_key",4},
    {"keyctl",5},
    {"ioprio_set",3},
    {"ioprio_get",2},
    {"inotify_init",0},
    {"inotify_add_watch",3},
    {"inotify_rm_watch",2},
    {"migrate_pages",4},
    {"openat",4},
    {"mkdirat",3},
    {"mknodat",4},
    {"fchownat",5},
    {"futimesat",3},
    {"newfstatat",4},
    {"unlinkat",3},
    {"renameat",4},
    {"linkat",5},
    {"symlinkat",3},
    {"readlinkat",4},
    {"fchmodat",3},
    {"faccessat",3},
    {"pselect6",6},
    {"ppoll",5},
    {"unshare",1},
    {"set_robust_list",2},
    {"get_robust_list",3},
    {"splice",6},
    {"tee",4},
    {"sync_file_range",4},
    {"vmsplice",4},
    {"move_pages",6},
    {"utimensat",4},
    {"epoll_pwait",6},
    {"signalfd",3},
    {"timerfd_create",2},
    {"eventfd",1},
    {"fallocate",4},
    {"timerfd_settime",4},
    {"timerfd_gettime",2},
    {"accept4",4},
    {"signalfd4",4},
    {"eventfd2",2},
    {"epoll_create1",1},
    {"dup3",3},
    {"pipe2",2},
    {"inotify_init1",1},
    {"preadv",5},
    {"pwritev",5},
    {"rt_tgsigqueueinfo",4},
    {"perf_event_open",5},
    {"recvmmsg",5},
    {"fanotify_init",2},
    {"fanotify_mark",5},
    {"prlimit64",4},
    {"name_to_handle_at",5},
    {"open_by_handle_at",5},
    {"clock_adjtime",2},
    {"syncfs",1},
    {"sendmmsg",4},
    {"setns",2},
    {"getcpu",3},
    {"process_vm_readv",6},
    {"process_vm_writev",6},
    {"kcmp",5},
    {"finit_module",3},
    {"sched_setattr",3},
    {"sched_getattr",4},
    {"renameat2",5},
    {"seccomp",3},
    {"getrandom",3},
    {"memfd_create",2},
    {"kexec_file_load",5},
    {"bpf",3},
    {"execveat",5},
    {"userfaultfd",1},
    {"membarrier",2},
    {"mlock2",3},
    {"copy_file_range",6},
    {"preadv2",6},
    {"pwritev2",6},
    {"pkey_mprotect",0},
    {"pkey_alloc",0},
    {"pkey_free",0},
    {"statx",0},
    {"io_pgetevents",0},
    {"rseq",0}
};

#endif
