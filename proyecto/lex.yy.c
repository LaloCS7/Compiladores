
#line 3 "lex.yy.c"

#define  YY_INT_ALIGNED short int



#define FLEX_SCANNER
#define YY_FLEX_MAJOR_VERSION 2
#define YY_FLEX_MINOR_VERSION 5
#define YY_FLEX_SUBMINOR_VERSION 35
#if YY_FLEX_SUBMINOR_VERSION > 0
#define FLEX_BETA
#endif


#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>



#ifndef FLEXINT_H
#define FLEXINT_H



#if defined (__STDC_VERSION__) && __STDC_VERSION__ >= 199901L


#ifndef __STDC_LIMIT_MACROS
#define __STDC_LIMIT_MACROS 1
#endif

#include <inttypes.h>
typedef int8_t flex_int8_t;
typedef uint8_t flex_uint8_t;
typedef int16_t flex_int16_t;
typedef uint16_t flex_uint16_t;
typedef int32_t flex_int32_t;
typedef uint32_t flex_uint32_t;
#else
typedef signed char flex_int8_t;
typedef short int flex_int16_t;
typedef int flex_int32_t;
typedef unsigned char flex_uint8_t; 
typedef unsigned short int flex_uint16_t;
typedef unsigned int flex_uint32_t;


#ifndef INT8_MIN
#define INT8_MIN               (-128)
#endif
#ifndef INT16_MIN
#define INT16_MIN              (-32767-1)
#endif
#ifndef INT32_MIN
#define INT32_MIN              (-2147483647-1)
#endif
#ifndef INT8_MAX
#define INT8_MAX               (127)
#endif
#ifndef INT16_MAX
#define INT16_MAX              (32767)
#endif
#ifndef INT32_MAX
#define INT32_MAX              (2147483647)
#endif
#ifndef UINT8_MAX
#define UINT8_MAX              (255U)
#endif
#ifndef UINT16_MAX
#define UINT16_MAX             (65535U)
#endif
#ifndef UINT32_MAX
#define UINT32_MAX             (4294967295U)
#endif

#endif 
#endif 

#ifdef __cplusplus


#define YY_USE_CONST

#else	


#if defined (__STDC__)

#define YY_USE_CONST

#endif	
#endif	

#ifdef YY_USE_CONST
#define yyconst const
#else
#define yyconst
#endif


#define YY_NULL 0


#define YY_SC_TO_UI(c) ((unsigned int) (unsigned char) c)


#define BEGIN (yy_start) = 1 + 2 *


#define YY_START (((yy_start) - 1) / 2)
#define YYSTATE YY_START


#define YY_STATE_EOF(state) (YY_END_OF_BUFFER + state + 1)


#define YY_NEW_FILE yyrestart(yyin  )

#define YY_END_OF_BUFFER_CHAR 0


#ifndef YY_BUF_SIZE
#ifdef __ia64__

#define YY_BUF_SIZE 32768
#else
#define YY_BUF_SIZE 16384
#endif 
#endif


#define YY_STATE_BUF_SIZE   ((YY_BUF_SIZE + 2) * sizeof(yy_state_type))

#ifndef YY_TYPEDEF_YY_BUFFER_STATE
#define YY_TYPEDEF_YY_BUFFER_STATE
typedef struct yy_buffer_state *YY_BUFFER_STATE;
#endif

extern int yyleng;

extern FILE *yyin, *yyout;

#define EOB_ACT_CONTINUE_SCAN 0
#define EOB_ACT_END_OF_FILE 1
#define EOB_ACT_LAST_MATCH 2

    #define YY_LESS_LINENO(n)
    

#define yyless(n) \
	do \
		{ \
		 \
        int yyless_macro_arg = (n); \
        YY_LESS_LINENO(yyless_macro_arg);\
		*yy_cp = (yy_hold_char); \
		YY_RESTORE_YY_MORE_OFFSET \
		(yy_c_buf_p) = yy_cp = yy_bp + yyless_macro_arg - YY_MORE_ADJ; \
		YY_DO_BEFORE_ACTION;  \
		} \
	while ( 0 )

#define unput(c) yyunput( c, (yytext_ptr)  )

#ifndef YY_TYPEDEF_YY_SIZE_T
#define YY_TYPEDEF_YY_SIZE_T
typedef size_t yy_size_t;
#endif

#ifndef YY_STRUCT_YY_BUFFER_STATE
#define YY_STRUCT_YY_BUFFER_STATE
struct yy_buffer_state
	{
	FILE *yy_input_file;

	char *yy_ch_buf;		
	char *yy_buf_pos;		


	yy_size_t yy_buf_size;

	
	int yy_n_chars;


	int yy_is_our_buffer;


	int yy_is_interactive;


	int yy_at_bol;

    int yy_bs_lineno; 
    int yy_bs_column; 
    

	int yy_fill_buffer;

	int yy_buffer_status;

#define YY_BUFFER_NEW 0
#define YY_BUFFER_NORMAL 1

#define YY_BUFFER_EOF_PENDING 2

	};
#endif 


static size_t yy_buffer_stack_top = 0; 
static size_t yy_buffer_stack_max = 0; 
static YY_BUFFER_STATE * yy_buffer_stack = 0; 


#define YY_CURRENT_BUFFER ( (yy_buffer_stack) \
                          ? (yy_buffer_stack)[(yy_buffer_stack_top)] \
                          : NULL)


#define YY_CURRENT_BUFFER_LVALUE (yy_buffer_stack)[(yy_buffer_stack_top)]


static char yy_hold_char;
static int yy_n_chars;	
int yyleng;


static char *yy_c_buf_p = (char *) 0;
static int yy_init = 0;	
static int yy_start = 0;	


static int yy_did_buffer_switch_on_eof;

void yyrestart (FILE *input_file  );
void yy_switch_to_buffer (YY_BUFFER_STATE new_buffer  );
YY_BUFFER_STATE yy_create_buffer (FILE *file,int size  );
void yy_delete_buffer (YY_BUFFER_STATE b  );
void yy_flush_buffer (YY_BUFFER_STATE b  );
void yypush_buffer_state (YY_BUFFER_STATE new_buffer  );
void yypop_buffer_state (void );

