




void c1(){


	double A[4][4], Ai[4][4];

	ulo = 0; uhi = 2*M_PI;
  vlo = 0; vhi = 3;
  f = cylX; //define the parametric equations that plot will run
  g = cylY;
  h = cylZ;
	double RES = 30; // define needed resolution for this object
									// different objects do require different resolutions

	Tn = 0 ;
	Ttypelist[Tn] = SX ; Tvlist[Tn] = .1  ; Tn++ ;
	Ttypelist[Tn] = SZ ; Tvlist[Tn] = .1  ; Tn++ ;

	M3d_make_movement_sequence_matrix (A,Ai,  Tn,Ttypelist,Tvlist) ;

  plot(ulo, uhi, vlo, vhi, RES, A);
}

void c2(){


	double A[4][4], Ai[4][4];
	double RES = 30;

  ulo = 0; uhi = 2*M_PI;
  vlo = 0; vhi = 3;
  f = cylX;
  g = cylY;
  h = cylZ;

	Tn = 0 ;
	Ttypelist[Tn] = SX ; Tvlist[Tn] = .1  ; Tn++ ;
	Ttypelist[Tn] = SZ ; Tvlist[Tn] = .1  ; Tn++ ;
	Ttypelist[Tn] = RZ ; Tvlist[Tn] =  90  ; Tn++ ;
	M3d_make_movement_sequence_matrix (A,Ai,  Tn,Ttypelist,Tvlist) ;

  plot(ulo, uhi, vlo, vhi, RES,A);
}

void c3(){


	double A[4][4], Ai[4][4];
	double RES = 30;

  ulo = -M_PI; uhi = M_PI;
  vlo = 0; vhi = 3;
  f = cylX;
  g = cylY;
  h = cylZ;

	Tn = 0 ;
	Ttypelist[Tn] = SX ; Tvlist[Tn] = .1  ; Tn++ ;
	Ttypelist[Tn] = SZ ; Tvlist[Tn] = .1  ; Tn++ ;
	Ttypelist[Tn] = RX ; Tvlist[Tn] = -90  ; Tn++ ;

  M3d_make_movement_sequence_matrix (A,Ai,  Tn,Ttypelist,Tvlist) ;

  plot(ulo, uhi, vlo, vhi,RES, A);
}

void sphere(){

	double A[4][4], Ai[4][4];
	double RES = 10;


  ulo = 0; uhi = 2*M_PI;
  vlo = -M_PI/2; vhi = M_PI/2;
  f = sphX;
  g = sphY;
  h = sphZ;

	Tn = 0 ;
  Ttypelist[Tn] = SX ; Tvlist[Tn] = .25 ; Tn++ ;
  Ttypelist[Tn] = SY ; Tvlist[Tn] = .25 ; Tn++ ;
  Ttypelist[Tn] = SZ ; Tvlist[Tn] = .25 ; Tn++ ;



	M3d_make_movement_sequence_matrix(A, Ai, Tn,
		Ttypelist, Tvlist); //move object

  plot(ulo, uhi, vlo, vhi,RES, A);
}

void sphere1(){

	double A[4][4], Ai[4][4];


  ulo = -M_PI; uhi = M_PI;
  vlo = -M_PI/2; vhi = M_PI/2;
  f = sphX;
  g = sphY;
  h = sphZ;
	double RES = 10;

	Tn = 0 ;
	Ttypelist[Tn] = TY ; Tvlist[Tn] =  1.0 ; Tn++ ;
	Ttypelist[Tn] = SX ; Tvlist[Tn] =  .25 ; Tn++;
	Ttypelist[Tn] = SY ; Tvlist[Tn] =  .25 ; Tn++;
	Ttypelist[Tn] = SZ ; Tvlist[Tn] =  .25 ; Tn++;


	M3d_make_movement_sequence_matrix(A, Ai, Tn,
		Ttypelist, Tvlist); //move object

  plot(ulo, uhi, vlo, vhi,RES, A);
}
