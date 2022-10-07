// Load an image and save it in PNG and JPG format using stb_image libraries
#include <stdio.h>
#include <stdlib.h>

#define STB_ONLY_JPEG
#define STB_ONLY_PNG

#define STB_IMAGE_IMPLEMENTATION
#include <stb/stb_image.h>
#define STB_IMAGE_WRITE_IMPLEMENTATION
#include <stb/stb_image_write.h>

int main(void) {
    int desired_channels = 1;
    int width, height, channels;
    unsigned char *img = stbi_load("sky.jpg", &width, &height, &channels, desired_channels);
    if(img == NULL) {
        printf("Error in loading the image\n");
        exit(1);
    }
    printf("Loaded image with a width of %dpx, a height of %dpx and %d channels\n", width, height, channels);

    stbi_write_png("sky.png", width, height, desired_channels, img, width * desired_channels);
    stbi_write_jpg("sky2.jpg", width, height, desired_channels, img, 100);

    stbi_image_free(img);
}