static void yyensure_buffer_stack (void );
static void yy_load_buffer_state (void );
static void yy_init_buffer (YY_BUFFER_STATE b,FILE *file  );

#define YY_FLUSH_BUFFER yy_flush_buffer(YY_CURRENT_BUFFER )

YY_BUFFER_STATE yy_scan_buffer (char *base,yy_size_t size  );
YY_BUFFER_STATE yy_scan_string (yyconst char *yy_str  );
YY_BUFFER_STATE yy_scan_bytes (yyconst char *bytes,int len  );

void *yyalloc (yy_size_t  );
void *yyrealloc (void *,yy_size_t  );
void yyfree (void *  );

#define yy_new_buffer yy_create_buffer

#define yy_set_interactive(is_interactive) \
	{ \
	if ( ! YY_CURRENT_BUFFER ){ \
        yyensure_buffer_stack (); \
		YY_CURRENT_BUFFER_LVALUE =    \
            yy_create_buffer(yyin,YY_BUF_SIZE ); \
	} \
	YY_CURRENT_BUFFER_LVALUE->yy_is_interactive = is_interactive; \
	}

#define yy_set_bol(at_bol) \
	{ \
	if ( ! YY_CURRENT_BUFFER ){\
        yyensure_buffer_stack (); \
		YY_CURRENT_BUFFER_LVALUE =    \
            yy_create_buffer(yyin,YY_BUF_SIZE ); \
	} \
	YY_CURRENT_BUFFER_LVALUE->yy_at_bol = at_bol; \
	}

#define YY_AT_BOL() (YY_CURRENT_BUFFER_LVALUE->yy_at_bol)



typedef unsigned char YY_CHAR;

FILE *yyin = (FILE *) 0, *yyout = (FILE *) 0;

typedef int yy_state_type;

extern int yylineno;

int yylineno = 1;

extern char *yytext;
#define yytext_ptr yytext

static yy_state_type yy_get_previous_state (void );
static yy_state_type yy_try_NUL_trans (yy_state_type current_state  );
static int yy_get_next_buffer (void );
static void yy_fatal_error (yyconst char msg[]  );


#define YY_DO_BEFORE_ACTION \
	(yytext_ptr) = yy_bp; \
	yyleng = (size_t) (yy_cp - yy_bp); \
	(yy_hold_char) = *yy_cp; \
	*yy_cp = '\0'; \
	(yy_c_buf_p) = yy_cp;

#define YY_NUM_RULES 27
#define YY_END_OF_BUFFER 28

struct yy_trans_info
	{
	flex_int32_t yy_verify;
	flex_int32_t yy_nxt;
	};
static yyconst flex_int16_t yy_accept[86] =
    {   0,
        0,    0,   28,   26,    1,    2,    1,   26,   23,   26,
       15,   22,   26,   21,   16,   16,   16,   16,   16,   16,
       16,   16,   16,   16,   26,   20,    0,   24,   15,   17,
       19,   18,   16,   16,   16,   16,   16,   16,   10,   16,
       16,   16,   16,   16,    0,    0,    0,    0,   24,   16,
       16,   16,   16,    8,    3,   16,   16,   16,   16,    0,
       25,    5,   16,   11,   16,   16,   16,    6,   16,    0,
       16,    4,   16,   16,    9,    0,    7,   12,   13,    0,
        0,    0,    0,   14,    0
    } ;

static yyconst flex_int32_t yy_ec[256] =
    {   0,
        1,    1,    1,    1,    1,    1,    1,    1,    2,    3,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    4,    5,    1,    6,    1,    1,    1,    1,    1,
        1,    7,    1,    1,    1,    8,    9,   10,   10,   10,
       10,   10,   10,   10,   10,   10,   10,    1,    1,   11,
       12,   13,    1,    1,   14,   14,   14,   14,   14,   14,
       14,   14,   14,   14,   14,   14,   14,   14,   14,   14,
       14,   14,   14,   14,   14,   14,   14,   14,   14,   14,
        1,    1,    1,    1,    1,    1,   15,   16,   17,   18,

       19,   20,   14,   21,   22,   14,   14,   23,   14,   24,
       25,   26,   14,   27,   28,   29,   30,   31,   32,   14,
       14,   14,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,

        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1
    } ;

static yyconst flex_int32_t yy_meta[33] =
    {   0,
        1,    1,    2,    1,    1,    1,    1,    1,    1,    3,
        1,    1,    1,    3,    3,    3,    3,    3,    3,    3,
        3,    3,    3,    3,    3,    3,    3,    3,    3,    3,
        3,    3
    } ;

static yyconst flex_int16_t yy_base[90] =
    {   0,
        0,  100,  105,  107,  107,  107,  107,   92,  107,   26,
       93,   90,   89,   88,    0,   78,   73,   74,   11,   17,
       69,   66,   69,   72,   70,  107,   35,    0,   81,  107,
      107,  107,    0,   75,   59,   60,   62,   59,    0,   56,
       62,   56,   60,   59,   56,   36,   37,   42,    0,   52,
       62,   58,   61,    0,    0,   51,   44,   55,   49,   54,
       43,    0,   47,    0,   40,   39,   50,    0,   47,   42,
       45,    0,   43,   33,    0,   31,    0,    0,    0,   41,
       37,   44,    0,    0,  107,   44,   51,   54,   57
    } ;

static yyconst flex_int16_t yy_def[90] =
    {   0,
       85,    1,   85,   85,   85,   85,   85,   85,   85,   85,
       85,   85,   85,   85,   86,   86,   86,   86,   86,   86,
       86,   86,   86,   86,   85,   85,   87,   88,   85,   85,
       85,   85,   86,   86,   86,   86,   86,   86,   86,   86,
       86,   86,   86,   86,   85,   87,   87,   87,   88,   86,
       86,   86,   86,   86,   86,   86,   86,   86,   86,   85,
       87,   86,   86,   86,   86,   86,   86,   86,   86,   85,
       86,   86,   86,   86,   86,   85,   86,   86,   86,   85,
       85,   85,   89,   89,    0,   85,   85,   85,   85
    } ;

