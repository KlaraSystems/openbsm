/*
 * @APPLE_LICENSE_HEADER_START@
 *
 * Copyright (c) 1999-2004 Apple Computer, Inc. All Rights Reserved.
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_LICENSE_HEADER_END@
 */

#ifndef _BSM_AUDIT_KEVENTS_H_
#define	_BSM_AUDIT_KEVENTS_H_

/*
 * Values marked as	AUE_NULL are not required to be audited as per CAPP.
 */

#define	AUE_NULL		0

#define	AUE_EXIT		1
#define	AUE_FORK		2
#define	AUE_OPEN		3
#define	AUE_CREAT		4
#define	AUE_O_CREAT		AUE_CREAT
#define	AUE_LINK		5
#define	AUE_UNLINK		6
#define	AUE_DELETE		AUE_UNLINK
#define	AUE_EXEC		7
#define	AUE_CHDIR		8
#define	AUE_MKNOD		9
#define	AUE_CHMOD		10
#define	AUE_CHOWN		11
#define	AUE_UMOUNT		12
#define	AUE_O_UMOUNT		AUE_UMOUNT
#define	AUE_ACCESS		14
#define	AUE_CHECKUSERACCESS	AUE_ACCESS
#define	AUE_KILL		15
#define	AUE_STAT		16
#define	AUE_O_STAT		AUE_STAT
#define	AUE_LSTAT		17
#define	AUE_O_LSTAT		AUE_LSTAT
#define	AUE_ACCT		18
#define	AUE_SOLARIS_REBOOT	20	/* XXX: Darwin conflict. */
#define	AUE_SYMLINK		21
#define	AUE_READLINK		22
#define	AUE_EXECVE		23
#define	AUE_CHROOT		24
#define	AUE_VFORK		25
#define	AUE_SETGROUPS		26
#define	AUE_SETPGRP		27
#define	AUE_SWAPON		28
#define	AUE_SOLARIS_SETHOSTNAME	29	/* XXX: Darwin conflict. */
#define	AUE_FCNTL		30
#define	AUE_SOLARIS_SETPRIORITY	31	/* XXX: Darwin conflict. */
#define	AUE_CONNECT		32
#define	AUE_ACCEPT		33
#define	AUE_O_ACCEPT		AUE_ACCEPT
#define	AUE_BIND		34
#define	AUE_SETSOCKOPT		35
#define	AUE_VTRACE		36	/* Solaris-specific. */
#define	AUE_SOLARIS_SETTIMEOFDAY	37	/* XXX: Darwin conflict. */
#define	AUE_FCHOWN		38
#define	AUE_FCHMOD		39
/* XXX: #define	AUE_SYSINFO		39 */
#define	AUE_SETREUID		40
#define	AUE_O_SETREUID		AUE_SETREUID
#define	AUE_SETREGID		41
#define	AUE_O_SETREGID		AUE_SETREGID
#define	AUE_RENAME		42
#define	AUE_SOLARIS_TRUNCATE	43	/* XXX: Darwin conflict. */
#define	AUE_SOLARIS_FTRUNCATE	44	/* XXX: Darwin conflict. */
#define	AUE_SOLARIS_FLOCK	45	/* XXX: Darwin conflict. */
#define	AUE_SHUTDOWN		46
#define	AUE_MKDIR		47
#define	AUE_RMDIR		48
#define	AUE_UTIMES		49
#define	AUE_ADJTIME		50
#define	AUE_SETRLIMIT		51
#define	AUE_O_SETRLIMIT		AUE_SETRLIMIT
#define	AUE_KILLPG		52
#define	AUE_O_KILLPG		AUE_KILLPG
#define	AUE_SOLARIS_NFS_SVC	53	/* XXX: Darwin conflict. */
#define	AUE_STATFS		54
#define	AUE_FSTATFS		55
#define	AUE_SOLARIS_UNMOUNT	56	/* XXX: Darwin conflict. */
#define	AUE_ASYNC_DAEMON	57
#define	AUE_NFS_GETFH		58	/* XXX: Darwin conflict. */
#define	AUE_SOLARIS_SETDOMAINNAME	59	/* XXX: Darwin conflict. */
#define	AUE_O_SETDOMAINNAME	AUE_SYSCTL
#define	AUE_SOLARIS_QUOTACTL	60	/* XXX: Darwin conflict. */
#define	AUE_EXPORTFS		61
#define	AUE_O_EXPORTFS		AUE_EXPORTFS
#define	AUE_MOUNT		62
#define	AUE_O_MOUNT		AUE_MOUNT
#define	AUE_SEMSYS		63
#define	AUE_MSGSYS		64
#define	AUE_SHMSYS		65
#define	AUE_BSMSYS		66	/* Solaris-specific. */
#define	AUE_RFSSYS		67	/* Solaris-specific. */
#define	AUE_FCHDIR		68
#define	AUE_FCHROOT		69
#define	AUE_VPIXSYS		70	/* Solaris-specific. */
#define	AUE_PATHCONF		71
#define	AUE_OPEN_R		72
#define	AUE_OPEN_RC		73
#define	AUE_OPEN_RT		74
#define	AUE_OPEN_RTC		75
#define	AUE_OPEN_W		76
#define	AUE_OPEN_WC		77
#define	AUE_OPEN_WT		78
#define	AUE_OPEN_WTC		79
#define	AUE_OPEN_RW		80
#define	AUE_OPEN_RWC		81
#define	AUE_OPEN_RWT		82
#define	AUE_OPEN_RWTC		83
#define	AUE_MSGCTL		84
#define	AUE_MSGCTL_RMID		85
#define	AUE_MSGCTL_SET		86
#define	AUE_MSGCTL_STAT		87
#define	AUE_MSGGET		88
#define	AUE_MSGRCV		89
#define	AUE_MSGSND		90
#define	AUE_SHMCTL		91
#define	AUE_SHMCTL_RMID		92
#define	AUE_SHMCTL_SET		93
#define	AUE_SHMCTL_STAT		94
#define	AUE_SHMGET		95
#define	AUE_SHMAT		96
#define	AUE_SHMDT		97
#define	AUE_SEMCTL		98
#define	AUE_SEMCTL_RMID		99
#define	AUE_SEMCTL_SET		100
#define	AUE_SEMCTL_STAT		101
#define	AUE_SEMCTL_GETNCNT	102
#define	AUE_SEMCTL_GETPID	103
#define	AUE_SEMCTL_GETVAL	104
#define	AUE_SEMCTL_GETALL	105
#define	AUE_SEMCTL_GETZCNT	106
#define	AUE_SEMCTL_SETVAL	107
#define	AUE_SEMCTL_SETALL	108
#define	AUE_SEMGET		109
#define	AUE_SEMOP		110
#define	AUE_CORE		111
#define	AUE_CLOSE		112
#define	AUE_SYSTEMBOOT		113
#define	AUE_ASYNC_DAEMON_EXIT	114	/* Solaris-only. */
#define	AUE_NFSSVC_EXIT		115	/* Solaris-only. */
#define	AUE_WRITEL		128	/* Solaris-only. */
#define	AUE_WRITEVL		129	/* Solaris-only. */
#define	AUE_GETAUID		130
#define	AUE_SETAUID		131
#define	AUE_GETAUDIT		132
#define	AUE_SETAUDIT		133
#define	AUE_AUDITON		138
#define	AUE_AUDITON_GPOLICY	141
#define	AUE_AUDITON_SPOLICY	142
#define	AUE_AUDITON_GQCTRL	145
#define	AUE_AUDITON_SQCTRL	146
#define	AUE_GETPORTAUDIT	149
#define	AUE_ENTERPROM		153
#define	AUE_EXITPROM		154
#define	AUE_IOCTL		158
#define	AUE_SOCKCONFIG		183
#define	AUE_SOCKET		183
#define	AUE_SENDTO		184
#define	AUE_PIPE		185
					/* XXXRW: XXX Solaris socketpair()? */
					/* XXXRW: XXX Solaris send()? */
