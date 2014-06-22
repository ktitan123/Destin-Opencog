#include "VideoSource.h"
#include "DestinNetworkAlt.h"
#include "Transporter.h"
#include "stdio.h"
#include "unit_test.h"

using namespace cv;

int main()
{
	 SupportedImageWidths siw = W512;
	 printf("This file runs Destin on input image\n");
	 uint centroid_counts[]  = {4,4,4,4,4,4,4,2};
    	 bool isUniform = true;
    	 Mat flimage;
	 Mat image = cv::imread("O.png");
	 image.convertTo(flimage, CV_32F, 1.0/255.0);
          imshow("My Photo", image);
          
          waitKey(1000);
         DestinNetworkAlt * network = new DestinNetworkAlt(siw, 8, centroid_counts, isUniform);
          //setFixedLearnRate(network,0.1);
         //setBeliefTransform(DST_BT_NONE)
         float f[10000];
         int i,j;
       		

    delete network;
    return 0;
}
         