static yyconst flex_int16_t yy_nxt[140] =
    {   0,
        4,    5,    6,    7,    8,    4,    4,    9,   10,   11,
       12,   13,   14,   15,   15,   15,   16,   17,   18,   19,
       15,   20,   15,   15,   15,   21,   15,   22,   15,   15,
       23,   24,   27,   37,   28,   38,   39,   47,   47,   47,
       40,   48,   48,   48,   47,   47,   33,   83,   48,   48,
       61,   46,   46,   46,   49,   82,   49,   84,   81,   84,
       80,   79,   78,   77,   76,   75,   74,   73,   72,   71,
       70,   69,   68,   67,   66,   65,   64,   63,   62,   60,
       59,   58,   57,   56,   55,   54,   53,   52,   51,   50,
       29,   45,   44,   43,   42,   41,   36,   35,   34,   32,

       31,   30,   29,   26,   85,   25,    3,   85,   85,   85,
       85,   85,   85,   85,   85,   85,   85,   85,   85,   85,
       85,   85,   85,   85,   85,   85,   85,   85,   85,   85,
       85,   85,   85,   85,   85,   85,   85,   85,   85
    } ;

static yyconst flex_int16_t yy_chk[140] =
    {   0,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
        1,    1,   10,   19,   10,   19,   20,   27,   46,   47,
       20,   27,   46,   47,   48,   61,   86,   82,   48,   61,
       48,   87,   87,   87,   88,   81,   88,   89,   80,   89,
       76,   74,   73,   71,   70,   69,   67,   66,   65,   63,
       60,   59,   58,   57,   56,   53,   52,   51,   50,   45,
       44,   43,   42,   41,   40,   38,   37,   36,   35,   34,
       29,   25,   24,   23,   22,   21,   18,   17,   16,   14,

       13,   12,   11,    8,    3,    2,   85,   85,   85,   85,
       85,   85,   85,   85,   85,   85,   85,   85,   85,   85,
       85,   85,   85,   85,   85,   85,   85,   85,   85,   85,
       85,   85,   85,   85,   85,   85,   85,   85,   85
    } ;

static yy_state_type yy_last_accepting_state;
static char *yy_last_accepting_cpos;

extern int yy_flex_debug;
int yy_flex_debug = 0;


#define REJECT reject_used_but_not_detected
#define yymore() yymore_used_but_not_detected
#define YY_MORE_ADJ 0
#define YY_RESTORE_YY_MORE_OFFSET
char *yytext;
#line 1 "c.l"
#line 513 "lex.yy.c"

#define INITIAL 0

#ifndef YY_NO_UNISTD_H

#include <unistd.h>
#endif

#ifndef YY_EXTRA_TYPE
#define YY_EXTRA_TYPE void *
#endif

static int yy_init_globals (void );



int yylex_destroy (void );

int yyget_debug (void );

void yyset_debug (int debug_flag  );

YY_EXTRA_TYPE yyget_extra (void );

void yyset_extra (YY_EXTRA_TYPE user_defined  );

FILE *yyget_in (void );

void yyset_in  (FILE * in_str  );

FILE *yyget_out (void );

void yyset_out  (FILE * out_str  );

int yyget_leng (void );

char *yyget_text (void );

int yyget_lineno (void );

void yyset_lineno (int line_number  );



#ifndef YY_SKIP_YYWRAP
#ifdef __cplusplus
extern "C" int yywrap (void );
#else
extern int yywrap (void );
#endif
#endif

    static void yyunput (int c,char *buf_ptr  );
    
#ifndef yytext_ptr
static void yy_flex_strncpy (char *,yyconst char *,int );
#endif

#ifdef YY_NEED_STRLEN
static int yy_flex_strlen (yyconst char * );
#endif

#ifndef YY_NO_INPUT

#ifdef __cplusplus
static int yyinput (void );
#else
static int input (void );
#endif

#endif


#ifndef YY_READ_BUF_SIZE
#ifdef __ia64__

#define YY_READ_BUF_SIZE 16384
#else
#define YY_READ_BUF_SIZE 8192
#endif 
#endif


#ifndef ECHO

#define ECHO do { if (fwrite( yytext, yyleng, 1, yyout )) {} } while (0)
#endif

#ifndef YY_INPUT
#define YY_INPUT(buf,result,max_size) \
	if ( YY_CURRENT_BUFFER_LVALUE->yy_is_interactive ) \
		{ \
		int c = '*'; \
		size_t n; \
		for ( n = 0; n < max_size && \
			     (c = getc( yyin )) != EOF && c != '\n'; ++n ) \
			buf[n] = (char) c; \
		if ( c == '\n' ) \
			buf[n++] = (char) c; \
		if ( c == EOF && ferror( yyin ) ) \
			YY_FATAL_ERROR( "input in flex scanner failed" ); \
		result = n; \
		} \
	else \
		{ \
		errno=0; \
		while ( (result = fread(buf, 1, max_size, yyin))==0 && ferror(yyin)) \
			{ \
			if( errno != EINTR) \
				{ \
				YY_FATAL_ERROR( "input in flex scanner failed" ); \
				break; \
				} \
			errno=0; \
			clearerr(yyin); \
			} \
		}\
\

#endif


#ifndef yyterminate
#define yyterminate() return YY_NULL
#endif


#ifndef YY_START_STACK_INCR
#define YY_START_STACK_INCR 25
#endif


#ifndef YY_FATAL_ERROR
#define YY_FATAL_ERROR(msg) yy_fatal_error( msg )
#endif


#ifndef YY_DECL
#define YY_DECL_IS_OURS 1

extern int yylex (void);

#define YY_DECL int yylex (void)
#endif 