#define	AUE_SENDMSG		188
#define	AUE_O_SEND		AUE_SENDMSG
#define	AUE_O_SENDMSG		AUE_SENDMSG
					/* XXXRW: XXX Solaris recv()? */
#define	AUE_RECVMSG		190
#define	AUE_O_RECV		AUE_RECVMSG
#define	AUE_O_RECVMSG		AUE_RECVMSG
#define	AUE_RECVFROM		191
#define	AUE_O_RECVFROM		AUE_RECVFROM
#define	AUE_READ		192
#define	AUE_LSEEK		194
#define	AUE_O_LSEEK		AUE_LSEEK
#define	AUE_WRITE		195
#define	AUE_WRITEV		196
#define	AUE_READV		198
					/* XXXRW: XXX Solaris old stat()? */
#define	AUE_SETUID		200	/* XXXRW: Solaris old setuid? */
#define	AUE_STIME		201	/* XXXRW: Solaris old stime? */
#define	AUE_UTIME		202	/* XXXRW: Solaris old utime? */
#define	AUE_NICE		203	/* XXXRW: Solaris old nice? */
					/* XXXRW: Solaris old setpgrp? */
#define	AUE_SETGID		205	/* XXXRW: Solaris old setgid? */
					/* XXXRW: Solaris readl? */
					/* XXXRW: Solaris readvl()? */
