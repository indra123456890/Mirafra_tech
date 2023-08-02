
#define AUDIO_MM_PLAY _IOW('1','1',char *)
//write 100 characters into kernelbuffer

#define AUDIO_MM_RECORD _IOR('1','2',char *)
//read 20 characters

#define AUDIO_MM_Nextsong _IOR('1','3',char *)
//change buffer size to 10 and return 5 characters

#define AUDIO_MM_PREV _IOW('1','4',char *)
//make the buffer with all star characters and send buffer to application layer