#ifndef YY_USER_ACTION
#define YY_USER_ACTION
#endif


#ifndef YY_BREAK
#define YY_BREAK break;
#endif

#define YY_RULE_SETUP \
	if ( yyleng > 0 ) \
		YY_CURRENT_BUFFER_LVALUE->yy_at_bol = \
				(yytext[yyleng - 1] == '\n'); \
	YY_USER_ACTION


YY_DECL
{
	register yy_state_type yy_current_state;
	register char *yy_cp, *yy_bp;
	register int yy_act;
    
#line 4 "c.l"

#line 705 "lex.yy.c"

	if ( !(yy_init) )
		{
		(yy_init) = 1;

#ifdef YY_USER_INIT
		YY_USER_INIT;
#endif

		if ( ! (yy_start) )
			(yy_start) = 1;	

		if ( ! yyin )
			yyin = stdin;

		if ( ! yyout )
			yyout = stdout;

		if ( ! YY_CURRENT_BUFFER ) {
			yyensure_buffer_stack ();
			YY_CURRENT_BUFFER_LVALUE =
				yy_create_buffer(yyin,YY_BUF_SIZE );
		}

		yy_load_buffer_state( );
		}

	while ( 1 )		
		{
		yy_cp = (yy_c_buf_p);


		*yy_cp = (yy_hold_char);

	
		yy_bp = yy_cp;

		yy_current_state = (yy_start);
		yy_current_state += YY_AT_BOL();
yy_match:
		do
			{
			register YY_CHAR yy_c = yy_ec[YY_SC_TO_UI(*yy_cp)];
			if ( yy_accept[yy_current_state] )
				{
				(yy_last_accepting_state) = yy_current_state;
				(yy_last_accepting_cpos) = yy_cp;
				}
			while ( yy_chk[yy_base[yy_current_state] + yy_c] != yy_current_state )
				{
				yy_current_state = (int) yy_def[yy_current_state];
				if ( yy_current_state >= 86 )
					yy_c = yy_meta[(unsigned int) yy_c];
				}
			yy_current_state = yy_nxt[yy_base[yy_current_state] + (unsigned int) yy_c];
			++yy_cp;
			}
		while ( yy_base[yy_current_state] != 107 );

yy_find_action:
		yy_act = yy_accept[yy_current_state];
		if ( yy_act == 0 )
			{ 
			yy_cp = (yy_last_accepting_cpos);
			yy_current_state = (yy_last_accepting_state);
			yy_act = yy_accept[yy_current_state];
			}

		YY_DO_BEFORE_ACTION;

do_action:	

		switch ( yy_act )
	{ 
			case 0: 
			*yy_cp = (yy_hold_char);
			yy_cp = (yy_last_accepting_cpos);
			yy_current_state = (yy_last_accepting_state);
			goto yy_find_action;

case 1:
YY_RULE_SETUP
#line 5 "c.l"
;
	YY_BREAK
case 2:
YY_RULE_SETUP
#line 6 "c.l"
{ yylineno = yylineno + 1;}
	YY_BREAK
case 3:
YY_RULE_SETUP
#line 7 "c.l"
return INT;
	YY_BREAK
case 4:
YY_RULE_SETUP
#line 8 "c.l"
return FLOAT;
	YY_BREAK
case 5:
YY_RULE_SETUP
#line 9 "c.l"
return CHAR;
	YY_BREAK
case 6:
YY_RULE_SETUP
#line 10 "c.l"
return VOID;
	YY_BREAK
case 7:
YY_RULE_SETUP
#line 11 "c.l"
return DOUBLE;
	YY_BREAK
case 8:
YY_RULE_SETUP
#line 12 "c.l"
return FOR;
	YY_BREAK
case 9:
YY_RULE_SETUP
#line 13 "c.l"
return WHILE;
	YY_BREAK
case 10:
YY_RULE_SETUP
#line 14 "c.l"
return IF;
	YY_BREAK
case 11:
YY_RULE_SETUP
#line 15 "c.l"
return ELSE;
	YY_BREAK
case 12:
YY_RULE_SETUP
#line 16 "c.l"
return PRINTF;
	YY_BREAK
case 13:
YY_RULE_SETUP
#line 17 "c.l"
return STRUCT;
	YY_BREAK
case 14:
YY_RULE_SETUP
#line 18 "c.l"
;
	YY_BREAK
case 15:
YY_RULE_SETUP
#line 19 "c.l"
return NUM;
	YY_BREAK
case 16:
YY_RULE_SETUP
#line 20 "c.l"
return ID;
	YY_BREAK
case 17:
YY_RULE_SETUP
#line 21 "c.l"
return LE;
	YY_BREAK
case 18:
YY_RULE_SETUP
#line 22 "c.l"
return GE;
	YY_BREAK
case 19:
YY_RULE_SETUP
#line 23 "c.l"
return EQ;
	YY_BREAK
case 20:
YY_RULE_SETUP
#line 24 "c.l"
return NE;
	YY_BREAK
case 21:
YY_RULE_SETUP
#line 25 "c.l"
return GT;
	YY_BREAK
case 22:
YY_RULE_SETUP
#line 26 "c.l"
return LT;
	YY_BREAK
case 23:
YY_RULE_SETUP
#line 27 "c.l"
return DOT;
	YY_BREAK
case 24:
YY_RULE_SETUP
#line 28 "c.l"
;
	YY_BREAK
case 25:
YY_RULE_SETUP
#line 29 "c.l"
;
	YY_BREAK
case 26:
YY_RULE_SETUP
#line 30 "c.l"
return yytext[0];
	YY_BREAK
case 27:
YY_RULE_SETUP
#line 31 "c.l"
ECHO;
	YY_BREAK
#line 926 "lex.yy.c"
case YY_STATE_EOF(INITIAL):
	yyterminate();

	case YY_END_OF_BUFFER:
		{

		int yy_amount_of_matched_text = (int) (yy_cp - (yytext_ptr)) - 1;


		*yy_cp = (yy_hold_char);
		YY_RESTORE_YY_MORE_OFFSET

		if ( YY_CURRENT_BUFFER_LVALUE->yy_buffer_status == YY_BUFFER_NEW )
			{
			
			(yy_n_chars) = YY_CURRENT_BUFFER_LVALUE->yy_n_chars;
			YY_CURRENT_BUFFER_LVALUE->yy_input_file = yyin;
			YY_CURRENT_BUFFER_LVALUE->yy_buffer_status = YY_BUFFER_NORMAL;
			}


		if ( (yy_c_buf_p) <= &YY_CURRENT_BUFFER_LVALUE->yy_ch_buf[(yy_n_chars)] )
			{ 
			yy_state_type yy_next_state;

			(yy_c_buf_p) = (yytext_ptr) + yy_amount_of_matched_text;

			yy_current_state = yy_get_previous_state(  );


			yy_next_state = yy_try_NUL_trans( yy_current_state );

			yy_bp = (yytext_ptr) + YY_MORE_ADJ;

			if ( yy_next_state )
				{
				
				yy_cp = ++(yy_c_buf_p);
				yy_current_state = yy_next_state;
				goto yy_match;
				}

			else
				{
				yy_cp = (yy_c_buf_p);
				goto yy_find_action;
				}
			}

		else switch ( yy_get_next_buffer(  ) )
			{
			case EOB_ACT_END_OF_FILE:
				{
				(yy_did_buffer_switch_on_eof) = 0;

				if ( yywrap( ) )
					{
¿
					(yy_c_buf_p) = (yytext_ptr) + YY_MORE_ADJ;

					yy_act = YY_STATE_EOF(YY_START);
					goto do_action;
					}

				else
					{
					if ( ! (yy_did_buffer_switch_on_eof) )
						YY_NEW_FILE;
					}
				break;
				}

			case EOB_ACT_CONTINUE_SCAN:
				(yy_c_buf_p) =
					(yytext_ptr) + yy_amount_of_matched_text;

				yy_current_state = yy_get_previous_state(  );

				yy_cp = (yy_c_buf_p);
				yy_bp = (yytext_ptr) + YY_MORE_ADJ;
				goto yy_match;

			case EOB_ACT_LAST_MATCH:
				(yy_c_buf_p) =
				&YY_CURRENT_BUFFER_LVALUE->yy_ch_buf[(yy_n_chars)];

				yy_current_state = yy_get_previous_state(  );

				yy_cp = (yy_c_buf_p);
				yy_bp = (yytext_ptr) + YY_MORE_ADJ;
				goto yy_find_action;
			}
		break;
		}

	default:
		YY_FATAL_ERROR("error interno, no se encontro ninguna accion" );
	} 
		} 
} 
static int yy_get_next_buffer (void)
{
    	register char *dest = YY_CURRENT_BUFFER_LVALUE->yy_ch_buf;
	register char *source = (yytext_ptr);
	register int number_to_move, i;
	int ret_val;

	if ( (yy_c_buf_p) > &YY_CURRENT_BUFFER_LVALUE->yy_ch_buf[(yy_n_chars) + 1] )
		YY_FATAL_ERROR(	"error: se perdio el final del buffer" );

	if ( YY_CURRENT_BUFFER_LVALUE->yy_fill_buffer == 0 )
		{ 
		if ( (yy_c_buf_p) - (yytext_ptr) - YY_MORE_ADJ == 1 )
			{
	
			return EOB_ACT_END_OF_FILE;
			}

		else
			{
	
			return EOB_ACT_LAST_MATCH;
			}
		}

	number_to_move = (int) ((yy_c_buf_p) - (yytext_ptr)) - 1;

	for ( i = 0; i < number_to_move; ++i )
		*(dest++) = *(source++);

	if ( YY_CURRENT_BUFFER_LVALUE->yy_buffer_status == YY_BUFFER_EOF_PENDING )

		YY_CURRENT_BUFFER_LVALUE->yy_n_chars = (yy_n_chars) = 0;

	else
		{
			int num_to_read =
			YY_CURRENT_BUFFER_LVALUE->yy_buf_size - number_to_move - 1;

		while ( num_to_read <= 0 )
			{ 

			YY_BUFFER_STATE b = YY_CURRENT_BUFFER;

			int yy_c_buf_p_offset =
				(int) ((yy_c_buf_p) - b->yy_ch_buf);

			if ( b->yy_is_our_buffer )
				{
				int new_size = b->yy_buf_size * 2;

				if ( new_size <= 0 )
					b->yy_buf_size += b->yy_buf_size / 8;
				else
					b->yy_buf_size *= 2;

				b->yy_ch_buf = (char *)
					
					yyrealloc((void *) b->yy_ch_buf,b->yy_buf_size + 2  );
				}
			else
				
				b->yy_ch_buf = 0;

			if ( ! b->yy_ch_buf )
				YY_FATAL_ERROR(	"desbordamiento del buffer de entrada" );

			(yy_c_buf_p) = &b->yy_ch_buf[yy_c_buf_p_offset];

			num_to_read = YY_CURRENT_BUFFER_LVALUE->yy_buf_size -
						number_to_move - 1;

			}

		if ( num_to_read > YY_READ_BUF_SIZE )
			num_to_read = YY_READ_BUF_SIZE;


		YY_INPUT( (&YY_CURRENT_BUFFER_LVALUE->yy_ch_buf[number_to_move]),
			(yy_n_chars), (size_t) num_to_read );

		YY_CURRENT_BUFFER_LVALUE->yy_n_chars = (yy_n_chars);
		}

	if ( (yy_n_chars) == 0 )
		{
		if ( number_to_move == YY_MORE_ADJ )
			{
			ret_val = EOB_ACT_END_OF_FILE;
			yyrestart(yyin  );
			}

		else
			{
			ret_val = EOB_ACT_LAST_MATCH;
			YY_CURRENT_BUFFER_LVALUE->yy_buffer_status =
				YY_BUFFER_EOF_PENDING;
			}
		}

	else
		ret_val = EOB_ACT_CONTINUE_SCAN;

	if ((yy_size_t) ((yy_n_chars) + number_to_move) > YY_CURRENT_BUFFER_LVALUE->yy_buf_size) {
		
		yy_size_t new_size = (yy_n_chars) + number_to_move + ((yy_n_chars) >> 1);
		YY_CURRENT_BUFFER_LVALUE->yy_ch_buf = (char *) yyrealloc((void *) YY_CURRENT_BUFFER_LVALUE->yy_ch_buf,new_size  );
		if ( ! YY_CURRENT_BUFFER_LVALUE->yy_ch_buf )
			YY_FATAL_ERROR( "sin memoria dinamica en  yy_get_next_buffer()" );
	}

	(yy_n_chars) += number_to_move;
	YY_CURRENT_BUFFER_LVALUE->yy_ch_buf[(yy_n_chars)] = YY_END_OF_BUFFER_CHAR;
	YY_CURRENT_BUFFER_LVALUE->yy_ch_buf[(yy_n_chars) + 1] = YY_END_OF_BUFFER_CHAR;

	(yytext_ptr) = &YY_CURRENT_BUFFER_LVALUE->yy_ch_buf[0];

	return ret_val;
}


    static yy_state_type yy_get_previous_state (void)
{
	register yy_state_type yy_current_state;
	register char *yy_cp;
    
	yy_current_state = (yy_start);
	yy_current_state += YY_AT_BOL();

	for ( yy_cp = (yytext_ptr) + YY_MORE_ADJ; yy_cp < (yy_c_buf_p); ++yy_cp )
		{
		register YY_CHAR yy_c = (*yy_cp ? yy_ec[YY_SC_TO_UI(*yy_cp)] : 1);
		if ( yy_accept[yy_current_state] )
			{
			(yy_last_accepting_state) = yy_current_state;
			(yy_last_accepting_cpos) = yy_cp;
			}
		while ( yy_chk[yy_base[yy_current_state] + yy_c] != yy_current_state )
			{
			yy_current_state = (int) yy_def[yy_current_state];
			if ( yy_current_state >= 86 )
				yy_c = yy_meta[(unsigned int) yy_c];
			}
		yy_current_state = yy_nxt[yy_base[yy_current_state] + (unsigned int) yy_c];
		}

	return yy_current_state;
}

    static yy_state_type yy_try_NUL_trans  (yy_state_type yy_current_state )
{
	register int yy_is_jam;
    	register char *yy_cp = (yy_c_buf_p);

	register YY_CHAR yy_c = 1;
	if ( yy_accept[yy_current_state] )
		{
		(yy_last_accepting_state) = yy_current_state;
		(yy_last_accepting_cpos) = yy_cp;
		}
	while ( yy_chk[yy_base[yy_current_state] + yy_c] != yy_current_state )
		{
		yy_current_state = (int) yy_def[yy_current_state];
		if ( yy_current_state >= 86 )
			yy_c = yy_meta[(unsigned int) yy_c];
		}
	yy_current_state = yy_nxt[yy_base[yy_current_state] + (unsigned int) yy_c];
	yy_is_jam = (yy_current_state == 85);

	return yy_is_jam ? 0 : yy_current_state;
}

    static void yyunput (int c, register char * yy_bp )
{
	register char *yy_cp;
    
    yy_cp = (yy_c_buf_p);


	*yy_cp = (yy_hold_char);

	if ( yy_cp < YY_CURRENT_BUFFER_LVALUE->yy_ch_buf + 2 )
		{ 
		register int number_to_move = (yy_n_chars) + 2;
		register char *dest = &YY_CURRENT_BUFFER_LVALUE->yy_ch_buf[
					YY_CURRENT_BUFFER_LVALUE->yy_buf_size + 2];
		register char *source =
				&YY_CURRENT_BUFFER_LVALUE->yy_ch_buf[number_to_move];

		while ( source > YY_CURRENT_BUFFER_LVALUE->yy_ch_buf )
			*--dest = *--source;

		yy_cp += (int) (dest - source);
		yy_bp += (int) (dest - source);
		YY_CURRENT_BUFFER_LVALUE->yy_n_chars =
			(yy_n_chars) = YY_CURRENT_BUFFER_LVALUE->yy_buf_size;

		if ( yy_cp < YY_CURRENT_BUFFER_LVALUE->yy_ch_buf + 2 )
			YY_FATAL_ERROR( "desbordamiento" );
		}

	*--yy_cp = (char) c;

	(yytext_ptr) = yy_bp;
	(yy_hold_char) = *yy_cp;
	(yy_c_buf_p) = yy_cp;
}