#define	AUE_DUP2		209
#define	AUE_MMAP		210
#define	AUE_O_MMAP		AUE_MMAP
#define	AUE_AUDIT		211
#define	AUE_PRIOCNTLSYS		212
#define	AUE_MUNMAP		213
#define	AUE_SETEGID		214
#define	AUE_SETEUID		215
#define	AUE_PUTMSG		216
#define	AUE_GETMSG		217
#define	AUE_PUTPMSG		218
#define	AUE_GETPMSG		219
					/* XXXRW: Solaris sc placeholder? */
#define	AUE_AUDITON_GETKMASK	221
#define	AUE_AUDITON_SETKMASK	222
#define	AUE_AUDITON_GETCWD	223
#define	AUE_AUDITON_GETCAR	224
#define	AUE_AUDITON_GETSTAT	225
#define	AUE_AUDITON_SETSTAT	226
#define	AUE_AUDITON_SETUMASK	227
#define	AUE_AUDITON_SETSMASK	228
#define	AUE_AUDITON_GETCOND	229
#define	AUE_AUDITON_SETCOND	230
#define	AUE_AUDITON_GETCLASS	231
#define	AUE_AUDITON_SETCLASS	232
#define	AUE_UTSSYS		233
#define	AUE_STATVFS		234
#define	AUE_XSTAT		235
#define	AUE_LXSTAT		236
#define	AUE_LCHOWN		237
#define	AUE_MEMCNTL		238
#define	AUE_SYSINFO		239
#define	AUE_XMKNOD		240
#define	AUE_FORK1		241
					/* XXXRW: Solaris modctl()? */
