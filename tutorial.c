#include "tutorial.h"

int main()
{
    void *mlx = mlx_init();
    void *win = mlx_new_window(mlx, 640, 360, "cko sevincliyim");
    mlx_pixel_put(mlx,win,640/2,360/2,0xFFFFFF);
    mlx_loop(mlx);
}