#ifndef YY_NO_INPUT
#ifdef __cplusplus
    static int yyinput (void)
#else
    static int input  (void)
#endif

{
	int c;
    
	*(yy_c_buf_p) = (yy_hold_char);

	if ( *(yy_c_buf_p) == YY_END_OF_BUFFER_CHAR )
		{

		if ( (yy_c_buf_p) < &YY_CURRENT_BUFFER_LVALUE->yy_ch_buf[(yy_n_chars)] )
	
			*(yy_c_buf_p) = '\0';

		else
			{ 
			int offset = (yy_c_buf_p) - (yytext_ptr);
			++(yy_c_buf_p);

			switch ( yy_get_next_buffer(  ) )
				{
				case EOB_ACT_LAST_MATCH:

					yyrestart(yyin );


				case EOB_ACT_END_OF_FILE:
					{
					if ( yywrap( ) )
						return EOF;

					if ( ! (yy_did_buffer_switch_on_eof) )
						YY_NEW_FILE;
#ifdef __cplusplus
					return yyinput();
#else
					return input();
#endif
					}

				case EOB_ACT_CONTINUE_SCAN:
					(yy_c_buf_p) = (yytext_ptr) + offset;
					break;
				}
			}
		}

	c = *(unsigned char *) (yy_c_buf_p);
	*(yy_c_buf_p) = '\0';	
	(yy_hold_char) = *++(yy_c_buf_p);

	YY_CURRENT_BUFFER_LVALUE->yy_at_bol = (c == '\n');

	return c;
}
#endif	
    void yyrestart  (FILE * input_file )
{
    
	if ( ! YY_CURRENT_BUFFER ){
        yyensure_buffer_stack ();
		YY_CURRENT_BUFFER_LVALUE =
            yy_create_buffer(yyin,YY_BUF_SIZE );
	}

	yy_init_buffer(YY_CURRENT_BUFFER,input_file );
	yy_load_buffer_state( );
}


    void yy_switch_to_buffer  (YY_BUFFER_STATE  new_buffer )
{
    
	yyensure_buffer_stack ();
	if ( YY_CURRENT_BUFFER == new_buffer )
		return;

	if ( YY_CURRENT_BUFFER )
		{
		
		*(yy_c_buf_p) = (yy_hold_char);
		YY_CURRENT_BUFFER_LVALUE->yy_buf_pos = (yy_c_buf_p);
		YY_CURRENT_BUFFER_LVALUE->yy_n_chars = (yy_n_chars);
		}

	YY_CURRENT_BUFFER_LVALUE = new_buffer;
	yy_load_buffer_state( );


	(yy_did_buffer_switch_on_eof) = 1;
}