#define	AUE_MODLOAD		243
#define	AUE_MODUNLOAD		244
#define	AUE_MODCONFIG		245
#define	AUE_MODADDMAJ		246
#define	AUE_SOCKACCEPT		247
#define	AUE_SOCKCONNECT		248
#define	AUE_SOCKSEND		249
#define	AUE_SOCKRECEIVE		250
#define	AUE_ACLSET		251
#define	AUE_FACLSET		252
#define	AUE_DOORFS_DOOR_CALL	254
#define	AUE_DOORFS_DOOR_RETURN	255
#define	AUE_DOORFS_DOOR_CREATE	256
#define	AUE_DOORFS_DOOR_REVOKE	257
#define	AUE_DOORFS_DOOR_INFO	258
#define	AUE_DOORFS_DOOR_CRED	259
#define	AUE_DOORFS_DOOR_BIND	260
#define	AUE_DOORFS_DOOR_UNBIND	261
#define	AUE_P_ONLINE		262
#define	AUE_PROCESSOR_BIND	263
#define	AUE_INST_SYNC		264
#define	AUE_SETAUDIT_ADDR	266
#define	AUE_GETAUDIT_ADDR	267
#define	AUE_GETFSSTAT		301
#define	AUE_PTRACE		302
#define	AUE_CHFLAGS		303
#define	AUE_FCHFLAGS		304
#define	AUE_PROFILE		305
#define	AUE_KTRACE		306
#define	AUE_SETLOGIN		307
#define	AUE_REBOOT		308	/* XXX: See AUE_SOLARIS_REBOOT. */
#define	AUE_REVOKE		309
#define	AUE_UMASK		310
#define	AUE_MPROTECT		311
#define	AUE_SETPRIORITY		312	/* XXX: See AUE_SOLARIS_SETPRIORITY. */
#define	AUE_SETTIMEOFDAY	313	/* XXX: See AUE_SOLARIS_SETTIMEOFDAY. */
#define	AUE_FLOCK		314	/* XXX: See AUE_SOLARIS_FLOCK. */
#define	AUE_MKFIFO		315
#define	AUE_POLL		316
#define	AUE_SOCKETPAIR		317	/* XXXRW: What about 186? */
#define	AUE_FUTIMES		318
#define	AUE_SETSID		319
#define	AUE_SETPRIVEXEC		320
#define	AUE_NFSSVC		321	/* XXX: See AUE_SOLARIS_NFS_SVC. */
#define	AUE_GETFH		322	/* XXX: See AUE_SOLARIS_NFS_GETFH. */
#define	AUE_QUOTACTL		323	/* XXX: See AUE_SOLARIS_QUOTACTL. */
#define	AUE_ADDPROFILE		324
#define	AUE_KDBUGTRACE		325
#define	AUE_FSTAT		326
#define	AUE_O_FSTAT		AUE_FSTAT
#define	AUE_FPATHCONF		327
#define	AUE_GETDIRENTRIES	328
#define	AUE_O_GETDIRENTRIES	AUE_GETDIRENTRIES
#define	AUE_TRUNCATE		329	/* XXX: See AUE_SOLARIS_TRUNCATE. */
#define	AUE_O_TRUNCATE		AUE_TRUNCATE
#define	AUE_FTRUNCATE		330	/* XXX: See AUE_SOLARIS_FTRUNCATE. */
#define	AUE_O_FTRUNCATE		AUE_FTRUNCATE
#define	AUE_SYSCTL		331
#define	AUE_O_SETHOSTNAME	AUE_SYSCTL	/* XXX: See AUE_SOLARIS_SET.. */
#define	AUE_MLOCK		332
#define	AUE_MUNLOCK		333
#define	AUE_UNDELETE		334
#define	AUE_GETATTRLIST		335
#define	AUE_SETATTRLIST		336
#define	AUE_GETDIRENTRIESATTR	337
#define	AUE_EXCHANGEDATA	338
#define	AUE_SEARCHFS		339
#define	AUE_MINHERIT		340
#define	AUE_SEMCONFIG		341
#define	AUE_SEMOPEN		342
#define	AUE_SEMCLOSE		343
#define	AUE_SEMUNLINK		344
#define	AUE_SHMOPEN		345
#define	AUE_SHMUNLINK		346
#define	AUE_LOADSHFILE		347
#define	AUE_RESETSHFILE		348
#define	AUE_NEWSYSTEMSHREG	349
#define	AUE_PTHREADKILL		350
#define	AUE_PTHREADSIGMASK	351
#define	AUE_AUDITCTL		352
#define	AUE_RFORK		353
#define	AUE_LCHMOD		354
#define	AUE_SWAPOFF		355
#define	AUE_INITPROCESS		356
#define	AUE_MAPFD		357
#define	AUE_TASKFORPID		358
#define	AUE_PIDFORTASK		359
#define	AUE_SYSCTL_NONADMIN	360
#define	AUE_COPYFILE		361
#define	AUE_LUTIMES		362
#define	AUE_LCHFLAGS		363	/* FreeBSD */
#define	AUE_SENDFILE		364
#define	AUE_USELIB		365	/* Linux */
#define	AUE_GETRESUID		366
#define	AUE_SETRESUID		367
#define	AUE_GETRESGID		368
#define	AUE_SETRESGID		369
#define	AUE_WAIT4		370	/* FreeBSD */
#define	AUE_LGETFH		371	/* FreeBSD */
#define	AUE_FHSTATFS		372	/* FreeBSD */
#define	AUE_FHOPEN		373	/* FreeBSD */
#define	AUE_FHSTAT		374	/* FreeBSD */
#define	AUE_JAIL		375	/* FreeBSD */
#define	AUE_EACCESS		376	/* FreeBSD */
#define	AUE_KQUEUE		377	/* FreeBSD */
#define	AUE_KEVENT		378	/* FreeBSD */

/*
 * XXXRW: Values not yet assigned.
 */
