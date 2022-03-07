#include "FPToolkit.c"
#include "M3d_matrix_toolsS.c"
#include "3DFun.c" //function class
#include "light_model.c"
#include "xwd_tools_03.c"


//3DShapes.c plots various parametric functions on specified domains

#define MAXOBJCTS 50
double rFactor = 1.2; //resolution factor

double (*f)(double u, double v);//array of f(t) for x functions
double (*g)(double u, double v);//array of g(t) for y functions
double (*h)(double u, double v);//array of h(t) for z functions

double (*f_prime)(double u, double v);//array of f(t) for x functions
double (*g_prime)(double u, double v);//array of g(t) for y functions
double (*h_prime)(double u, double v);//array of h(t) for z functions


double ulo, uhi;
double vlo, vhi;
double dU, dV;
double zbuf[800][800];
double eye[3], coi[3], up[3] ;


int Tn, Ttypelist[100];
double Tvlist[100];
double V[4][4], Vi[4][4];

int window_width, window_height, window_square_size ;
double Half_window_size ;
double Half_angle_degrees;
double Tan_half_angle ;

double inherent_rgb[3];
double rgb[3];

int idA, idB ;
int textureWidth, textureHeight;

#include "rgb_mapping.c"
#include "plotting.c"
#include "shape_constructors.c"



int main ()
{


  char nameA[100] ;
  int idA ;
  int widthA,heightA ;

  int d[2],w,h,e ;
  double rgb[3] ;

  w = 1 ; h = 1 ;

  printf("enter name of xwd file\n") ;
  scanf("%s",nameA) ;
  idA = init_xwd_map_from_file (nameA) ;// returns -1 on error, 1 if ok
  if (idA == -1) { printf("failure\n") ;  exit(0) ; }
  e = get_xwd_map_dimensions(idA, d) ;
  if (e == -1) { printf("failure\n") ;  exit(0) ; }
  textureWidth = d[0] ; textureHeight = d[1] ;

  // idA = create_new_xwd_map (w,h) ;// returns -1 on error, 1 if ok
  // if (idA == -1) { printf("failure\n") ;  exit(0) ; }


  window_width = 800 ; window_height = 800 ;
  // size of largest square INside window
  if (window_width < window_height) { window_square_size = window_width ; }
                               else { window_square_size = window_height ; }
  Half_window_size = 0.5*window_square_size ;
  Half_angle_degrees = 30 ;
  Tan_half_angle = tan(Half_angle_degrees*M_PI/180) ;

  G_init_graphics (window_width, window_height) ;
	int fnum = 15;
	double t;
	int q;


	while (q != 'q') {


	t = 0.01*fnum;

	eye[0] = 10*cos(2*M_PI*t) ;
	eye[1] =  6*sin(2*M_PI*t);
	eye[2] = 3*sin(2*M_PI*t + M_PI) ;

  G_rgb(0,0,0) ;
  G_clear() ;

  initZbuf();


  c1();
  c2();
  c3();
	sphere();
  // sphere1();
  q = G_wait_key();
	fnum++;
}


}