static void yy_load_buffer_state  (void)
{
    	(yy_n_chars) = YY_CURRENT_BUFFER_LVALUE->yy_n_chars;
	(yytext_ptr) = (yy_c_buf_p) = YY_CURRENT_BUFFER_LVALUE->yy_buf_pos;
	yyin = YY_CURRENT_BUFFER_LVALUE->yy_input_file;
	(yy_hold_char) = *(yy_c_buf_p);
}


    YY_BUFFER_STATE yy_create_buffer  (FILE * file, int  size )
{
	YY_BUFFER_STATE b;
    
	b = (YY_BUFFER_STATE) yyalloc(sizeof( struct yy_buffer_state )  );
	if ( ! b )
		YY_FATAL_ERROR( "sin memoria dinamica en yy_create_buffer()" );

	b->yy_buf_size = size;


	b->yy_ch_buf = (char *) yyalloc(b->yy_buf_size + 2  );
	if ( ! b->yy_ch_buf )
		YY_FATAL_ERROR( "sin memoria dinamica en yy_create_buffer()" );

	b->yy_is_our_buffer = 1;

	yy_init_buffer(b,file );

	return b;
}

    void yy_delete_buffer (YY_BUFFER_STATE  b )
{
    
	if ( ! b )
		return;

	if ( b == YY_CURRENT_BUFFER )
		YY_CURRENT_BUFFER_LVALUE = (YY_BUFFER_STATE) 0;

	if ( b->yy_is_our_buffer )
		yyfree((void *) b->yy_ch_buf  );

	yyfree((void *) b  );
}