#define	AUE_DUP			AUE_NULL
#define	AUE_FSCTL		AUE_NULL
#define	AUE_FSTATV		AUE_NULL
#define	AUE_FSYNC		AUE_NULL
#define	AUE_GCCONTROL		AUE_NULL
#define	AUE_GETDTABLESIZE	AUE_NULL
#define	AUE_GETEGID		AUE_NULL
#define	AUE_GETEUID		AUE_NULL
#define	AUE_GETGID		AUE_NULL
#define	AUE_GETGROUPS		AUE_NULL
#define	AUE_GETITIMER		AUE_NULL
#define	AUE_GETLOGIN		AUE_NULL
#define	AUE_GETPEERNAME		AUE_NULL
#define	AUE_O_GETPEERNAME	AUE_GETPEERNAME
#define	AUE_GETPGID		AUE_NULL
#define	AUE_GETPGRP		AUE_NULL
#define	AUE_GETPID		AUE_NULL
#define	AUE_GETPPID		AUE_NULL
#define	AUE_GETPRIORITY		AUE_NULL
#define	AUE_GETRLIMIT		AUE_NULL
#define	AUE_O_GETRLIMIT		AUE_GETRLIMIT
#define	AUE_GETRUSAGE		AUE_NULL
#define	AUE_GETSID		AUE_NULL
#define	AUE_GETSOCKNAME		AUE_NULL
#define	AUE_O_GETSOCKNAME	AUE_GETSOCKNAME
#define	AUE_GETTIMEOFDAY	AUE_NULL
#define	AUE_GETUID		AUE_NULL
#define	AUE_GETSOCKOPT		AUE_NULL
#define	AUE_GTSOCKOPT		AUE_GETSOCKOPT
#define	AUE_ISSETUGID		AUE_NULL
#define	AUE_LISTEN		AUE_NULL
#define	AUE_LSTATV		AUE_NULL
#define	AUE_MADVISE		AUE_NULL
#define	AUE_MINCORE		AUE_NULL
#define	AUE_MKCOMPLEX		AUE_NULL
#define	AUE_MLOCKALL		AUE_NULL
#define	AUE_MODWATCH		AUE_NULL
#define	AUE_MSGCL		AUE_NULL
#define	AUE_MSYNC		AUE_NULL
#define	AUE_MUNLOCKALL		AUE_NULL
#define	AUE_O_ASYNCDAEMON	AUE_NULL
#define	AUE_O_EXECV		AUE_NULL
#define	AUE_O_GETDENTS		AUE_NULL
#define	AUE_O_GETDOMAINNAME	AUE_NULL
#define	AUE_O_GETDOPT		AUE_NULL
#define	AUE_O_GETHOSTID		AUE_NULL
#define	AUE_O_GETHOSTNAME	AUE_NULL
#define	AUE_O_GETPAGESIZE	AUE_NULL
#define	AUE_O_PCFS_MOUNT	AUE_NULL
#define	AUE_O_QUOTA		AUE_NULL
#define	AUE_O_RESUBA		AUE_NULL
#define	AUE_O_RPAUSE		AUE_NULL
#define	AUE_O_SBREAK		AUE_NULL
#define	AUE_O_SETDOPT		AUE_NULL
#define	AUE_O_SETHOSTID		AUE_NULL
#define	AUE_O_SETQUOTA		AUE_NULL
#define	AUE_O_SIGBLOCK		AUE_NULL
#define	AUE_O_SIGSETMASK	AUE_NULL
#define	AUE_O_SIGSTACK		AUE_NULL
#define	AUE_O_SIGVEC		AUE_NULL
#define	AUE_O_USTATE		AUE_NULL
#define	AUE_O_VADVISE		AUE_NULL
#define	AUE_O_VHANGUP		AUE_NULL
#define	AUE_O_VLIMIT		AUE_NULL
#define	AUE_O_VREAD		AUE_NULL
#define	AUE_O_VTIMES		AUE_NULL
#define	AUE_O_VTRACE		AUE_NULL
#define	AUE_O_VWRITE		AUE_NULL
#define	AUE_O_WAIT		AUE_NULL
#define	AUE_O_WAIT3		AUE_NULL
#define	AUE_PREAD		AUE_NULL
#define	AUE_PWRITE		AUE_NULL
#define	AUE_SBRK		AUE_NULL
#define	AUE_SELECT		AUE_NULL
#define	AUE_SEMDESTROY		AUE_NULL
#define	AUE_SEMGETVALUE		AUE_NULL
#define	AUE_SEMINIT		AUE_NULL
#define	AUE_SEMPOST		AUE_NULL
#define	AUE_SEMTRYWAIT		AUE_NULL
#define	AUE_SEMWAIT		AUE_NULL
#define	AUE_SETITIMER		AUE_NULL
#define	AUE_SIGACTION		AUE_NULL
#define	AUE_SIGALTSTACK		AUE_NULL
#define	AUE_SIGPENDING		AUE_NULL
#define	AUE_SIGPROCMASK		AUE_NULL
#define	AUE_SIGRETURN		AUE_NULL
#define	AUE_SIGSUSPEND		AUE_NULL
#define	AUE_SIGWAIT		AUE_NULL
#define	AUE_SSTK		AUE_NULL
#define	AUE_STATV		AUE_NULL
#define	AUE_SYNC		AUE_NULL
#define	AUE_SYSCALL		AUE_NULL
#define	AUE_TABLE		AUE_NULL
#define	AUE_WAITEVENT		AUE_NULL
#define	AUE_WATCHEVENT		AUE_NULL

#endif /* !_BSM_AUDIT_KEVENTS_H_ */
