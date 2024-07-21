/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belguabd <belguabd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 14:59:38 by emagueri          #+#    #+#             */
/*   Updated: 2024/07/21 20:18:52 by belguabd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
#define CUB3D_H
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include "MLX42.h"
#define BACKGROUND 0xFD42EE55


#include <math.h>
#define TILE_P 15
#define TILE_G 50
#define FOV_ANGLE 60.0
#define NUM_RAY 400

// ============= define colors ===========
#define BLACK 0x000000FF
#define WHITE 0xFFFFFFFF
#define RED 0xFF0000FF
#define LIME 0x00FF00FF
#define BLUE 0x0000FFFF
#define YELLOW 0xFFFF00FF
#define CYAN 0x00FFFFFF
#define MAGENTA 0xFF00FFFF

// Shades of grey with full opacity
#define DARK_GREY 0x404040FF
#define GREY 0x808080FF
#define LIGHT_GREY 0xC0C0C0FF

// Semi-transparent colors (50% opacity)
#define SEMI_BLACK 0x00000080
#define SEMI_WHITE 0xFFFFFF80
#define SEMI_RED 0xFF000080
#define SEMI_LIME 0x00FF0080
#define SEMI_BLUE 0x0000FF80
#define SEMI_YELLOW 0xFFFF0080
#define SEMI_CYAN 0x00FFFF80
#define SEMI_MAGENTA 0xFF00FF80
#ifndef PARSE_H
#define PARSE_H


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>

#ifndef COLORS_H
#define COLORS_H
#define RED_E "\033[31m"
#endif
#include "get_next_line/get_next_line.h"
typedef struct t_colors
{
    int red;
    int green;
    int blue;
} t_clr;

typedef struct data
{
    double turn_direction;
    double walk_direction;
    double radius;
    double rotation_angle;
    double move_speed;
    double rotation_speed;

    double x;
    double y;
    double p_x;
    double p_y;
    char *NO;
    char *SO;
    char *WE;
    char *EA;
    char **map_data;
    char **dirs;
    char **clrs;
    char **map;
    t_clr floor;
    t_clr ceiling;
    mlx_t *mlx;
    mlx_image_t *img;
} t_data_p;

int ft_strcmp(char *str1, char *str2);
size_t ft_strlcat(char *dst, const char *src, size_t dstsize);
void ft_putendl_fd(char *s, int fd);
char **ft_split(char const *s, char c);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strtrim(char const *s1, char const *set);
int ft_atoi(const char *str);
int ft_isdigit(int c);

void load_map_data(t_data_p *data);
void validate_top_map(t_data_p *data);
void set_map(t_data_p *data);
void validate_all_dirs(t_data_p *data);
void validate_colors(t_data_p *data);
void parse_map(t_data_p *data);
void init_clrs_dirs(t_data_p *data);
#endif
#endif
