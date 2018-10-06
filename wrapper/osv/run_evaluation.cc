#include<fcntl.h>
#include<run_evaluation.h>
int run_evaluation() {


	#pragma message "PXNAME F_DUPFD !"
	#ifdef F_DUPFD
	#pragma message "PXEXIST F_DUPFD !"
	// std::cout << "PXEXIST F_DUPFD !" << std::endl;
	#else 
	#pragma message "PXMISSING F_DUPFD !"
	// std::cout << "PXMISSING F_DUPFD !" << std::endl;
	#endif 




	#pragma message "PXNAME F_DUPFD_CLOEXEC !"
	#ifdef F_DUPFD_CLOEXEC
	#pragma message "PXEXIST F_DUPFD_CLOEXEC !"
	// std::cout << "PXEXIST F_DUPFD_CLOEXEC !" << std::endl;
	#else 
	#pragma message "PXMISSING F_DUPFD_CLOEXEC !"
	// std::cout << "PXMISSING F_DUPFD_CLOEXEC !" << std::endl;
	#endif 




	#pragma message "PXNAME F_GETFD !"
	#ifdef F_GETFD
	#pragma message "PXEXIST F_GETFD !"
	// std::cout << "PXEXIST F_GETFD !" << std::endl;
	#else 
	#pragma message "PXMISSING F_GETFD !"
	// std::cout << "PXMISSING F_GETFD !" << std::endl;
	#endif 




	#pragma message "PXNAME F_SETFD !"
	#ifdef F_SETFD
	#pragma message "PXEXIST F_SETFD !"
	// std::cout << "PXEXIST F_SETFD !" << std::endl;
	#else 
	#pragma message "PXMISSING F_SETFD !"
	// std::cout << "PXMISSING F_SETFD !" << std::endl;
	#endif 




	#pragma message "PXNAME F_GETFL !"
	#ifdef F_GETFL
	#pragma message "PXEXIST F_GETFL !"
	// std::cout << "PXEXIST F_GETFL !" << std::endl;
	#else 
	#pragma message "PXMISSING F_GETFL !"
	// std::cout << "PXMISSING F_GETFL !" << std::endl;
	#endif 




	#pragma message "PXNAME F_SETFL !"
	#ifdef F_SETFL
	#pragma message "PXEXIST F_SETFL !"
	// std::cout << "PXEXIST F_SETFL !" << std::endl;
	#else 
	#pragma message "PXMISSING F_SETFL !"
	// std::cout << "PXMISSING F_SETFL !" << std::endl;
	#endif 




	#pragma message "PXNAME F_GETLK !"
	#ifdef F_GETLK
	#pragma message "PXEXIST F_GETLK !"
	// std::cout << "PXEXIST F_GETLK !" << std::endl;
	#else 
	#pragma message "PXMISSING F_GETLK !"
	// std::cout << "PXMISSING F_GETLK !" << std::endl;
	#endif 




	#pragma message "PXNAME F_SETLK !"
	#ifdef F_SETLK
	#pragma message "PXEXIST F_SETLK !"
	// std::cout << "PXEXIST F_SETLK !" << std::endl;
	#else 
	#pragma message "PXMISSING F_SETLK !"
	// std::cout << "PXMISSING F_SETLK !" << std::endl;
	#endif 




	#pragma message "PXNAME F_SETLKW !"
	#ifdef F_SETLKW
	#pragma message "PXEXIST F_SETLKW !"
	// std::cout << "PXEXIST F_SETLKW !" << std::endl;
	#else 
	#pragma message "PXMISSING F_SETLKW !"
	// std::cout << "PXMISSING F_SETLKW !" << std::endl;
	#endif 




	#pragma message "PXNAME F_GETOWN !"
	#ifdef F_GETOWN
	#pragma message "PXEXIST F_GETOWN !"
	// std::cout << "PXEXIST F_GETOWN !" << std::endl;
	#else 
	#pragma message "PXMISSING F_GETOWN !"
	// std::cout << "PXMISSING F_GETOWN !" << std::endl;
	#endif 




	#pragma message "PXNAME F_SETOWN !"
	#ifdef F_SETOWN
	#pragma message "PXEXIST F_SETOWN !"
	// std::cout << "PXEXIST F_SETOWN !" << std::endl;
	#else 
	#pragma message "PXMISSING F_SETOWN !"
	// std::cout << "PXMISSING F_SETOWN !" << std::endl;
	#endif 




	#pragma message "PXNAME FD_CLOEXEC !"
	#ifdef FD_CLOEXEC
	#pragma message "PXEXIST FD_CLOEXEC !"
	// std::cout << "PXEXIST FD_CLOEXEC !" << std::endl;
	#else 
	#pragma message "PXMISSING FD_CLOEXEC !"
	// std::cout << "PXMISSING FD_CLOEXEC !" << std::endl;
	#endif 




	#pragma message "PXNAME F_RDLCK !"
	#ifdef F_RDLCK
	#pragma message "PXEXIST F_RDLCK !"
	// std::cout << "PXEXIST F_RDLCK !" << std::endl;
	#else 
	#pragma message "PXMISSING F_RDLCK !"
	// std::cout << "PXMISSING F_RDLCK !" << std::endl;
	#endif 




	#pragma message "PXNAME F_UNLCK !"
	#ifdef F_UNLCK
	#pragma message "PXEXIST F_UNLCK !"
	// std::cout << "PXEXIST F_UNLCK !" << std::endl;
	#else 
	#pragma message "PXMISSING F_UNLCK !"
	// std::cout << "PXMISSING F_UNLCK !" << std::endl;
	#endif 




	#pragma message "PXNAME F_WRLCK !"
	#ifdef F_WRLCK
	#pragma message "PXEXIST F_WRLCK !"
	// std::cout << "PXEXIST F_WRLCK !" << std::endl;
	#else 
	#pragma message "PXMISSING F_WRLCK !"
	// std::cout << "PXMISSING F_WRLCK !" << std::endl;
	#endif 




	#pragma message "PXNAME O_CLOEXEC !"
	#ifdef O_CLOEXEC
	#pragma message "PXEXIST O_CLOEXEC !"
	// std::cout << "PXEXIST O_CLOEXEC !" << std::endl;
	#else 
	#pragma message "PXMISSING O_CLOEXEC !"
	// std::cout << "PXMISSING O_CLOEXEC !" << std::endl;
	#endif 




	#pragma message "PXNAME O_CREAT !"
	#ifdef O_CREAT
	#pragma message "PXEXIST O_CREAT !"
	// std::cout << "PXEXIST O_CREAT !" << std::endl;
	#else 
	#pragma message "PXMISSING O_CREAT !"
	// std::cout << "PXMISSING O_CREAT !" << std::endl;
	#endif 




	#pragma message "PXNAME O_DIRECTORY !"
	#ifdef O_DIRECTORY
	#pragma message "PXEXIST O_DIRECTORY !"
	// std::cout << "PXEXIST O_DIRECTORY !" << std::endl;
	#else 
	#pragma message "PXMISSING O_DIRECTORY !"
	// std::cout << "PXMISSING O_DIRECTORY !" << std::endl;
	#endif 




	#pragma message "PXNAME O_EXCL !"
	#ifdef O_EXCL
	#pragma message "PXEXIST O_EXCL !"
	// std::cout << "PXEXIST O_EXCL !" << std::endl;
	#else 
	#pragma message "PXMISSING O_EXCL !"
	// std::cout << "PXMISSING O_EXCL !" << std::endl;
	#endif 




	#pragma message "PXNAME O_NOCTTY !"
	#ifdef O_NOCTTY
	#pragma message "PXEXIST O_NOCTTY !"
	// std::cout << "PXEXIST O_NOCTTY !" << std::endl;
	#else 
	#pragma message "PXMISSING O_NOCTTY !"
	// std::cout << "PXMISSING O_NOCTTY !" << std::endl;
	#endif 




	#pragma message "PXNAME O_NOFOLLOW !"
	#ifdef O_NOFOLLOW
	#pragma message "PXEXIST O_NOFOLLOW !"
	// std::cout << "PXEXIST O_NOFOLLOW !" << std::endl;
	#else 
	#pragma message "PXMISSING O_NOFOLLOW !"
	// std::cout << "PXMISSING O_NOFOLLOW !" << std::endl;
	#endif 




	#pragma message "PXNAME O_TRUNC !"
	#ifdef O_TRUNC
	#pragma message "PXEXIST O_TRUNC !"
	// std::cout << "PXEXIST O_TRUNC !" << std::endl;
	#else 
	#pragma message "PXMISSING O_TRUNC !"
	// std::cout << "PXMISSING O_TRUNC !" << std::endl;
	#endif 




	#pragma message "PXNAME O_TTY_INIT !"
	#ifdef O_TTY_INIT
	#pragma message "PXEXIST O_TTY_INIT !"
	// std::cout << "PXEXIST O_TTY_INIT !" << std::endl;
	#else 
	#pragma message "PXMISSING O_TTY_INIT !"
	// std::cout << "PXMISSING O_TTY_INIT !" << std::endl;
	#endif 




	#pragma message "PXNAME O_APPEND !"
	#ifdef O_APPEND
	#pragma message "PXEXIST O_APPEND !"
	// std::cout << "PXEXIST O_APPEND !" << std::endl;
	#else 
	#pragma message "PXMISSING O_APPEND !"
	// std::cout << "PXMISSING O_APPEND !" << std::endl;
	#endif 




	#pragma message "PXNAME O_DSYNC !"
	#ifdef O_DSYNC
	#pragma message "PXEXIST O_DSYNC !"
	// std::cout << "PXEXIST O_DSYNC !" << std::endl;
	#else 
	#pragma message "PXMISSING O_DSYNC !"
	// std::cout << "PXMISSING O_DSYNC !" << std::endl;
	#endif 




	#pragma message "PXNAME O_NONBLOCK !"
	#ifdef O_NONBLOCK
	#pragma message "PXEXIST O_NONBLOCK !"
	// std::cout << "PXEXIST O_NONBLOCK !" << std::endl;
	#else 
	#pragma message "PXMISSING O_NONBLOCK !"
	// std::cout << "PXMISSING O_NONBLOCK !" << std::endl;
	#endif 




	#pragma message "PXNAME O_RSYNC !"
	#ifdef O_RSYNC
	#pragma message "PXEXIST O_RSYNC !"
	// std::cout << "PXEXIST O_RSYNC !" << std::endl;
	#else 
	#pragma message "PXMISSING O_RSYNC !"
	// std::cout << "PXMISSING O_RSYNC !" << std::endl;
	#endif 




	#pragma message "PXNAME O_SYNC !"
	#ifdef O_SYNC
	#pragma message "PXEXIST O_SYNC !"
	// std::cout << "PXEXIST O_SYNC !" << std::endl;
	#else 
	#pragma message "PXMISSING O_SYNC !"
	// std::cout << "PXMISSING O_SYNC !" << std::endl;
	#endif 




	#pragma message "PXNAME O_ACCMODE !"
	#ifdef O_ACCMODE
	#pragma message "PXEXIST O_ACCMODE !"
	// std::cout << "PXEXIST O_ACCMODE !" << std::endl;
	#else 
	#pragma message "PXMISSING O_ACCMODE !"
	// std::cout << "PXMISSING O_ACCMODE !" << std::endl;
	#endif 




	#pragma message "PXNAME O_EXEC !"
	#ifdef O_EXEC
	#pragma message "PXEXIST O_EXEC !"
	// std::cout << "PXEXIST O_EXEC !" << std::endl;
	#else 
	#pragma message "PXMISSING O_EXEC !"
	// std::cout << "PXMISSING O_EXEC !" << std::endl;
	#endif 




	#pragma message "PXNAME O_RDONLY !"
	#ifdef O_RDONLY
	#pragma message "PXEXIST O_RDONLY !"
	// std::cout << "PXEXIST O_RDONLY !" << std::endl;
	#else 
	#pragma message "PXMISSING O_RDONLY !"
	// std::cout << "PXMISSING O_RDONLY !" << std::endl;
	#endif 




	#pragma message "PXNAME O_RDWR !"
	#ifdef O_RDWR
	#pragma message "PXEXIST O_RDWR !"
	// std::cout << "PXEXIST O_RDWR !" << std::endl;
	#else 
	#pragma message "PXMISSING O_RDWR !"
	// std::cout << "PXMISSING O_RDWR !" << std::endl;
	#endif 




	#pragma message "PXNAME O_SEARCH !"
	#ifdef O_SEARCH
	#pragma message "PXEXIST O_SEARCH !"
	// std::cout << "PXEXIST O_SEARCH !" << std::endl;
	#else 
	#pragma message "PXMISSING O_SEARCH !"
	// std::cout << "PXMISSING O_SEARCH !" << std::endl;
	#endif 




	#pragma message "PXNAME O_WRONLY !"
	#ifdef O_WRONLY
	#pragma message "PXEXIST O_WRONLY !"
	// std::cout << "PXEXIST O_WRONLY !" << std::endl;
	#else 
	#pragma message "PXMISSING O_WRONLY !"
	// std::cout << "PXMISSING O_WRONLY !" << std::endl;
	#endif 




	#pragma message "PXNAME AT_FDCWD !"
	#ifdef AT_FDCWD
	#pragma message "PXEXIST AT_FDCWD !"
	// std::cout << "PXEXIST AT_FDCWD !" << std::endl;
	#else 
	#pragma message "PXMISSING AT_FDCWD !"
	// std::cout << "PXMISSING AT_FDCWD !" << std::endl;
	#endif 




	#pragma message "PXNAME AT_EACCESS !"
	#ifdef AT_EACCESS
	#pragma message "PXEXIST AT_EACCESS !"
	// std::cout << "PXEXIST AT_EACCESS !" << std::endl;
	#else 
	#pragma message "PXMISSING AT_EACCESS !"
	// std::cout << "PXMISSING AT_EACCESS !" << std::endl;
	#endif 




	#pragma message "PXNAME AT_SYMLINK_NOFOLLOW !"
	#ifdef AT_SYMLINK_NOFOLLOW
	#pragma message "PXEXIST AT_SYMLINK_NOFOLLOW !"
	// std::cout << "PXEXIST AT_SYMLINK_NOFOLLOW !" << std::endl;
	#else 
	#pragma message "PXMISSING AT_SYMLINK_NOFOLLOW !"
	// std::cout << "PXMISSING AT_SYMLINK_NOFOLLOW !" << std::endl;
	#endif 




	#pragma message "PXNAME AT_SYMLINK_FOLLOW !"
	#ifdef AT_SYMLINK_FOLLOW
	#pragma message "PXEXIST AT_SYMLINK_FOLLOW !"
	// std::cout << "PXEXIST AT_SYMLINK_FOLLOW !" << std::endl;
	#else 
	#pragma message "PXMISSING AT_SYMLINK_FOLLOW !"
	// std::cout << "PXMISSING AT_SYMLINK_FOLLOW !" << std::endl;
	#endif 




	#pragma message "PXNAME AT_REMOVEDIR !"
	#ifdef AT_REMOVEDIR
	#pragma message "PXEXIST AT_REMOVEDIR !"
	// std::cout << "PXEXIST AT_REMOVEDIR !" << std::endl;
	#else 
	#pragma message "PXMISSING AT_REMOVEDIR !"
	// std::cout << "PXMISSING AT_REMOVEDIR !" << std::endl;
	#endif 




	#pragma message "PXNAME POSIX_FADV_DONTNEED !"
	#ifdef POSIX_FADV_DONTNEED
	#pragma message "PXEXIST POSIX_FADV_DONTNEED !"
	// std::cout << "PXEXIST POSIX_FADV_DONTNEED !" << std::endl;
	#else 
	#pragma message "PXMISSING POSIX_FADV_DONTNEED !"
	// std::cout << "PXMISSING POSIX_FADV_DONTNEED !" << std::endl;
	#endif 




	#pragma message "PXNAME POSIX_FADV_NOREUSE !"
	#ifdef POSIX_FADV_NOREUSE
	#pragma message "PXEXIST POSIX_FADV_NOREUSE !"
	// std::cout << "PXEXIST POSIX_FADV_NOREUSE !" << std::endl;
	#else 
	#pragma message "PXMISSING POSIX_FADV_NOREUSE !"
	// std::cout << "PXMISSING POSIX_FADV_NOREUSE !" << std::endl;
	#endif 




	#pragma message "PXNAME POSIX_FADV_NORMAL !"
	#ifdef POSIX_FADV_NORMAL
	#pragma message "PXEXIST POSIX_FADV_NORMAL !"
	// std::cout << "PXEXIST POSIX_FADV_NORMAL !" << std::endl;
	#else 
	#pragma message "PXMISSING POSIX_FADV_NORMAL !"
	// std::cout << "PXMISSING POSIX_FADV_NORMAL !" << std::endl;
	#endif 




	#pragma message "PXNAME POSIX_FADV_RANDOM !"
	#ifdef POSIX_FADV_RANDOM
	#pragma message "PXEXIST POSIX_FADV_RANDOM !"
	// std::cout << "PXEXIST POSIX_FADV_RANDOM !" << std::endl;
	#else 
	#pragma message "PXMISSING POSIX_FADV_RANDOM !"
	// std::cout << "PXMISSING POSIX_FADV_RANDOM !" << std::endl;
	#endif 




	#pragma message "PXNAME POSIX_FADV_SEQUENTIAL !"
	#ifdef POSIX_FADV_SEQUENTIAL
	#pragma message "PXEXIST POSIX_FADV_SEQUENTIAL !"
	// std::cout << "PXEXIST POSIX_FADV_SEQUENTIAL !" << std::endl;
	#else 
	#pragma message "PXMISSING POSIX_FADV_SEQUENTIAL !"
	// std::cout << "PXMISSING POSIX_FADV_SEQUENTIAL !" << std::endl;
	#endif 




	#pragma message "PXNAME POSIX_FADV_WILLNEED !"
	#ifdef POSIX_FADV_WILLNEED
	#pragma message "PXEXIST POSIX_FADV_WILLNEED !"
	// std::cout << "PXEXIST POSIX_FADV_WILLNEED !" << std::endl;
	#else 
	#pragma message "PXMISSING POSIX_FADV_WILLNEED !"
	// std::cout << "PXMISSING POSIX_FADV_WILLNEED !" << std::endl;
	#endif 




	#pragma message "PXNAME l_type !"
	#ifdef l_type
	#pragma message "PXEXIST l_type !"
	// std::cout << "PXEXIST l_type !" << std::endl;
	#else 
	#pragma message "PXMISSING l_type !"
	// std::cout << "PXMISSING l_type !" << std::endl;
	#endif 




	#pragma message "PXNAME l_whence !"
	#ifdef l_whence
	#pragma message "PXEXIST l_whence !"
	// std::cout << "PXEXIST l_whence !" << std::endl;
	#else 
	#pragma message "PXMISSING l_whence !"
	// std::cout << "PXMISSING l_whence !" << std::endl;
	#endif 




	#pragma message "PXNAME l_start !"
	#ifdef l_start
	#pragma message "PXEXIST l_start !"
	// std::cout << "PXEXIST l_start !" << std::endl;
	#else 
	#pragma message "PXMISSING l_start !"
	// std::cout << "PXMISSING l_start !" << std::endl;
	#endif 




	#pragma message "PXNAME l_len !"
	#ifdef l_len
	#pragma message "PXEXIST l_len !"
	// std::cout << "PXEXIST l_len !" << std::endl;
	#else 
	#pragma message "PXMISSING l_len !"
	// std::cout << "PXMISSING l_len !" << std::endl;
	#endif 




	#pragma message "PXNAME l_pid !"
	#ifdef l_pid
	#pragma message "PXEXIST l_pid !"
	// std::cout << "PXEXIST l_pid !" << std::endl;
	#else 
	#pragma message "PXMISSING l_pid !"
	// std::cout << "PXMISSING l_pid !" << std::endl;
	#endif 




	#pragma message "PXNAME creat !"
	#ifdef creat
	#pragma message "PXEXIST creat !"
	// std::cout << "PXEXIST creat !" << std::endl;
	#else 
	#pragma message "PXMISSING creat !"
	// std::cout << "PXMISSING creat !" << std::endl;
	#endif 




	#pragma message "PXNAME fcntl !"
	#ifdef fcntl
	#pragma message "PXEXIST fcntl !"
	// std::cout << "PXEXIST fcntl !" << std::endl;
	#else 
	#pragma message "PXMISSING fcntl !"
	// std::cout << "PXMISSING fcntl !" << std::endl;
	#endif 




	#pragma message "PXNAME open !"
	#ifdef open
	#pragma message "PXEXIST open !"
	// std::cout << "PXEXIST open !" << std::endl;
	#else 
	#pragma message "PXMISSING open !"
	// std::cout << "PXMISSING open !" << std::endl;
	#endif 




	#pragma message "PXNAME openat !"
	#ifdef openat
	#pragma message "PXEXIST openat !"
	// std::cout << "PXEXIST openat !" << std::endl;
	#else 
	#pragma message "PXMISSING openat !"
	// std::cout << "PXMISSING openat !" << std::endl;
	#endif 




	#pragma message "PXNAME posix_fadvise !"
	#ifdef posix_fadvise
	#pragma message "PXEXIST posix_fadvise !"
	// std::cout << "PXEXIST posix_fadvise !" << std::endl;
	#else 
	#pragma message "PXMISSING posix_fadvise !"
	// std::cout << "PXMISSING posix_fadvise !" << std::endl;
	#endif 




	#pragma message "PXNAME posix_fallocate !"
	#ifdef posix_fallocate
	#pragma message "PXEXIST posix_fallocate !"
	// std::cout << "PXEXIST posix_fallocate !" << std::endl;
	#else 
	#pragma message "PXMISSING posix_fallocate !"
	// std::cout << "PXMISSING posix_fallocate !" << std::endl;
	#endif 


}
