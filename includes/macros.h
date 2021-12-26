#ifndef MACROS_H
# define MACROS_H

# define EMPTY 0
# define ERROR -1
# define SUCESS 0

# define ABS(X) if (X < 0) X *= -1;
# define PRINT(X, F) printf(#X " is %"#F " and the address is %p\n", X, &X);
# define SQR(X, C)  \
	while (C-- > 1) \
		X *= X;

#endif
