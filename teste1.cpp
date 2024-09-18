#include <iostream>
#define STB_IMAGE_IMPLEMENTATION
#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "C:\Users\T-Gamer\Desktop\FC\AH\task2\stb_image.h"
#include "C:\Users\T-Gamer\Desktop\FC\AH\task2\stb_image_write.h"
#include "C:\Users\T-Gamer\Desktop\FC\AH\task2\stb_image_resize2.h"

using namespace std;

int main(){
    
    int width, height, channels;

    cout<<"teste"<<endl;
    
    unsigned char* img = stbi_load("C:\\Users\\T-Gamer\\Desktop\\FC\\AH\\task2\\Tigre.jpg",&width,&height,&channels,4);
    if(img == nullptr){
        cout<<"Failed to open the image"<<endl;
    }else{
        cout<<"imagem carregada"<<endl;
    }

    for(int i = 0; i < width * height * 4; i+=4){
        img[i] = 255;
        img[i+2] = 255;
    }
    stbi_write_png("C:\\Users\\T-Gamer\\Desktop\\FC\\AH\\task2\\TigreFiltrado.jpg", width, height, 4, img, width * 4);
    
    stbi_image_free(img);


    return 0;
}