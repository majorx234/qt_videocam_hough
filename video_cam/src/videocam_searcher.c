#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <linux/videodev.h>


int videocam_searcher(int n, 
                      int* availble_, 
                      int* min_width_,
                      int* min_height_, 
                      int* max_width_,
                      int* max_height_
                      )
{
    int fd;
    struct video_capability video_cap;
    struct video_window     video_win;
    struct video_picture   video_pic;


  for(int i=0;i<n;i++)
  {
      if((fd = open("/dev/video0", O_RDONLY)) == -1){
          perror("cam_info: Can't open device");
          break;
      }
  
      if(ioctl(fd, VIDIOCGCAP, &video_cap) == -1)
          perror("cam_info: Can't get capabilities");
      else {
          printf("Name:\t\t '%s'\n", video_cap.name);
          printf("Minimum size:\t%d x %d\n", video_cap.minwidth, video_cap.minheight);
          printf("Maximum size:\t%d x %d\n", video_cap.maxwidth, video_cap.maxheight);

      }
  /*
      if(ioctl(fd, VIDIOCGWIN, &video_win) == -1)
          perror("cam_info: Can't get window information");
      else
          printf("Current size:\t%d x %d\n", video_win.width, video_win.height);
  
      if(ioctl(fd, VIDIOCGPICT, &video_pic) == -1)
          perror("cam_info: Can't get picture information");
      else
          printf("Current depth:\t%d\n", video_pic.depth);
  */
      close(fd);
  }    
    return 0;
}