#ifndef __cplusplus
extern int isatty (int );
#endif 
    

    static void yy_init_buffer  (YY_BUFFER_STATE  b, FILE * file )

{
	int oerrno = errno;
    
	yy_flush_buffer(b );

	b->yy_input_file = file;
	b->yy_fill_buffer = 1;


    if (b != YY_CURRENT_BUFFER){
        b->yy_bs_lineno = 1;
        b->yy_bs_column = 0;
    }

        b->yy_is_interactive = file ? (isatty( fileno(file) ) > 0) : 0;
    
	errno = oerrno;
}


    void yy_flush_buffer (YY_BUFFER_STATE  b )
{
    	if ( ! b )
		return;

	b->yy_n_chars = 0;

	b->yy_ch_buf[0] = YY_END_OF_BUFFER_CHAR;
	b->yy_ch_buf[1] = YY_END_OF_BUFFER_CHAR;

	b->yy_buf_pos = &b->yy_ch_buf[0];

	b->yy_at_bol = 1;
	b->yy_buffer_status = YY_BUFFER_NEW;

	if ( b == YY_CURRENT_BUFFER )
		yy_load_buffer_state( );
}


void yypush_buffer_state (YY_BUFFER_STATE new_buffer )
{
    	if (new_buffer == NULL)
		return;

	yyensure_buffer_stack();

	
	if ( YY_CURRENT_BUFFER )
		{
		
		*(yy_c_buf_p) = (yy_hold_char);
		YY_CURRENT_BUFFER_LVALUE->yy_buf_pos = (yy_c_buf_p);
		YY_CURRENT_BUFFER_LVALUE->yy_n_chars = (yy_n_chars);
		}

	
	if (YY_CURRENT_BUFFER)
		(yy_buffer_stack_top)++;
	YY_CURRENT_BUFFER_LVALUE = new_buffer;

	
	yy_load_buffer_state( );
	(yy_did_buffer_switch_on_eof) = 1;
}


void yypop_buffer_state (void)
{
    	if (!YY_CURRENT_BUFFER)
		return;

	yy_delete_buffer(YY_CURRENT_BUFFER );
	YY_CURRENT_BUFFER_LVALUE = NULL;
	if ((yy_buffer_stack_top) > 0)
		--(yy_buffer_stack_top);

	if (YY_CURRENT_BUFFER) {
		yy_load_buffer_state( );
		(yy_did_buffer_switch_on_eof) = 1;
	}
}


static void yyensure_buffer_stack (void)
{
	int num_to_alloc;
    
	if (!(yy_buffer_stack)) {


		num_to_alloc = 1;
		(yy_buffer_stack) = (struct yy_buffer_state**)yyalloc
								(num_to_alloc * sizeof(struct yy_buffer_state*)
								);
		if ( ! (yy_buffer_stack) )
			YY_FATAL_ERROR( "sin memoria dinamica en yyensure_buffer_stack()" );
								  
		memset((yy_buffer_stack), 0, num_to_alloc * sizeof(struct yy_buffer_state*));
				
		(yy_buffer_stack_max) = num_to_alloc;
		(yy_buffer_stack_top) = 0;
		return;
	}

	if ((yy_buffer_stack_top) >= ((yy_buffer_stack_max)) - 1){

		int grow_size = 8 ;

		num_to_alloc = (yy_buffer_stack_max) + grow_size;
		(yy_buffer_stack) = (struct yy_buffer_state**)yyrealloc
								((yy_buffer_stack),
								num_to_alloc * sizeof(struct yy_buffer_state*)
								);
		if ( ! (yy_buffer_stack) )
			YY_FATAL_ERROR( "out of dynamic memory in yyensure_buffer_stack()" );

		
		memset((yy_buffer_stack) + (yy_buffer_stack_max), 0, grow_size * sizeof(struct yy_buffer_state*));
		(yy_buffer_stack_max) = num_to_alloc;
	}
}

YY_BUFFER_STATE yy_scan_buffer  (char * base, yy_size_t  size )
{
	YY_BUFFER_STATE b;
    
	if ( size < 2 ||
	     base[size-2] != YY_END_OF_BUFFER_CHAR ||
	     base[size-1] != YY_END_OF_BUFFER_CHAR )
		
		return 0;

	b = (YY_BUFFER_STATE) yyalloc(sizeof( struct yy_buffer_state )  );
	if ( ! b )
		YY_FATAL_ERROR( "sin memoria dinamica en yy_scan_buffer()" );

	b->yy_buf_size = size - 2;	
	b->yy_buf_pos = b->yy_ch_buf = base;
	b->yy_is_our_buffer = 0;
	b->yy_input_file = 0;
	b->yy_n_chars = b->yy_buf_size;
	b->yy_is_interactive = 0;
	b->yy_at_bol = 1;
	b->yy_fill_buffer = 0;
	b->yy_buffer_status = YY_BUFFER_NEW;

	yy_switch_to_buffer(b  );

	return b;
}


YY_BUFFER_STATE yy_scan_string (yyconst char * yystr )
{
    
	return yy_scan_bytes(yystr,strlen(yystr) );
}


YY_BUFFER_STATE yy_scan_bytes  (yyconst char * yybytes, int  _yybytes_len )
{
	YY_BUFFER_STATE b;
	char *buf;
	yy_size_t n;
	int i;
    
	
	n = _yybytes_len + 2;
	buf = (char *) yyalloc(n  );
	if ( ! buf )
		YY_FATAL_ERROR( "sin memoria dinamica en yy_scan_bytes()" );

	for ( i = 0; i < _yybytes_len; ++i )
		buf[i] = yybytes[i];

	buf[_yybytes_len] = buf[_yybytes_len+1] = YY_END_OF_BUFFER_CHAR;

	b = yy_scan_buffer(buf,n );
	if ( ! b )
		YY_FATAL_ERROR( "mala memoria yy_scan_bytes()" );


	b->yy_is_our_buffer = 1;

	return b;
}

#ifndef YY_EXIT_FAILURE
#define YY_EXIT_FAILURE 2
#endif

static void yy_fatal_error (yyconst char* msg )
{
    	(void) fprintf( stderr, "%s\n", msg );
	exit( YY_EXIT_FAILURE );
}



#undef yyless
#define yyless(n) \
	do \
		{ \
		 \
        int yyless_macro_arg = (n); \
        YY_LESS_LINENO(yyless_macro_arg);\
		yytext[yyleng] = (yy_hold_char); \
		(yy_c_buf_p) = yytext + yyless_macro_arg; \
		(yy_hold_char) = *(yy_c_buf_p); \
		*(yy_c_buf_p) = '\0'; \
		yyleng = yyless_macro_arg; \
		} \
	while ( 0 )


int yyget_lineno  (void)
{
        
    return yylineno;
}


FILE *yyget_in  (void)
{
        return yyin;
}


FILE *yyget_out  (void)
{
        return yyout;
}

int yyget_leng  (void)
{
        return yyleng;
}



char *yyget_text  (void)
{
        return yytext;
}


void yyset_lineno (int  line_number )
{
    
    yylineno = line_number;
}


void yyset_in (FILE *  in_str )
{
        yyin = in_str ;
}

void yyset_out (FILE *  out_str )
{
        yyout = out_str ;
}

int yyget_debug  (void)
{
        return yy_flex_debug;
}

void yyset_debug (int  bdebug )
{
        yy_flex_debug = bdebug ;
}

static int yy_init_globals (void)
{
     

    (yy_buffer_stack) = 0;
    (yy_buffer_stack_top) = 0;
    (yy_buffer_stack_max) = 0;
    (yy_c_buf_p) = (char *) 0;
    (yy_init) = 0;
    (yy_start) = 0;


#ifdef YY_STDINIT
    yyin = stdin;
    yyout = stdout;
#else
    yyin = (FILE *) 0;
    yyout = (FILE *) 0;
#endif

 
    return 0;
}


int yylex_destroy  (void)
{
    

	while(YY_CURRENT_BUFFER){
		yy_delete_buffer(YY_CURRENT_BUFFER  );
		YY_CURRENT_BUFFER_LVALUE = NULL;
		yypop_buffer_state();
	}

	
	yyfree((yy_buffer_stack) );
	(yy_buffer_stack) = NULL;

  
    yy_init_globals( );

    return 0;
}



#ifndef yytext_ptr
static void yy_flex_strncpy (char* s1, yyconst char * s2, int n )
{
	register int i;
	for ( i = 0; i < n; ++i )
		s1[i] = s2[i];
}
#endif

#ifdef YY_NEED_STRLEN
static int yy_flex_strlen (yyconst char * s )
{
	register int n;
	for ( n = 0; s[n]; ++n )
		;

	return n;
}
#endif

void *yyalloc (yy_size_t  size )
{
	return (void *) malloc( size );
}

void *yyrealloc  (void * ptr, yy_size_t  size )
{
	return (void *) realloc( (char *) ptr, size );
}

void yyfree (void * ptr )
{
	free( (char *) ptr );	/
}

#define YYTABLES_NAME "yytables"

#line 31 "c.l"



