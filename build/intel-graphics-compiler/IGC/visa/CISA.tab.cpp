/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         CISAparse
#define yylex           CISAlex
#define yyerror         CISAerror
#define yydebug         CISAdebug
#define yynerrs         CISAnerrs
#define yylval          CISAlval
#define yychar          CISAchar

/* First part of user prologue.  */
#line 9 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"

#include <stdio.h>
#include <math.h>
#include <string>
#include <vector>

#include "visa_igc_common_header.h"
#include "Common_ISA.h"
#include "Common_ISA_util.h"
#include "Common_ISA_framework.h"
#include "JitterDataStruct.h"
#include "VISAKernel.h"

static int lscCheckExecSize(
    CISA_IR_Builder* pBuilder,
    LSC_SFID sfid,
    LSC_OP op,
    LSC_DATA_ORDER data_order,
    int exec_size);

void CISAerror(CISA_IR_Builder* builder, char const* msg);
int yylex(CISA_IR_Builder *pBuilder);
extern int CISAlineno;

static bool streq(const char *sym0, const char *sym1);
static bool ParseAlign(CISA_IR_Builder* pBuilder, const char *sym, VISA_Align &value);
static VISA_Align AlignBytesToVisaAlignment(int bytes);
static int DataTypeSizeOf(VISA_Type type);
static bool ParseEMask(const char* sym, VISA_EMask_Ctrl &emask);

//
// check if the cond is true.
// if cond is false, then print errorMessage (syntax error) and YYABORT
#define MUST_HOLD(cond, errorMessage) \
  {if (!(cond)) {pBuilder->RecordParseError(CISAlineno, errorMessage); YYABORT;}}
#define PARSE_ERROR_AT(LINE,...)\
  {pBuilder->RecordParseError(LINE, __VA_ARGS__); YYABORT;}
#define PARSE_ERROR(...)\
    PARSE_ERROR_AT(CISAlineno, __VA_ARGS__)

// Use this to wrap API calls that return false, nullptr, or 0 on failure
// It's assumed that the API call reported the parse error
#define ABORT_ON_FAIL(X) \
    do \
        if (!(X)) \
            YYABORT;\
    while (0)
#define TRACE(S) \
    do { \
      if (CISAout && pBuilder->debugParse()) \
          fprintf(CISAout, "line %d: %s", CISAlineno, S); \
    } while (0)

std::deque<const char*> switchLabels;
std::vector<VISA_opnd*> RTRWOperandsVec;

VISA_RawOpnd* rawOperandArray[16];

// global var for non-kernel attribute option.
// The var needs to be cleared before each use.
std::vector<attr_gen_struct*> AttrOptVar;


#line 142 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "CISA.tab.hpp"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ALIGN_KEYWORD = 3,              /* ALIGN_KEYWORD  */
  YYSYMBOL_ATOMIC_SUB_OP = 4,              /* ATOMIC_SUB_OP  */
  YYSYMBOL_DIRECTIVE_DECL = 5,             /* DIRECTIVE_DECL  */
  YYSYMBOL_DIRECTIVE_FUNC = 6,             /* DIRECTIVE_FUNC  */
  YYSYMBOL_DIRECTIVE_FUNCDECL = 7,         /* DIRECTIVE_FUNCDECL  */
  YYSYMBOL_DIRECTIVE_GLOBAL_FUNC = 8,      /* DIRECTIVE_GLOBAL_FUNC  */
  YYSYMBOL_DIRECTIVE_IMPLICIT = 9,         /* DIRECTIVE_IMPLICIT  */
  YYSYMBOL_DIRECTIVE_INPUT = 10,           /* DIRECTIVE_INPUT  */
  YYSYMBOL_DIRECTIVE_KERNEL = 11,          /* DIRECTIVE_KERNEL  */
  YYSYMBOL_DIRECTIVE_KERNEL_ATTR = 12,     /* DIRECTIVE_KERNEL_ATTR  */
  YYSYMBOL_DIRECTIVE_VERSION = 13,         /* DIRECTIVE_VERSION  */
  YYSYMBOL_ALIAS_EQ = 14,                  /* ALIAS_EQ  */
  YYSYMBOL_ALIGN_EQ = 15,                  /* ALIGN_EQ  */
  YYSYMBOL_ATTR_EQ = 16,                   /* ATTR_EQ  */
  YYSYMBOL_OFFSET_EQ = 17,                 /* OFFSET_EQ  */
  YYSYMBOL_NUM_ELTS_EQ = 18,               /* NUM_ELTS_EQ  */
  YYSYMBOL_V_NAME_EQ = 19,                 /* V_NAME_EQ  */
  YYSYMBOL_SIZE_EQ = 20,                   /* SIZE_EQ  */
  YYSYMBOL_V_TYPE_EQ_G = 21,               /* V_TYPE_EQ_G  */
  YYSYMBOL_V_TYPE_EQ_P = 22,               /* V_TYPE_EQ_P  */
  YYSYMBOL_V_TYPE_EQ_A = 23,               /* V_TYPE_EQ_A  */
  YYSYMBOL_V_TYPE_EQ_S = 24,               /* V_TYPE_EQ_S  */
  YYSYMBOL_V_TYPE_EQ_T = 25,               /* V_TYPE_EQ_T  */
  YYSYMBOL_CPS = 26,                       /* CPS  */
  YYSYMBOL_NON_UNIFORM_SAMPLER = 27,       /* NON_UNIFORM_SAMPLER  */
  YYSYMBOL_PIXEL_NULL_MASK = 28,           /* PIXEL_NULL_MASK  */
  YYSYMBOL_RAW_SEND_STRING = 29,           /* RAW_SEND_STRING  */
  YYSYMBOL_RAW_SENDC_STRING = 30,          /* RAW_SENDC_STRING  */
  YYSYMBOL_RAW_SENDS_STRING = 31,          /* RAW_SENDS_STRING  */
  YYSYMBOL_RAW_SENDS_EOT_STRING = 32,      /* RAW_SENDS_EOT_STRING  */
  YYSYMBOL_RAW_SENDSC_STRING = 33,         /* RAW_SENDSC_STRING  */
  YYSYMBOL_RAW_SENDSC_EOT_STRING = 34,     /* RAW_SENDSC_EOT_STRING  */
  YYSYMBOL_SAT = 35,                       /* SAT  */
  YYSYMBOL_SRCMOD_ABS = 36,                /* SRCMOD_ABS  */
  YYSYMBOL_SRCMOD_NEG = 37,                /* SRCMOD_NEG  */
  YYSYMBOL_SRCMOD_NEGABS = 38,             /* SRCMOD_NEGABS  */
  YYSYMBOL_SRCMOD_NOT = 39,                /* SRCMOD_NOT  */
  YYSYMBOL_BFN_OP = 40,                    /* BFN_OP  */
  YYSYMBOL_DPAS_OP = 41,                   /* DPAS_OP  */
  YYSYMBOL_SVM_ALIGNED = 42,               /* SVM_ALIGNED  */
  YYSYMBOL_SVM_UNALIGNED = 43,             /* SVM_UNALIGNED  */
  YYSYMBOL_NBARRIER_SIGNAL = 44,           /* NBARRIER_SIGNAL  */
  YYSYMBOL_NBARRIER_WAIT = 45,             /* NBARRIER_WAIT  */
  YYSYMBOL_ITYPE = 46,                     /* ITYPE  */
  YYSYMBOL_DECL_DATA_TYPE = 47,            /* DECL_DATA_TYPE  */
  YYSYMBOL_DFTYPE = 48,                    /* DFTYPE  */
  YYSYMBOL_FTYPE = 49,                     /* FTYPE  */
  YYSYMBOL_HFTYPE = 50,                    /* HFTYPE  */
  YYSYMBOL_BFTYPE = 51,                    /* BFTYPE  */
  YYSYMBOL_VTYPE = 52,                     /* VTYPE  */
  YYSYMBOL_COND_MOD = 53,                  /* COND_MOD  */
  YYSYMBOL_LANGLE = 54,                    /* LANGLE  */
  YYSYMBOL_RANGLE = 55,                    /* RANGLE  */
  YYSYMBOL_LBRACK = 56,                    /* LBRACK  */
  YYSYMBOL_RBRACK = 57,                    /* RBRACK  */
  YYSYMBOL_IND_LBRACK = 58,                /* IND_LBRACK  */
  YYSYMBOL_LPAREN = 59,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 60,                    /* RPAREN  */
  YYSYMBOL_LBRACE = 61,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 62,                    /* RBRACE  */
  YYSYMBOL_DOT = 63,                       /* DOT  */
  YYSYMBOL_COMMA = 64,                     /* COMMA  */
  YYSYMBOL_SEMI = 65,                      /* SEMI  */
  YYSYMBOL_COLON = 66,                     /* COLON  */
  YYSYMBOL_SLASH = 67,                     /* SLASH  */
  YYSYMBOL_PERCENT = 68,                   /* PERCENT  */
  YYSYMBOL_EQUALS = 69,                    /* EQUALS  */
  YYSYMBOL_PLUS = 70,                      /* PLUS  */
  YYSYMBOL_MINUS = 71,                     /* MINUS  */
  YYSYMBOL_TIMES = 72,                     /* TIMES  */
  YYSYMBOL_AMP = 73,                       /* AMP  */
  YYSYMBOL_CIRC = 74,                      /* CIRC  */
  YYSYMBOL_PIPE = 75,                      /* PIPE  */
  YYSYMBOL_TILDE = 76,                     /* TILDE  */
  YYSYMBOL_BANG = 77,                      /* BANG  */
  YYSYMBOL_QUESTION = 78,                  /* QUESTION  */
  YYSYMBOL_LEQ = 79,                       /* LEQ  */
  YYSYMBOL_GEQ = 80,                       /* GEQ  */
  YYSYMBOL_EQ = 81,                        /* EQ  */
  YYSYMBOL_NEQ = 82,                       /* NEQ  */
  YYSYMBOL_SHL = 83,                       /* SHL  */
  YYSYMBOL_SHRS = 84,                      /* SHRS  */
  YYSYMBOL_SHRZ = 85,                      /* SHRZ  */
  YYSYMBOL_LABEL = 86,                     /* LABEL  */
  YYSYMBOL_IDENT = 87,                     /* IDENT  */
  YYSYMBOL_BUILTIN_NULL = 88,              /* BUILTIN_NULL  */
  YYSYMBOL_BUILTIN = 89,                   /* BUILTIN  */
  YYSYMBOL_STRING_LIT = 90,                /* STRING_LIT  */
  YYSYMBOL_NEWLINE = 91,                   /* NEWLINE  */
  YYSYMBOL_UNIFORM = 92,                   /* UNIFORM  */
  YYSYMBOL_RTWRITE_OPTION = 93,            /* RTWRITE_OPTION  */
  YYSYMBOL_MEDIA_MODE = 94,                /* MEDIA_MODE  */
  YYSYMBOL_OWORD_MODIFIER = 95,            /* OWORD_MODIFIER  */
  YYSYMBOL_SAMPLER_CHANNEL = 96,           /* SAMPLER_CHANNEL  */
  YYSYMBOL_CHANNEL_OUTPUT = 97,            /* CHANNEL_OUTPUT  */
  YYSYMBOL_EXECMODE = 98,                  /* EXECMODE  */
  YYSYMBOL_CNTRL = 99,                     /* CNTRL  */
  YYSYMBOL_FENCE_OPTIONS = 100,            /* FENCE_OPTIONS  */
  YYSYMBOL_ADDR_ADD_OP = 101,              /* ADDR_ADD_OP  */
  YYSYMBOL_UNARY_LOGIC_OP = 102,           /* UNARY_LOGIC_OP  */
  YYSYMBOL_BINARY_LOGIC_OP = 103,          /* BINARY_LOGIC_OP  */
  YYSYMBOL_TERNARY_LOGIC_OP = 104,         /* TERNARY_LOGIC_OP  */
  YYSYMBOL_QUATERNARY_LOGIC_OP = 105,      /* QUATERNARY_LOGIC_OP  */
  YYSYMBOL_SEL_OP = 106,                   /* SEL_OP  */
  YYSYMBOL_MIN_OP = 107,                   /* MIN_OP  */
  YYSYMBOL_MAX_OP = 108,                   /* MAX_OP  */
  YYSYMBOL_ANTI_TRIG_OP = 109,             /* ANTI_TRIG_OP  */
  YYSYMBOL_MATH2_OP = 110,                 /* MATH2_OP  */
  YYSYMBOL_MATH3_OP = 111,                 /* MATH3_OP  */
  YYSYMBOL_ARITH2_OP = 112,                /* ARITH2_OP  */
  YYSYMBOL_ARITH3_OP = 113,                /* ARITH3_OP  */
  YYSYMBOL_ARITH4_OP = 114,                /* ARITH4_OP  */
  YYSYMBOL_ARITH4_OP2 = 115,               /* ARITH4_OP2  */
  YYSYMBOL_CMP_OP = 116,                   /* CMP_OP  */
  YYSYMBOL_SVM_OP = 117,                   /* SVM_OP  */
  YYSYMBOL_SVM_SCATTER_OP = 118,           /* SVM_SCATTER_OP  */
  YYSYMBOL_SVM_GATHER4SCALED_OP = 119,     /* SVM_GATHER4SCALED_OP  */
  YYSYMBOL_SVM_SCATTER4SCALED_OP = 120,    /* SVM_SCATTER4SCALED_OP  */
  YYSYMBOL_SVM_ATOMIC_OP = 121,            /* SVM_ATOMIC_OP  */
  YYSYMBOL_OWORD_OP = 122,                 /* OWORD_OP  */
  YYSYMBOL_MEDIA_OP = 123,                 /* MEDIA_OP  */
  YYSYMBOL_SCATTER_OP = 124,               /* SCATTER_OP  */
  YYSYMBOL_SCATTER_TYPED_OP = 125,         /* SCATTER_TYPED_OP  */
  YYSYMBOL_SCATTER_SCALED_OP = 126,        /* SCATTER_SCALED_OP  */
  YYSYMBOL_SCATTER4_SCALED_OP = 127,       /* SCATTER4_SCALED_OP  */
  YYSYMBOL_BARRIER_OP = 128,               /* BARRIER_OP  */
  YYSYMBOL_SBARRIER_SIGNAL = 129,          /* SBARRIER_SIGNAL  */
  YYSYMBOL_SBARRIER_WAIT = 130,            /* SBARRIER_WAIT  */
  YYSYMBOL_DWORD_ATOMIC_OP = 131,          /* DWORD_ATOMIC_OP  */
  YYSYMBOL_TYPED_ATOMIC_OP = 132,          /* TYPED_ATOMIC_OP  */
  YYSYMBOL_SAMPLE_OP = 133,                /* SAMPLE_OP  */
  YYSYMBOL_SAMPLE_UNORM_OP = 134,          /* SAMPLE_UNORM_OP  */
  YYSYMBOL_VME_IME_OP = 135,               /* VME_IME_OP  */
  YYSYMBOL_VME_SIC_OP = 136,               /* VME_SIC_OP  */
  YYSYMBOL_VME_FBR_OP = 137,               /* VME_FBR_OP  */
  YYSYMBOL_BRANCH_OP = 138,                /* BRANCH_OP  */
  YYSYMBOL_RET_OP = 139,                   /* RET_OP  */
  YYSYMBOL_IFCALL = 140,                   /* IFCALL  */
  YYSYMBOL_FCALL = 141,                    /* FCALL  */
  YYSYMBOL_FADDR = 142,                    /* FADDR  */
  YYSYMBOL_SWITCHJMP_OP = 143,             /* SWITCHJMP_OP  */
  YYSYMBOL_MOVS_OP = 144,                  /* MOVS_OP  */
  YYSYMBOL_SETP_OP = 145,                  /* SETP_OP  */
  YYSYMBOL_MOV_OP = 146,                   /* MOV_OP  */
  YYSYMBOL_FILE_OP = 147,                  /* FILE_OP  */
  YYSYMBOL_LOC_OP = 148,                   /* LOC_OP  */
  YYSYMBOL_CACHE_FLUSH_OP = 149,           /* CACHE_FLUSH_OP  */
  YYSYMBOL_WAIT_OP = 150,                  /* WAIT_OP  */
  YYSYMBOL_FENCE_GLOBAL_OP = 151,          /* FENCE_GLOBAL_OP  */
  YYSYMBOL_FENCE_LOCAL_OP = 152,           /* FENCE_LOCAL_OP  */
  YYSYMBOL_FENCE_SW_OP = 153,              /* FENCE_SW_OP  */
  YYSYMBOL_YIELD_OP = 154,                 /* YIELD_OP  */
  YYSYMBOL_SAMPLE_3D_OP = 155,             /* SAMPLE_3D_OP  */
  YYSYMBOL_LOAD_3D_OP = 156,               /* LOAD_3D_OP  */
  YYSYMBOL_SAMPLE4_3D_OP = 157,            /* SAMPLE4_3D_OP  */
  YYSYMBOL_RESINFO_OP_3D = 158,            /* RESINFO_OP_3D  */
  YYSYMBOL_SAMPLEINFO_OP_3D = 159,         /* SAMPLEINFO_OP_3D  */
  YYSYMBOL_RTWRITE_OP_3D = 160,            /* RTWRITE_OP_3D  */
  YYSYMBOL_URBWRITE_OP_3D = 161,           /* URBWRITE_OP_3D  */
  YYSYMBOL_LIFETIME_START_OP = 162,        /* LIFETIME_START_OP  */
  YYSYMBOL_LIFETIME_END_OP = 163,          /* LIFETIME_END_OP  */
  YYSYMBOL_AVS_OP = 164,                   /* AVS_OP  */
  YYSYMBOL_BREAKPOINT_OP = 165,            /* BREAKPOINT_OP  */
  YYSYMBOL_CALL_OP = 166,                  /* CALL_OP  */
  YYSYMBOL_PRED_CNTL = 167,                /* PRED_CNTL  */
  YYSYMBOL_F32_LIT = 168,                  /* F32_LIT  */
  YYSYMBOL_F64_LIT = 169,                  /* F64_LIT  */
  YYSYMBOL_DEC_LIT = 170,                  /* DEC_LIT  */
  YYSYMBOL_HEX_LIT = 171,                  /* HEX_LIT  */
  YYSYMBOL_BUILTIN_SIZEOF = 172,           /* BUILTIN_SIZEOF  */
  YYSYMBOL_BUILTIN_DISPATCH_SIMD_SIZE = 173, /* BUILTIN_DISPATCH_SIMD_SIZE  */
  YYSYMBOL_QW_SCATTER_OP = 174,            /* QW_SCATTER_OP  */
  YYSYMBOL_LSC_CACHING_OPT = 175,          /* LSC_CACHING_OPT  */
  YYSYMBOL_LSC_ADDR_SIZE_TK = 176,         /* LSC_ADDR_SIZE_TK  */
  YYSYMBOL_LSC_DATA_SHAPE_TK = 177,        /* LSC_DATA_SHAPE_TK  */
  YYSYMBOL_LSC_DATA_SHAPE_TK_CHMASK = 178, /* LSC_DATA_SHAPE_TK_CHMASK  */
  YYSYMBOL_LSC_DATA_SHAPE_TK_BLOCK2D = 179, /* LSC_DATA_SHAPE_TK_BLOCK2D  */
  YYSYMBOL_LSC_AM_FLAT = 180,              /* LSC_AM_FLAT  */
  YYSYMBOL_LSC_AM_BTI = 181,               /* LSC_AM_BTI  */
  YYSYMBOL_LSC_AM_BSS = 182,               /* LSC_AM_BSS  */
  YYSYMBOL_LSC_AM_SS = 183,                /* LSC_AM_SS  */
  YYSYMBOL_LSC_AM_ARG = 184,               /* LSC_AM_ARG  */
  YYSYMBOL_LSC_FENCE_OP_TYPE = 185,        /* LSC_FENCE_OP_TYPE  */
  YYSYMBOL_LSC_FENCE_SCOPE = 186,          /* LSC_FENCE_SCOPE  */
  YYSYMBOL_LSC_SFID_UNTYPED_TOKEN = 187,   /* LSC_SFID_UNTYPED_TOKEN  */
  YYSYMBOL_LSC_SFID_TYPED_TOKEN = 188,     /* LSC_SFID_TYPED_TOKEN  */
  YYSYMBOL_LSC_LOAD_MNEMONIC = 189,        /* LSC_LOAD_MNEMONIC  */
  YYSYMBOL_LSC_LOAD_STRIDED_MNEMONIC = 190, /* LSC_LOAD_STRIDED_MNEMONIC  */
  YYSYMBOL_LSC_LOAD_BLOCK2D_MNEMONIC = 191, /* LSC_LOAD_BLOCK2D_MNEMONIC  */
  YYSYMBOL_LSC_STORE_MNEMONIC = 192,       /* LSC_STORE_MNEMONIC  */
  YYSYMBOL_LSC_STORE_STRIDED_MNEMONIC = 193, /* LSC_STORE_STRIDED_MNEMONIC  */
  YYSYMBOL_LSC_STORE_BLOCK2D_MNEMONIC = 194, /* LSC_STORE_BLOCK2D_MNEMONIC  */
  YYSYMBOL_LSC_ATOMIC_MNEMONIC = 195,      /* LSC_ATOMIC_MNEMONIC  */
  YYSYMBOL_LSC_READ_STATE_INFO_MNEMONIC = 196, /* LSC_READ_STATE_INFO_MNEMONIC  */
  YYSYMBOL_LSC_FENCE_MNEMONIC = 197,       /* LSC_FENCE_MNEMONIC  */
  YYSYMBOL_FCVT_OP = 198,                  /* FCVT_OP  */
  YYSYMBOL_LSC_DATA_SHAPE_TK_TYPED_BLOCK2D = 199, /* LSC_DATA_SHAPE_TK_TYPED_BLOCK2D  */
  YYSYMBOL_YYACCEPT = 200,                 /* $accept  */
  YYSYMBOL_Listing = 201,                  /* Listing  */
  YYSYMBOL_ListingHeader = 202,            /* ListingHeader  */
  YYSYMBOL_Statements = 203,               /* Statements  */
  YYSYMBOL_Newlines = 204,                 /* Newlines  */
  YYSYMBOL_NewlinesOpt = 205,              /* NewlinesOpt  */
  YYSYMBOL_Statement = 206,                /* Statement  */
  YYSYMBOL_Scope = 207,                    /* Scope  */
  YYSYMBOL_ScopeStart = 208,               /* ScopeStart  */
  YYSYMBOL_ScopeEnd = 209,                 /* ScopeEnd  */
  YYSYMBOL_IdentOrStringLit = 210,         /* IdentOrStringLit  */
  YYSYMBOL_DirectiveKernel = 211,          /* DirectiveKernel  */
  YYSYMBOL_DirectiveGlobalFunction = 212,  /* DirectiveGlobalFunction  */
  YYSYMBOL_DirectiveVersion = 213,         /* DirectiveVersion  */
  YYSYMBOL_DirectiveDecl = 214,            /* DirectiveDecl  */
  YYSYMBOL_DeclFunction = 215,             /* DeclFunction  */
  YYSYMBOL_DeclVariable = 216,             /* DeclVariable  */
  YYSYMBOL_DeclAddress = 217,              /* DeclAddress  */
  YYSYMBOL_DeclPredicate = 218,            /* DeclPredicate  */
  YYSYMBOL_DeclSampler = 219,              /* DeclSampler  */
  YYSYMBOL_VNameEqOpt = 220,               /* VNameEqOpt  */
  YYSYMBOL_DeclSurface = 221,              /* DeclSurface  */
  YYSYMBOL_DirectiveInput = 222,           /* DirectiveInput  */
  YYSYMBOL_DirectiveImplicitInput = 223,   /* DirectiveImplicitInput  */
  YYSYMBOL_InputOffset = 224,              /* InputOffset  */
  YYSYMBOL_InputSize = 225,                /* InputSize  */
  YYSYMBOL_DirectiveAttr = 226,            /* DirectiveAttr  */
  YYSYMBOL_DirectiveFunc = 227,            /* DirectiveFunc  */
  YYSYMBOL_AlignAttrOpt = 228,             /* AlignAttrOpt  */
  YYSYMBOL_Align = 229,                    /* Align  */
  YYSYMBOL_AliasAttrOpt = 230,             /* AliasAttrOpt  */
  YYSYMBOL_OneAttr = 231,                  /* OneAttr  */
  YYSYMBOL_AttrOpt = 232,                  /* AttrOpt  */
  YYSYMBOL_GenAttrOpt = 233,               /* GenAttrOpt  */
  YYSYMBOL_Instruction = 234,              /* Instruction  */
  YYSYMBOL_Label = 235,                    /* Label  */
  YYSYMBOL_LogicInstruction = 236,         /* LogicInstruction  */
  YYSYMBOL_UnaryLogicInstruction = 237,    /* UnaryLogicInstruction  */
  YYSYMBOL_MathInstruction_2OPND = 238,    /* MathInstruction_2OPND  */
  YYSYMBOL_MathInstruction_3OPND = 239,    /* MathInstruction_3OPND  */
  YYSYMBOL_ArithInstruction_2OPND = 240,   /* ArithInstruction_2OPND  */
  YYSYMBOL_ArithInstruction_3OPND = 241,   /* ArithInstruction_3OPND  */
  YYSYMBOL_ArithInstruction_4OPND = 242,   /* ArithInstruction_4OPND  */
  YYSYMBOL_DpasInstruction = 243,          /* DpasInstruction  */
  YYSYMBOL_BfnInstruction = 244,           /* BfnInstruction  */
  YYSYMBOL_QwScatterInstruction = 245,     /* QwScatterInstruction  */
  YYSYMBOL_FCvtInstruction = 246,          /* FCvtInstruction  */
  YYSYMBOL_AntiTrigInstruction = 247,      /* AntiTrigInstruction  */
  YYSYMBOL_AddrAddInstruction = 248,       /* AddrAddInstruction  */
  YYSYMBOL_SetpInstruction = 249,          /* SetpInstruction  */
  YYSYMBOL_SelInstruction = 250,           /* SelInstruction  */
  YYSYMBOL_MinInstruction = 251,           /* MinInstruction  */
  YYSYMBOL_MaxInstruction = 252,           /* MaxInstruction  */
  YYSYMBOL_MovInstruction = 253,           /* MovInstruction  */
  YYSYMBOL_BreakpointInstruction = 254,    /* BreakpointInstruction  */
  YYSYMBOL_MovsInstruction = 255,          /* MovsInstruction  */
  YYSYMBOL_CmpInstruction = 256,           /* CmpInstruction  */
  YYSYMBOL_MediaInstruction = 257,         /* MediaInstruction  */
  YYSYMBOL_MediaInstructionPlaneID = 258,  /* MediaInstructionPlaneID  */
  YYSYMBOL_ScatterInstruction = 259,       /* ScatterInstruction  */
  YYSYMBOL_ScatterTypedInstruction = 260,  /* ScatterTypedInstruction  */
  YYSYMBOL_Scatter4ScaledInstruction = 261, /* Scatter4ScaledInstruction  */
  YYSYMBOL_ScatterScaledInstruction = 262, /* ScatterScaledInstruction  */
  YYSYMBOL_SynchronizationInstruction = 263, /* SynchronizationInstruction  */
  YYSYMBOL_DwordAtomicInstruction = 264,   /* DwordAtomicInstruction  */
  YYSYMBOL_TypedAtomicInstruction = 265,   /* TypedAtomicInstruction  */
  YYSYMBOL_Atomic16Opt = 266,              /* Atomic16Opt  */
  YYSYMBOL_SampleUnormInstruction = 267,   /* SampleUnormInstruction  */
  YYSYMBOL_SampleInstruction = 268,        /* SampleInstruction  */
  YYSYMBOL_SamplerAddrOperand = 269,       /* SamplerAddrOperand  */
  YYSYMBOL_Sample3dInstruction = 270,      /* Sample3dInstruction  */
  YYSYMBOL_CPSEnableOpt = 271,             /* CPSEnableOpt  */
  YYSYMBOL_NonUniformSamplerEnableOpt = 272, /* NonUniformSamplerEnableOpt  */
  YYSYMBOL_Load3dInstruction = 273,        /* Load3dInstruction  */
  YYSYMBOL_Gather43dInstruction = 274,     /* Gather43dInstruction  */
  YYSYMBOL_PixelNullMaskEnableOpt = 275,   /* PixelNullMaskEnableOpt  */
  YYSYMBOL_ResInfo3dInstruction = 276,     /* ResInfo3dInstruction  */
  YYSYMBOL_SampleInfo3dInstruction = 277,  /* SampleInfo3dInstruction  */
  YYSYMBOL_RTWriteOperands = 278,          /* RTWriteOperands  */
  YYSYMBOL_RTWriteInstruction = 279,       /* RTWriteInstruction  */
  YYSYMBOL_RTWriteModeOpt = 280,           /* RTWriteModeOpt  */
  YYSYMBOL_URBWriteInstruction = 281,      /* URBWriteInstruction  */
  YYSYMBOL_AVSInstruction = 282,           /* AVSInstruction  */
  YYSYMBOL_VMEInstruction = 283,           /* VMEInstruction  */
  YYSYMBOL_OwordInstruction = 284,         /* OwordInstruction  */
  YYSYMBOL_SvmInstruction = 285,           /* SvmInstruction  */
  YYSYMBOL_AtomicBitwidthOpt = 286,        /* AtomicBitwidthOpt  */
  YYSYMBOL_LscInstruction = 287,           /* LscInstruction  */
  YYSYMBOL_LscUntypedLoad = 288,           /* LscUntypedLoad  */
  YYSYMBOL_LscUntypedStridedLoad = 289,    /* LscUntypedStridedLoad  */
  YYSYMBOL_LscUntypedBlock2dLoad = 290,    /* LscUntypedBlock2dLoad  */
  YYSYMBOL_LscUntypedStore = 291,          /* LscUntypedStore  */
  YYSYMBOL_LscUntypedStridedStore = 292,   /* LscUntypedStridedStore  */
  YYSYMBOL_LscUntypedBlock2dStore = 293,   /* LscUntypedBlock2dStore  */
  YYSYMBOL_LscUntypedAtomic = 294,         /* LscUntypedAtomic  */
  YYSYMBOL_LscTypedLoad = 295,             /* LscTypedLoad  */
  YYSYMBOL_LscTypedStore = 296,            /* LscTypedStore  */
  YYSYMBOL_LscTypedAtomic = 297,           /* LscTypedAtomic  */
  YYSYMBOL_LscTypedReadStateInfo = 298,    /* LscTypedReadStateInfo  */
  YYSYMBOL_LscFence = 299,                 /* LscFence  */
  YYSYMBOL_LscSfid = 300,                  /* LscSfid  */
  YYSYMBOL_LscCacheOpts = 301,             /* LscCacheOpts  */
  YYSYMBOL_LscUntypedAddrOperand = 302,    /* LscUntypedAddrOperand  */
  YYSYMBOL_LscUntypedStridedAddrOperand = 303, /* LscUntypedStridedAddrOperand  */
  YYSYMBOL_LscUntypedBlock2dAddrOperand = 304, /* LscUntypedBlock2dAddrOperand  */
  YYSYMBOL_LscTypedAddrWithOffsetOperand = 305, /* LscTypedAddrWithOffsetOperand  */
  YYSYMBOL_LscTypedAddrWithOffsetOperandList = 306, /* LscTypedAddrWithOffsetOperandList  */
  YYSYMBOL_LscTypedAddrOperandWithOffsets = 307, /* LscTypedAddrOperandWithOffsets  */
  YYSYMBOL_LscAddrImmOffsetOpt = 308,      /* LscAddrImmOffsetOpt  */
  YYSYMBOL_LscAddrImmScaleOpt = 309,       /* LscAddrImmScaleOpt  */
  YYSYMBOL_LscAddrModelOpt = 310,          /* LscAddrModelOpt  */
  YYSYMBOL_LscAddrModelStateful = 311,     /* LscAddrModelStateful  */
  YYSYMBOL_LscVectorOpRegOrImm32 = 312,    /* LscVectorOpRegOrImm32  */
  YYSYMBOL_LscVectorOpImm32 = 313,         /* LscVectorOpImm32  */
  YYSYMBOL_LscVectorOpReg = 314,           /* LscVectorOpReg  */
  YYSYMBOL_LscDataOperand = 315,           /* LscDataOperand  */
  YYSYMBOL_LscDataOperand2D = 316,         /* LscDataOperand2D  */
  YYSYMBOL_LscPayloadReg = 317,            /* LscPayloadReg  */
  YYSYMBOL_LscPayloadNonNullReg = 318,     /* LscPayloadNonNullReg  */
  YYSYMBOL_LscInstructionXe2 = 319,        /* LscInstructionXe2  */
  YYSYMBOL_LscTypedBlock2dLoad = 320,      /* LscTypedBlock2dLoad  */
  YYSYMBOL_LscTypedBlock2dStore = 321,     /* LscTypedBlock2dStore  */
  YYSYMBOL_LscTypedBlock2dAddrOperand = 322, /* LscTypedBlock2dAddrOperand  */
  YYSYMBOL_LscDataOperandTyped2D = 323,    /* LscDataOperandTyped2D  */
  YYSYMBOL_LscUntypedApndCtrAtomic = 324,  /* LscUntypedApndCtrAtomic  */
  YYSYMBOL_SwitchLabels = 325,             /* SwitchLabels  */
  YYSYMBOL_BranchInstruction = 326,        /* BranchInstruction  */
  YYSYMBOL_FILE = 327,                     /* FILE  */
  YYSYMBOL_LOC = 328,                      /* LOC  */
  YYSYMBOL_RawSendInstruction = 329,       /* RawSendInstruction  */
  YYSYMBOL_LifetimeStartInst = 330,        /* LifetimeStartInst  */
  YYSYMBOL_LifetimeEndInst = 331,          /* LifetimeEndInst  */
  YYSYMBOL_RawSendsInstruction = 332,      /* RawSendsInstruction  */
  YYSYMBOL_NullaryInstruction = 333,       /* NullaryInstruction  */
  YYSYMBOL_OwordModifier = 334,            /* OwordModifier  */
  YYSYMBOL_Predicate = 335,                /* Predicate  */
  YYSYMBOL_PredSign = 336,                 /* PredSign  */
  YYSYMBOL_PredCtrlOpt = 337,              /* PredCtrlOpt  */
  YYSYMBOL_SatModOpt = 338,                /* SatModOpt  */
  YYSYMBOL_SrcModifier = 339,              /* SrcModifier  */
  YYSYMBOL_ConditionalModifier = 340,      /* ConditionalModifier  */
  YYSYMBOL_VecDstOperand_A = 341,          /* VecDstOperand_A  */
  YYSYMBOL_VecDstOperand_G = 342,          /* VecDstOperand_G  */
  YYSYMBOL_VecDstOperand_G_I = 343,        /* VecDstOperand_G_I  */
  YYSYMBOL_VecSrcOperand_G_I_IMM_A_AO = 344, /* VecSrcOperand_G_I_IMM_A_AO  */
  YYSYMBOL_VecSrcOperand_G_I_IMM_A = 345,  /* VecSrcOperand_G_I_IMM_A  */
  YYSYMBOL_VecSrcOperand_G_I_IMM = 346,    /* VecSrcOperand_G_I_IMM  */
  YYSYMBOL_VecSrcOperand_G_IMM = 347,      /* VecSrcOperand_G_IMM  */
  YYSYMBOL_VecSrcOperand_G_IMM_AO = 348,   /* VecSrcOperand_G_IMM_AO  */
  YYSYMBOL_VecSrcOperand_G_A = 349,        /* VecSrcOperand_G_A  */
  YYSYMBOL_VecSrcOperand_G_A_AO = 350,     /* VecSrcOperand_G_A_AO  */
  YYSYMBOL_VecSrcOperand_G = 351,          /* VecSrcOperand_G  */
  YYSYMBOL_VecSrcOpndSimple = 352,         /* VecSrcOpndSimple  */
  YYSYMBOL_VMEOpndIME = 353,               /* VMEOpndIME  */
  YYSYMBOL_VMEOpndFBR = 354,               /* VMEOpndFBR  */
  YYSYMBOL_SrcStateOperand = 355,          /* SrcStateOperand  */
  YYSYMBOL_DstStateOperand = 356,          /* DstStateOperand  */
  YYSYMBOL_RawOperand = 357,               /* RawOperand  */
  YYSYMBOL_RawOperandNonNull = 358,        /* RawOperandNonNull  */
  YYSYMBOL_RawOperandOffsetSuffix = 359,   /* RawOperandOffsetSuffix  */
  YYSYMBOL_RawOperandArray = 360,          /* RawOperandArray  */
  YYSYMBOL_DstAddrOperand = 361,           /* DstAddrOperand  */
  YYSYMBOL_DstGeneralOperand = 362,        /* DstGeneralOperand  */
  YYSYMBOL_DstIndirectOperand = 363,       /* DstIndirectOperand  */
  YYSYMBOL_SrcAddrOfOperand = 364,         /* SrcAddrOfOperand  */
  YYSYMBOL_AddrOfVar = 365,                /* AddrOfVar  */
  YYSYMBOL_SrcAddrOperand = 366,           /* SrcAddrOperand  */
  YYSYMBOL_SrcGeneralOperand = 367,        /* SrcGeneralOperand  */
  YYSYMBOL_SrcImmOperand = 368,            /* SrcImmOperand  */
  YYSYMBOL_FloatLit = 369,                 /* FloatLit  */
  YYSYMBOL_DoubleFloatLit = 370,           /* DoubleFloatLit  */
  YYSYMBOL_SrcIndirectOperand = 371,       /* SrcIndirectOperand  */
  YYSYMBOL_DstRegion = 372,                /* DstRegion  */
  YYSYMBOL_SrcRegionDirect = 373,          /* SrcRegionDirect  */
  YYSYMBOL_SrcRegionIndirect = 374,        /* SrcRegionIndirect  */
  YYSYMBOL_IndirectVarAccess = 375,        /* IndirectVarAccess  */
  YYSYMBOL_TwoDimOffset = 376,             /* TwoDimOffset  */
  YYSYMBOL_PredVar = 377,                  /* PredVar  */
  YYSYMBOL_AddrVarAccess = 378,            /* AddrVarAccess  */
  YYSYMBOL_AddrVarAccessWithWidth = 379,   /* AddrVarAccessWithWidth  */
  YYSYMBOL_SIMDMode = 380,                 /* SIMDMode  */
  YYSYMBOL_ElemNum = 381,                  /* ElemNum  */
  YYSYMBOL_ExecSize = 382,                 /* ExecSize  */
  YYSYMBOL_ExecSizeInt = 383,              /* ExecSizeInt  */
  YYSYMBOL_Var = 384,                      /* Var  */
  YYSYMBOL_VarNonNull = 385,               /* VarNonNull  */
  YYSYMBOL_IntExp = 386,                   /* IntExp  */
  YYSYMBOL_IntExpCond = 387,               /* IntExpCond  */
  YYSYMBOL_IntExpAND = 388,                /* IntExpAND  */
  YYSYMBOL_IntExpXOR = 389,                /* IntExpXOR  */
  YYSYMBOL_IntExpOR = 390,                 /* IntExpOR  */
  YYSYMBOL_IntExpCmp = 391,                /* IntExpCmp  */
  YYSYMBOL_IntExpRel = 392,                /* IntExpRel  */
  YYSYMBOL_IntExpNRA = 393,                /* IntExpNRA  */
  YYSYMBOL_IntExpShift = 394,              /* IntExpShift  */
  YYSYMBOL_IntExpAdd = 395,                /* IntExpAdd  */
  YYSYMBOL_IntExpMul = 396,                /* IntExpMul  */
  YYSYMBOL_IntExpUnr = 397,                /* IntExpUnr  */
  YYSYMBOL_IntExpPrim = 398,               /* IntExpPrim  */
  YYSYMBOL_DataType = 399,                 /* DataType  */
  YYSYMBOL_DataTypeIntOrVector = 400       /* DataTypeIntOrVector  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3188

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  200
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  201
/* YYNRULES -- Number of rules.  */
#define YYNRULES  456
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1172

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   454


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   668,   668,   673,   675,   675,   677,   677,   678,   678,
     681,   682,   683,   684,   685,   686,   687,   688,   689,   690,
     695,   696,   697,   701,   705,   708,   708,   715,   723,   731,
     738,   739,   740,   741,   742,   743,   745,   752,   760,   768,
     775,   779,   779,   782,   790,   795,   807,   814,   822,   822,
     823,   829,   833,   837,   841,   846,   852,   852,   854,   858,
     864,   872,   878,   883,   888,   894,   898,   902,   908,   913,
     919,   923,   933,   934,   935,   936,   937,   938,   939,   940,
     941,   942,   943,   944,   945,   946,   947,   948,   949,   950,
     951,   952,   953,   954,   955,   956,   957,   958,   959,   960,
     961,   962,   963,   964,   965,   966,   967,   968,   969,   970,
     971,   972,   973,   974,   975,   976,   977,   978,   979,   980,
     981,   982,   983,   984,   986,   990,   996,  1001,  1007,  1014,
    1020,  1027,  1034,  1041,  1048,  1060,  1067,  1076,  1086,  1092,
    1099,  1105,  1114,  1124,  1131,  1138,  1146,  1155,  1162,  1169,
    1175,  1181,  1187,  1193,  1211,  1218,  1228,  1236,  1243,  1250,
    1259,  1268,  1277,  1285,  1288,  1291,  1294,  1297,  1302,  1309,
    1317,  1318,  1324,  1337,  1345,  1352,  1357,  1362,  1379,  1379,
    1381,  1381,  1384,  1401,  1419,  1419,  1422,  1430,  1438,  1441,
    1445,  1451,  1464,  1464,  1468,  1476,  1488,  1504,  1510,  1523,
    1531,  1538,  1546,  1552,  1558,  1564,  1570,  1577,  1578,  1587,
    1588,  1589,  1591,  1592,  1593,  1595,  1598,  1599,  1600,  1601,
    1603,  1630,  1662,  1692,  1720,  1746,  1774,  1803,  1837,  1881,
    1926,  1962,  2001,  2006,  2006,  2009,  2010,  2014,  2023,  2029,
    2038,  2058,  2078,  2085,  2089,  2092,  2097,  2100,  2105,  2111,
    2119,  2132,  2133,  2134,  2139,  2140,  2143,  2144,  2145,  2146,
    2150,  2153,  2156,  2159,  2162,  2165,  2170,  2170,  2174,  2184,
    2192,  2200,  2214,  2218,  2224,  2229,  2232,  2236,  2239,  2245,
    2247,  2248,  2260,  2289,  2311,  2323,  2334,  2343,  2365,  2368,
    2371,  2378,  2382,  2386,  2390,  2396,  2401,  2408,  2415,  2420,
    2425,  2431,  2438,  2445,  2451,  2457,  2465,  2473,  2481,  2491,
    2496,  2501,  2506,  2511,  2516,  2521,  2526,  2531,  2531,  2537,
    2542,  2547,  2547,  2549,  2549,  2552,  2552,  2555,  2556,  2557,
    2558,  2560,  2560,  2565,  2566,  2568,  2569,  2573,  2574,  2577,
    2578,  2581,  2582,  2583,  2586,  2587,  2590,  2591,  2592,  2595,
    2596,  2599,  2600,  2602,  2604,  2614,  2621,  2629,  2637,  2656,
    2668,  2675,  2687,  2692,  2699,  2704,  2712,  2720,  2726,  2731,
    2753,  2757,  2763,  2773,  2781,  2788,  2798,  2804,  2811,  2815,
    2820,  2824,  2830,  2831,  2838,  2846,  2847,  2853,  2863,  2871,
    2880,  2898,  2912,  2915,  2926,  2937,  2942,  2947,  2955,  2964,
    2976,  2990,  2992,  3003,  3015,  3021,  3029,  3038,  3038,  3039,
    3039,  3042,  3044,  3045,  3047,  3048,  3050,  3051,  3053,  3054,
    3056,  3057,  3058,  3060,  3061,  3062,  3063,  3064,  3083,  3086,
    3087,  3088,  3089,  3091,  3092,  3093,  3095,  3096,  3101,  3106,
    3108,  3109,  3110,  3111,  3115,  3116,  3118,  3122,  3126,  3132,
    3141,  3142,  3143,  3144,  3145,  3147,  3148
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "ALIGN_KEYWORD",
  "ATOMIC_SUB_OP", "DIRECTIVE_DECL", "DIRECTIVE_FUNC",
  "DIRECTIVE_FUNCDECL", "DIRECTIVE_GLOBAL_FUNC", "DIRECTIVE_IMPLICIT",
  "DIRECTIVE_INPUT", "DIRECTIVE_KERNEL", "DIRECTIVE_KERNEL_ATTR",
  "DIRECTIVE_VERSION", "ALIAS_EQ", "ALIGN_EQ", "ATTR_EQ", "OFFSET_EQ",
  "NUM_ELTS_EQ", "V_NAME_EQ", "SIZE_EQ", "V_TYPE_EQ_G", "V_TYPE_EQ_P",
  "V_TYPE_EQ_A", "V_TYPE_EQ_S", "V_TYPE_EQ_T", "CPS",
  "NON_UNIFORM_SAMPLER", "PIXEL_NULL_MASK", "RAW_SEND_STRING",
  "RAW_SENDC_STRING", "RAW_SENDS_STRING", "RAW_SENDS_EOT_STRING",
  "RAW_SENDSC_STRING", "RAW_SENDSC_EOT_STRING", "SAT", "SRCMOD_ABS",
  "SRCMOD_NEG", "SRCMOD_NEGABS", "SRCMOD_NOT", "BFN_OP", "DPAS_OP",
  "SVM_ALIGNED", "SVM_UNALIGNED", "NBARRIER_SIGNAL", "NBARRIER_WAIT",
  "ITYPE", "DECL_DATA_TYPE", "DFTYPE", "FTYPE", "HFTYPE", "BFTYPE",
  "VTYPE", "COND_MOD", "LANGLE", "RANGLE", "LBRACK", "RBRACK",
  "IND_LBRACK", "LPAREN", "RPAREN", "LBRACE", "RBRACE", "DOT", "COMMA",
  "SEMI", "COLON", "SLASH", "PERCENT", "EQUALS", "PLUS", "MINUS", "TIMES",
  "AMP", "CIRC", "PIPE", "TILDE", "BANG", "QUESTION", "LEQ", "GEQ", "EQ",
  "NEQ", "SHL", "SHRS", "SHRZ", "LABEL", "IDENT", "BUILTIN_NULL",
  "BUILTIN", "STRING_LIT", "NEWLINE", "UNIFORM", "RTWRITE_OPTION",
  "MEDIA_MODE", "OWORD_MODIFIER", "SAMPLER_CHANNEL", "CHANNEL_OUTPUT",
  "EXECMODE", "CNTRL", "FENCE_OPTIONS", "ADDR_ADD_OP", "UNARY_LOGIC_OP",
  "BINARY_LOGIC_OP", "TERNARY_LOGIC_OP", "QUATERNARY_LOGIC_OP", "SEL_OP",
  "MIN_OP", "MAX_OP", "ANTI_TRIG_OP", "MATH2_OP", "MATH3_OP", "ARITH2_OP",
  "ARITH3_OP", "ARITH4_OP", "ARITH4_OP2", "CMP_OP", "SVM_OP",
  "SVM_SCATTER_OP", "SVM_GATHER4SCALED_OP", "SVM_SCATTER4SCALED_OP",
  "SVM_ATOMIC_OP", "OWORD_OP", "MEDIA_OP", "SCATTER_OP",
  "SCATTER_TYPED_OP", "SCATTER_SCALED_OP", "SCATTER4_SCALED_OP",
  "BARRIER_OP", "SBARRIER_SIGNAL", "SBARRIER_WAIT", "DWORD_ATOMIC_OP",
  "TYPED_ATOMIC_OP", "SAMPLE_OP", "SAMPLE_UNORM_OP", "VME_IME_OP",
  "VME_SIC_OP", "VME_FBR_OP", "BRANCH_OP", "RET_OP", "IFCALL", "FCALL",
  "FADDR", "SWITCHJMP_OP", "MOVS_OP", "SETP_OP", "MOV_OP", "FILE_OP",
  "LOC_OP", "CACHE_FLUSH_OP", "WAIT_OP", "FENCE_GLOBAL_OP",
  "FENCE_LOCAL_OP", "FENCE_SW_OP", "YIELD_OP", "SAMPLE_3D_OP",
  "LOAD_3D_OP", "SAMPLE4_3D_OP", "RESINFO_OP_3D", "SAMPLEINFO_OP_3D",
  "RTWRITE_OP_3D", "URBWRITE_OP_3D", "LIFETIME_START_OP",
  "LIFETIME_END_OP", "AVS_OP", "BREAKPOINT_OP", "CALL_OP", "PRED_CNTL",
  "F32_LIT", "F64_LIT", "DEC_LIT", "HEX_LIT", "BUILTIN_SIZEOF",
  "BUILTIN_DISPATCH_SIMD_SIZE", "QW_SCATTER_OP", "LSC_CACHING_OPT",
  "LSC_ADDR_SIZE_TK", "LSC_DATA_SHAPE_TK", "LSC_DATA_SHAPE_TK_CHMASK",
  "LSC_DATA_SHAPE_TK_BLOCK2D", "LSC_AM_FLAT", "LSC_AM_BTI", "LSC_AM_BSS",
  "LSC_AM_SS", "LSC_AM_ARG", "LSC_FENCE_OP_TYPE", "LSC_FENCE_SCOPE",
  "LSC_SFID_UNTYPED_TOKEN", "LSC_SFID_TYPED_TOKEN", "LSC_LOAD_MNEMONIC",
  "LSC_LOAD_STRIDED_MNEMONIC", "LSC_LOAD_BLOCK2D_MNEMONIC",
  "LSC_STORE_MNEMONIC", "LSC_STORE_STRIDED_MNEMONIC",
  "LSC_STORE_BLOCK2D_MNEMONIC", "LSC_ATOMIC_MNEMONIC",
  "LSC_READ_STATE_INFO_MNEMONIC", "LSC_FENCE_MNEMONIC", "FCVT_OP",
  "LSC_DATA_SHAPE_TK_TYPED_BLOCK2D", "$accept", "Listing", "ListingHeader",
  "Statements", "Newlines", "NewlinesOpt", "Statement", "Scope",
  "ScopeStart", "ScopeEnd", "IdentOrStringLit", "DirectiveKernel",
  "DirectiveGlobalFunction", "DirectiveVersion", "DirectiveDecl",
  "DeclFunction", "DeclVariable", "DeclAddress", "DeclPredicate",
  "DeclSampler", "VNameEqOpt", "DeclSurface", "DirectiveInput",
  "DirectiveImplicitInput", "InputOffset", "InputSize", "DirectiveAttr",
  "DirectiveFunc", "AlignAttrOpt", "Align", "AliasAttrOpt", "OneAttr",
  "AttrOpt", "GenAttrOpt", "Instruction", "Label", "LogicInstruction",
  "UnaryLogicInstruction", "MathInstruction_2OPND",
  "MathInstruction_3OPND", "ArithInstruction_2OPND",
  "ArithInstruction_3OPND", "ArithInstruction_4OPND", "DpasInstruction",
  "BfnInstruction", "QwScatterInstruction", "FCvtInstruction",
  "AntiTrigInstruction", "AddrAddInstruction", "SetpInstruction",
  "SelInstruction", "MinInstruction", "MaxInstruction", "MovInstruction",
  "BreakpointInstruction", "MovsInstruction", "CmpInstruction",
  "MediaInstruction", "MediaInstructionPlaneID", "ScatterInstruction",
  "ScatterTypedInstruction", "Scatter4ScaledInstruction",
  "ScatterScaledInstruction", "SynchronizationInstruction",
  "DwordAtomicInstruction", "TypedAtomicInstruction", "Atomic16Opt",
  "SampleUnormInstruction", "SampleInstruction", "SamplerAddrOperand",
  "Sample3dInstruction", "CPSEnableOpt", "NonUniformSamplerEnableOpt",
  "Load3dInstruction", "Gather43dInstruction", "PixelNullMaskEnableOpt",
  "ResInfo3dInstruction", "SampleInfo3dInstruction", "RTWriteOperands",
  "RTWriteInstruction", "RTWriteModeOpt", "URBWriteInstruction",
  "AVSInstruction", "VMEInstruction", "OwordInstruction", "SvmInstruction",
  "AtomicBitwidthOpt", "LscInstruction", "LscUntypedLoad",
  "LscUntypedStridedLoad", "LscUntypedBlock2dLoad", "LscUntypedStore",
  "LscUntypedStridedStore", "LscUntypedBlock2dStore", "LscUntypedAtomic",
  "LscTypedLoad", "LscTypedStore", "LscTypedAtomic",
  "LscTypedReadStateInfo", "LscFence", "LscSfid", "LscCacheOpts",
  "LscUntypedAddrOperand", "LscUntypedStridedAddrOperand",
  "LscUntypedBlock2dAddrOperand", "LscTypedAddrWithOffsetOperand",
  "LscTypedAddrWithOffsetOperandList", "LscTypedAddrOperandWithOffsets",
  "LscAddrImmOffsetOpt", "LscAddrImmScaleOpt", "LscAddrModelOpt",
  "LscAddrModelStateful", "LscVectorOpRegOrImm32", "LscVectorOpImm32",
  "LscVectorOpReg", "LscDataOperand", "LscDataOperand2D", "LscPayloadReg",
  "LscPayloadNonNullReg", "LscInstructionXe2", "LscTypedBlock2dLoad",
  "LscTypedBlock2dStore", "LscTypedBlock2dAddrOperand",
  "LscDataOperandTyped2D", "LscUntypedApndCtrAtomic", "SwitchLabels",
  "BranchInstruction", "FILE", "LOC", "RawSendInstruction",
  "LifetimeStartInst", "LifetimeEndInst", "RawSendsInstruction",
  "NullaryInstruction", "OwordModifier", "Predicate", "PredSign",
  "PredCtrlOpt", "SatModOpt", "SrcModifier", "ConditionalModifier",
  "VecDstOperand_A", "VecDstOperand_G", "VecDstOperand_G_I",
  "VecSrcOperand_G_I_IMM_A_AO", "VecSrcOperand_G_I_IMM_A",
  "VecSrcOperand_G_I_IMM", "VecSrcOperand_G_IMM", "VecSrcOperand_G_IMM_AO",
  "VecSrcOperand_G_A", "VecSrcOperand_G_A_AO", "VecSrcOperand_G",
  "VecSrcOpndSimple", "VMEOpndIME", "VMEOpndFBR", "SrcStateOperand",
  "DstStateOperand", "RawOperand", "RawOperandNonNull",
  "RawOperandOffsetSuffix", "RawOperandArray", "DstAddrOperand",
  "DstGeneralOperand", "DstIndirectOperand", "SrcAddrOfOperand",
  "AddrOfVar", "SrcAddrOperand", "SrcGeneralOperand", "SrcImmOperand",
  "FloatLit", "DoubleFloatLit", "SrcIndirectOperand", "DstRegion",
  "SrcRegionDirect", "SrcRegionIndirect", "IndirectVarAccess",
  "TwoDimOffset", "PredVar", "AddrVarAccess", "AddrVarAccessWithWidth",
  "SIMDMode", "ElemNum", "ExecSize", "ExecSizeInt", "Var", "VarNonNull",
  "IntExp", "IntExpCond", "IntExpAND", "IntExpXOR", "IntExpOR",
  "IntExpCmp", "IntExpRel", "IntExpNRA", "IntExpShift", "IntExpAdd",
  "IntExpMul", "IntExpUnr", "IntExpPrim", "DataType",
  "DataTypeIntOrVector", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-1045)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-445)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      17, -1045,    69,    29,   140, -1045, -1045,    -7,    17, -1045,
     109,  2776,    27,    88,   101,   124,   101,   132,   137,   101,
     169,   205,   580,   580,   193, -1045, -1045,   205,   231,    67,
     200,   221,   239, -1045, -1045, -1045,   203,   230,   245,   219,
     260,   101,   205,   205,   205,   261,   165, -1045,  1299,   259,
     298, -1045, -1045,   282,   320,   331,   342,   374, -1045,  -112,
     459,    17, -1045, -1045,  2990, -1045, -1045, -1045, -1045, -1045,
   -1045, -1045, -1045, -1045, -1045, -1045, -1045, -1045, -1045, -1045,
   -1045, -1045, -1045, -1045, -1045, -1045, -1045, -1045, -1045, -1045,
   -1045, -1045, -1045, -1045, -1045, -1045, -1045, -1045, -1045, -1045,
   -1045, -1045, -1045, -1045, -1045, -1045, -1045, -1045, -1045, -1045,
   -1045, -1045, -1045, -1045, -1045, -1045, -1045, -1045, -1045, -1045,
   -1045, -1045, -1045, -1045, -1045, -1045, -1045, -1045, -1045, -1045,
   -1045, -1045, -1045, -1045, -1045, -1045, -1045, -1045, -1045, -1045,
   -1045, -1045, -1045, -1045, -1045, -1045, -1045,  1045, -1045,   372,
   -1045, -1045, -1045, -1045, -1045,   478,   478, -1045,   427,   -49,
     236, -1045, -1045, -1045, -1045,   219,   281,    74,   281,   281,
   -1045, -1045, -1045, -1045, -1045,   192,   300,     5, -1045,    15,
     580, -1045, -1045, -1045, -1045, -1045, -1045,   446,   443, -1045,
      13, -1045, -1045, -1045,   219,   219, -1045,   205,   205,   205,
     580, -1045,   205,   443,   335,   205,   450,   413,   341,   219,
     236,   580,   219,    15,   580,   219,   219, -1045, -1045,   219,
   -1045, -1045, -1045, -1045, -1045,   205,   205, -1045, -1045,   219,
   -1045, -1045,   328, -1045,   205,  1835, -1045, -1045,  2575,   205,
     205,   239,   239,   239,   239,   459,   459,   459,   459,   459,
     459,   459,   459,   459,   459,   459,   459,   459,   459,   205,
     451,   419,   420,   514,   423,   457,   425,   518,   519,   205,
     205,    -1,   205,   459,   497,   497,   497,   433,   205,   205,
     464,    94,   349,   123,   150,   351,   185,   240,   340,   482,
     525,   526,   528,   529,   281,   102,   532,    11, -1045,   488,
     485,   490,   236, -1045,   491,    14,   498,   281, -1045, -1045,
     496, -1045,    58,   489,   494, -1045,   354,    26, -1045,   195,
      80, -1045,   401, -1045, -1045, -1045, -1045, -1045, -1045, -1045,
   -1045, -1045, -1045,   477, -1045,   446,   443, -1045,   281, -1045,
     293,   281,   512, -1045, -1045, -1045,   403, -1045,   344, -1045,
   -1045,   517,    15,   580,   580,   236,   219,   219, -1045,   200,
     407,   219,   219,   509,   236,   236,   515,   236, -1045, -1045,
   -1045,   527,    85,   521,   219,   580, -1045,   105,   580,     8,
       8,   219,   396,   219, -1045, -1045,    17, -1045,   412,   415,
     239,   239,   239,   239,   205,   205,   205,   205,   205,   205,
     205,   205,   205,   205,   205,   205,   205,   205,    15,   414,
     205,   205,   524,   205,   418,   205,   531,   531,   101, -1045,
     205,   580,   503,   205, -1045,   565,   501,   502, -1045,   205,
     431,   101,   434,   428,   428,   428,   428,   428,   428,   428,
     428,   428,   428,   428,   428,   278,   587,   281,   281,   281,
     281, -1045,   547,   281,   594, -1045, -1045, -1045, -1045, -1045,
     441,   442,   236,   -24, -1045, -1045,   281,   281, -1045,   281,
     281,   281,   281,   281,   281,   281,   281,   281,   281,   281,
     281,   281,   281,   281,   281,   281,   281,   553,   293,   512,
     391,    35, -1045, -1045, -1045, -1045, -1045, -1045,   551,   281,
   -1045, -1045,   560,   219, -1045,  1236, -1045, -1045,   566, -1045,
   -1045,   562,   281,   580,   580,    85,   236,   236, -1045,   580,
    1290,   219,   563,   278,   219,   454,   236,   236,   580,   236,
     281,   293, -1045,   527,    -3, -1045,   567, -1045, -1045,   568,
     281, -1045,   219,   236, -1045,   236,   580, -1045,  1299,   569,
     455,   458,   239,   239,   239,   239,    15,    15,    15,    15,
      15,    15,    15,    15,    15,    15,    15,    15,    15,    15,
      15,   570,   580,   580,   460,   205,   219,   205,   219,   462,
     205,   205, -1045,   580,   465,   466,    15, -1045,   602,   205,
     205,   219,   467, -1045,   205,   468,   205,   205,   205,   205,
     278,   205,   205,   205,   205,   208,   205,   205,   490,   208,
   -1045, -1045,   491,   281,   594,   594,   615,   615,   557, -1045,
   -1045,   585, -1045,   219,   281, -1045,   583,   586,   489,     6,
     494, -1045, -1045, -1045, -1045, -1045, -1045, -1045,    80,    80,
     387,   387,   387, -1045, -1045, -1045, -1045, -1045, -1045,   484,
     281,   281,   281,   590, -1045, -1045, -1045, -1045, -1045, -1045,
     281,   281,   592,   580,   580, -1045, -1045,   236,   202,   580,
     580,   580, -1045,   236,   236,   580,   598,   236, -1045,   595,
     236,   605, -1045, -1045,    -3,    -3,   601,   281,   281,    70,
     599,   236, -1045,   580, -1045, -1045,   492,   495,   239,   239,
     205,   205,   580,   580,   219,   580,   219,   580,   580,   580,
     580,   580,   580,   580,   580,   580,   580,   580,   580,   500,
     236,   236, -1045,   236,   236,   219,   580, -1045,   219,   219,
     504,   505,   506,  1227,  1227,   149, -1045,   576,   580,   580,
   -1045,   236,   219, -1045,   278,   278,   278,   278,   474,   208,
     242,   208,   242,   486,   618,   619,   620,   608,   278,   278,
     278,   626,   669, -1045, -1045,   610,   594,   594,   629, -1045,
     143, -1045, -1045,   443,   640, -1045, -1045,   281,   646,   638,
     643,   648,   156,   652, -1045, -1045, -1045,   580,   236,   236,
     236,   236,   580, -1045,   236,   580, -1045, -1045, -1045, -1045,
   -1045,   647,   189, -1045,    -5, -1045,   580,  1299,  1299,   205,
     205,  1299,  1299,   580, -1045, -1045,   580,   219,   580,   580,
     580,   580,   580, -1045, -1045,   580, -1045,   580,   580,   580,
     205,   236,   236,   236,   236,   580,   236,   236,   236,   538,
   -1045, -1045, -1045, -1045, -1045, -1045, -1045, -1045, -1045,   562,
     205,     8,     8,  1457,   236,   236,   242,   284,   208,   242,
     486,   530, -1045, -1045, -1045, -1045,   278,   654, -1045,   278,
     655, -1045,   278,   656,   657,   278,    40,    40,    40,    40,
   -1045,   242,   208,   172,   214,   700, -1045, -1045, -1045, -1045,
     198, -1045,   557, -1045, -1045, -1045, -1045,   281, -1045, -1045,
     281,   236, -1045,   236,   236,   236,   580,   236,   658, -1045,
     659,   580,   236,   236,  1299,  1299,  1299,  1299,   580, -1045,
   -1045,   580,   580, -1045, -1045, -1045, -1045, -1045,   580, -1045,
     236, -1045, -1045,   236,   236,   236,   236,   236,   236, -1045,
     580,   236,     8, -1045, -1045,   236,   236, -1045, -1045, -1045,
   -1045, -1045, -1045, -1045, -1045,    -5, -1045,   172, -1045,    -5,
     219, -1045,   223, -1045, -1045,   199, -1045,   229,   232,   651,
     393,   278,   278,   278,   663, -1045,   491, -1045, -1045, -1045,
   -1045,   667,   594, -1045, -1045, -1045,   668,   670, -1045, -1045,
   -1045,   236,   580,   236, -1045, -1045,   580,   236,   236,  1299,
    1299,   236,   236, -1045, -1045,   580, -1045,   236,   236,   236,
     236, -1045,   236,   236,     8,   236,   236,   236, -1045,   172,
     650,   660,   672,   395,   172,    49, -1045,   281,   281,   556,
   -1045,   281, -1045,   281,   281,   281,   281,   666,   278, -1045,
     278, -1045,    36, -1045, -1045, -1045, -1045,   236, -1045,   580,
   -1045, -1045,   236,   236,   236,   236, -1045, -1045, -1045,   236,
   -1045,   236,   236,     8, -1045,   236, -1045,   393, -1045,   172,
     555,   281,   281,   393,    40,   674,   675,   676, -1045,   678,
     679,   677,   387,    80,   219, -1045, -1045, -1045,   680, -1045,
     580,   236,   236,   236,   236, -1045, -1045,   236,   236,   236,
   -1045,   686,   681, -1045,    80,    80,    43,   682,   281, -1045,
     281, -1045, -1045, -1045,   393,   281,   628,   236,   236, -1045,
   -1045,   236,   236, -1045,   236,   571,   172,    40,    40,   692,
     697,   701,   707,   580, -1045, -1045,   236, -1045, -1045,   702,
     710,   704,   281, -1045, -1045, -1045,   671, -1045,   236,   172,
     603,    40,   714,   580, -1045, -1045,   713,   721,   236,    40,
   -1045, -1045,   717,   393,   281,   718,   726,   219, -1045,   393,
     728, -1045
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       8,     7,     0,     9,     0,     1,     6,     0,     8,     3,
       0,   319,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   321,    23,   124,     0,   331,     0,
     317,     0,     0,   163,   164,   165,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   309,     0,   312,
     314,   316,   311,     0,     0,     0,     0,     0,   150,     0,
     325,     8,     5,    19,     0,    11,    12,    10,    35,    30,
      31,    32,    33,    34,    14,    13,    16,    15,    17,    18,
      72,    74,    75,    76,    77,    78,    79,   117,   118,   119,
     121,    80,    81,   102,    99,   100,   101,    98,   123,    97,
      82,    83,    85,    86,    88,    87,    89,    91,    92,    94,
      93,   107,   108,   109,   110,   111,   112,   113,    96,    95,
      84,    73,   120,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   122,   280,   281,   279,    90,
     103,   104,   105,   114,   115,   106,   116,     0,    29,     0,
      25,    26,    55,    36,    28,    48,    48,    27,    53,     0,
       0,   328,   327,   329,   330,     0,     0,     0,     0,     0,
     409,   408,   410,   382,   385,   444,   445,     0,   449,     0,
       0,   341,   353,   343,   378,   380,   342,     0,     0,   407,
       0,   443,   167,   322,     0,     0,   332,     0,     0,     0,
       0,   318,     0,     0,     0,     0,   401,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   299,   300,     0,
     310,   344,   345,   313,   315,     0,     0,   303,   304,     0,
     233,   234,     0,   326,     0,   319,     2,    22,   319,     0,
       0,     0,     0,     0,     0,   325,   325,   325,   325,   325,
     325,   325,   325,   325,   325,   325,   325,   325,   325,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   325,   184,   184,   184,   192,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    70,    45,    54,   406,     0,
       0,     0,     0,   359,     0,     0,     0,     0,   444,   445,
       0,   411,   413,   415,   417,   419,   422,   427,   428,   432,
     435,   439,   445,   379,   381,   440,   441,   442,   386,   383,
     387,   384,   377,     0,   447,     0,     0,   166,     0,   392,
       0,     0,     0,   455,   456,   376,   323,   398,     0,   333,
     366,     0,     0,     0,     0,     0,     0,     0,   403,   317,
       0,     0,     0,     0,     0,     0,     0,     0,   298,   335,
     336,     0,     0,     0,     0,     0,   334,     0,     0,     0,
       0,     0,     0,     0,     4,    24,     8,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   207,     0,     0,     0,   170,   170,     0,   293,
       0,     0,     0,     0,   185,   178,     0,     0,   193,     0,
       0,     0,     0,   235,   235,   235,   235,   235,   235,   235,
     235,   235,   235,   235,   235,     0,     0,     0,     0,     0,
       0,    49,     0,     0,    70,    47,    44,    51,    52,   404,
       0,     0,     0,     0,   361,   396,     0,     0,   446,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   427,   451,   452,   453,   454,   388,   450,     0,     0,
     374,   324,     0,     0,   351,     0,   349,   352,   370,   350,
     373,     0,     0,     0,     0,   398,     0,     0,   202,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   368,     0,   288,   152,     0,   153,   151,     0,
       0,   143,     0,     0,   175,     0,     0,   232,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   291,     0,     0,     0,     0,   179,   180,     0,
       0,     0,     0,   292,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   408,     0,
     275,   276,   407,     0,    70,    70,    41,    41,     0,    50,
      46,     0,   360,     0,     0,   362,     0,     0,   414,     0,
     416,   418,   420,   421,   423,   424,   425,   426,   433,   434,
     429,   430,   431,   437,   438,   436,   448,   389,   375,     0,
       0,   394,     0,     0,   320,   372,   142,   346,   348,   347,
       0,     0,     0,     0,     0,   200,   201,     0,   158,     0,
       0,     0,   402,     0,     0,     0,     0,     0,   197,     0,
       0,     0,   369,   367,   288,   288,     0,     0,     0,     0,
       0,     0,   187,     0,   140,    21,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   208,     0,     0,     0,     0,   171,     0,     0,
       0,     0,     0,     0,     0,     0,   181,     0,     0,     0,
     188,     0,     0,   236,     0,     0,     0,     0,     0,     0,
     256,     0,   256,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    56,    39,    38,     0,    70,    70,    67,    69,
       0,   405,   137,     0,     0,   395,   399,     0,     0,     0,
       0,     0,     0,     0,   155,   154,   199,     0,     0,     0,
       0,     0,     0,   355,     0,     0,   198,   390,   289,   290,
     294,     0,     0,   358,     0,   186,     0,     0,     0,     0,
       0,     0,     0,     0,   129,   130,     0,     0,     0,     0,
       0,     0,     0,   141,   131,     0,   133,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     296,   295,   148,   337,   339,   338,   340,   147,   149,   398,
       0,     0,     0,   191,     0,     0,   256,     0,     0,   256,
       0,     0,   286,   282,   257,   258,     0,     0,   259,     0,
       0,   239,     0,     0,     0,     0,     0,     0,     0,     0,
     283,   256,     0,     0,     0,    62,    57,    42,    40,    43,
       0,    71,     0,   354,   363,   412,   393,     0,   397,   371,
       0,     0,   157,     0,     0,     0,     0,     0,     0,   357,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   125,
     126,     0,     0,   144,   145,   146,   132,   134,     0,   136,
       0,   205,   206,     0,     0,     0,     0,     0,     0,   297,
       0,     0,     0,   189,   190,     0,     0,   221,   272,   273,
     228,   222,   223,   274,   224,   254,   229,     0,   225,   254,
       0,   226,     0,   267,   266,   269,   268,     0,     0,     0,
     251,     0,   259,     0,     0,   277,   278,    61,    58,    59,
      60,     0,    70,    66,    65,    68,     0,     0,   156,   159,
     174,     0,     0,     0,   356,   176,     0,     0,     0,     0,
       0,     0,     0,   138,   127,     0,   135,     0,     0,     0,
       0,   161,     0,     0,     0,     0,     0,     0,   139,     0,
       0,   246,     0,   243,     0,     0,   264,     0,     0,     0,
     260,     0,   262,     0,     0,     0,     0,     0,     0,   287,
       0,   231,     0,    37,   391,   400,   173,     0,   196,     0,
     301,   302,     0,     0,     0,     0,   128,   203,   204,     0,
     162,     0,     0,     0,   364,     0,   194,   251,   255,     0,
       0,     0,     0,   251,     0,     0,     0,     0,   270,     0,
       0,     0,   252,   253,     0,   227,   230,    64,     0,   172,
       0,     0,     0,     0,     0,   160,   168,     0,     0,   182,
     364,     0,   247,   250,   244,   245,     0,     0,     0,   265,
       0,   261,   263,   284,   251,     0,     0,     0,     0,   307,
     308,     0,     0,   365,   183,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   305,   306,     0,   364,   237,   248,
       0,     0,     0,   271,   285,    63,     0,   169,   177,     0,
       0,     0,     0,     0,   249,   238,     0,     0,     0,     0,
     242,   195,     0,   251,     0,     0,     0,     0,   241,   251,
       0,   240
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1045, -1045, -1045,   548,   -50,     2,   552, -1045, -1045,   241,
       3, -1045, -1045, -1045, -1045, -1045, -1045, -1045, -1045, -1045,
     175, -1045, -1045, -1045,   633,   499, -1045, -1045, -1045, -1045,
   -1045,   -99, -1045,  -445, -1045, -1045, -1045, -1045, -1045, -1045,
   -1045, -1045, -1045, -1045, -1045, -1045, -1045, -1045, -1045, -1045,
   -1045, -1045, -1045, -1045, -1045, -1045, -1045, -1045, -1045, -1045,
   -1045, -1045, -1045, -1045, -1045, -1045,   384, -1045, -1045,  -364,
   -1045, -1045, -1045, -1045, -1045,   210, -1045, -1045, -1045, -1045,
   -1045, -1045, -1045, -1045, -1045, -1045, -1045, -1045, -1045, -1045,
   -1045, -1045, -1045, -1045, -1045, -1045, -1045, -1045, -1045, -1045,
   -1045,     4,  -701,   -57,   -56, -1014, -1045,  -796, -1031,  -151,
    -722,  -564,  -851,  -861,  -862,  -712,   -66,  -438,  -815, -1045,
   -1045, -1045,    61,    53, -1045,  -217, -1045, -1045, -1045, -1045,
   -1045, -1045, -1045, -1045,   453, -1045, -1045, -1045,   226,   -36,
   -1045,   228,   432,  -331,    82, -1045,   -22,  -540, -1045, -1045,
   -1045,    12, -1045, -1045, -1045,   447, -1045,  1225,  -863, -1045,
   -1044, -1045,  -190, -1045,  -319, -1045,   470, -1045,    37,   661,
     662, -1045,  -343,  -310,   507,  -156,  -201,  -203, -1045,  -171,
   -1045,  -191,  2066,   361,   380,   765,  -120,    50,   356,   362,
     359,   360,    16,  -335, -1045,  -477,  -465,  1918,  -761,  -457,
     644
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     8,    61,     3,     4,    62,    63,    64,   387,
     152,    65,    66,     9,    67,    68,    69,    70,    71,    72,
     766,    73,    74,    75,   295,   454,    76,    77,   885,   886,
     982,   769,   770,   455,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   669,   102,
     103,   104,   105,   106,   107,   108,   580,   109,   110,   543,
     111,   588,   737,   112,   113,   425,   114,   115,   853,   116,
     429,   117,   118,   119,   120,   121,   575,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     232,   596,   871,   872,   875,  1021,  1022,   869,  1037,  1019,
     867,   868,   962,   963,   964,   856,   860,   857,  1023,   135,
     136,   137,   758,   749,   138,   686,   139,   140,   141,   142,
     143,   144,   145,   146,   202,   147,   194,   502,   234,   179,
     197,   348,   374,   368,   842,   843,   844,   220,   656,   504,
     505,   181,   772,   209,   212,   535,   375,   610,   303,   464,
    1099,   349,   369,   370,   845,   508,   846,   182,   183,   184,
     185,   186,   532,   339,   340,   187,   342,   346,   305,   510,
     361,   205,   160,   299,   188,   189,   966,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   190,   191,   496,
     497
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     180,   192,   357,   491,   640,   641,   642,   609,   694,   620,
      11,   235,   219,   378,   638,   639,   545,   970,   969,   154,
     975,   513,   157,   335,   350,   376,   967,   968,   531,   507,
     873,   647,   500,   858,   859,   624,  1101,  1087,   170,   171,
     172,   757,  1106,   910,   213,   761,   310,   881,   882,   866,
     390,   391,   392,   393,   166,  1102,  1124,   371,   159,   343,
     221,   684,   950,   236,   333,   344,   238,   542,   974,     5,
     166,   465,   777,   165,   682,   230,   231,   570,   466,   469,
     475,   476,   307,  1131,   685,   222,   973,   168,   169,   475,
     651,   420,   334,  1148,   975,   170,   171,   172,  1025,   166,
    1125,   457,   170,   171,   172,   477,   478,  1127,     1,   198,
     199,   307,  1139,  1074,   477,   478,   168,   169,   452,  1075,
       6,   298,   453,   170,   171,   172,   159,   170,   171,   172,
     803,   469,  1165,   166,   652,   489,   470,   873,  1170,   530,
     634,   635,   636,   637,   341,   307,   625,   484,   485,   514,
     168,   169,   486,     7,   954,   947,   975,   956,   337,   530,
     958,   975,   748,    10,   540,   308,   309,   177,   178,   763,
     764,   533,    12,  1081,   451,   149,   533,   458,   355,   648,
     971,   308,   309,   177,   178,   757,   658,   870,   150,   366,
     683,   151,   373,   376,  1020,   681,   371,   148,  1020,   552,
     553,   554,   555,   530,  1067,   891,   975,   892,   661,  1073,
     308,   309,   177,   178,   153,   977,   783,   978,   490,   155,
     652,   498,  1114,  1107,   156,   702,   703,   705,   707,   708,
     709,   710,   711,   712,   713,   714,   715,   716,   717,   718,
     328,   329,   173,   174,   175,   322,   177,   178,  -444,   909,
     328,   329,   371,   652,  -444,   734,   158,   166,  1028,   170,
    1039,   172,  1029,   975,   159,   479,   480,   912,   913,   307,
     193,   916,   917,   166,   168,   169,  1140,  1141,   481,   482,
     483,   433,   434,  1026,   196,   307,   975,  1027,   983,  1030,
     168,   169,  1032,  1031,   870,   201,  1033,  1163,  1162,   206,
    1156,   979,   204,  1166,   208,  1169,   170,   171,   172,   861,
     436,   437,   219,   943,   533,   203,   635,   972,   870,   211,
     748,   888,   889,   170,   301,   172,   207,   614,   615,   616,
     617,   516,   517,   619,  1154,   218,   235,   438,   439,   343,
     166,   492,   493,   494,   495,   344,   626,   627,   330,   331,
     332,   217,   307,   537,   704,   706,   541,   168,   169,   223,
     506,   698,   699,   700,   701,   170,   608,   172,   308,   309,
     177,   178,   441,   442,   999,  1000,  1001,  1002,   225,   653,
     161,   162,   163,   164,   308,   309,   177,   178,   549,   754,
     755,   756,   662,   289,   290,   291,   292,   293,   224,   584,
     371,   371,   371,   371,   371,   371,   371,   371,   371,   371,
     371,   371,   371,   371,   371,   350,   226,   503,   227,   210,
     689,   582,   864,   754,   755,   756,   865,   443,   444,   228,
     371,   170,   171,   172,   593,   473,   474,   861,   597,   598,
     599,   600,   601,   602,   603,   604,   605,   606,   607,   330,
     331,   308,   309,   177,   178,   649,   650,   479,   480,  1052,
    1053,   948,   949,  1035,  1036,  1071,  1072,   798,   799,   219,
     229,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   407,   426,   427,   941,   942,   632,
     633,   663,   664,   762,   233,   294,   297,   667,   670,   423,
     338,   815,   341,   817,   774,   358,   679,   809,   810,   360,
     362,   363,   219,   382,   409,   410,   411,   657,   412,   413,
     414,   415,   416,   417,   693,   424,   428,   432,   445,   446,
     779,   848,   780,  1038,   533,  1040,   435,  1043,   440,   300,
     781,   782,   659,   447,   448,   306,   449,   450,   459,   460,
     720,   721,   453,   461,   463,   984,   468,   467,  1082,   336,
     221,   730,   986,   471,   487,   987,   499,   801,   802,   472,
     501,  1083,   893,   525,   347,   351,   512,   522,  1016,   528,
     534,   530,   547,   550,   571,   222,   551,   574,   577,   364,
     585,   587,   367,   372,   579,   377,   347,   589,   590,   336,
    1085,   592,  1086,   595,   594,   613,  1104,  1105,   618,   381,
     452,   298,   622,   646,   920,   652,   161,   162,   163,   164,
     654,   661,   660,   672,   676,   696,   687,   688,   697,   736,
     722,   385,   727,   719,   765,   731,   732,   741,   165,   166,
     775,   784,   785,   743,   768,   771,   776,   787,   788,   789,
    1063,   167,   783,   792,   778,   650,   168,   169,   793,   795,
     797,   800,   807,   804,   879,   808,   874,   170,   171,   172,
     830,   806,   850,   862,   839,   840,   841,   876,   877,   878,
     813,   814,   883,   816,   884,   818,   819,   820,   821,   822,
     823,   824,   825,   826,   827,   828,   829,   887,   890,  1098,
     894,   896,   897,   898,   836,   899,   900,   909,   939,   953,
     955,   957,   959,   960,   981,  1034,   851,   852,   994,   995,
    1041,  1042,  1068,  1044,  1069,  1045,  1078,  1133,   511,  1070,
    1084,  1103,   515,  1108,  1113,  1109,   519,   520,  1111,  1112,
    1110,   523,   524,  1125,  1115,  1126,  1128,  1138,   173,   174,
     175,   176,   177,   178,   536,   539,  1142,  1143,  1144,   544,
     544,   546,  1145,   372,   980,   901,  1149,  1150,  1151,  1153,
     906,   219,   219,   908,  1157,   219,   219,  1159,  1160,  1155,
    1132,  1164,  1167,  1168,   911,  1171,   386,   384,   372,   296,
     695,   918,   767,   985,   919,   456,   921,   922,   923,   924,
     925,   581,   951,   926,   952,   927,   928,   929,  1024,   961,
     863,   880,   521,   935,   733,   548,   847,   219,   509,   221,
     221,   621,   538,   221,   221,   611,   629,   895,   323,   324,
     630,   628,   631,     0,   345,     0,     0,     0,     0,     0,
       0,     0,   488,     0,   222,   222,     0,     0,   222,   222,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   221,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   219,   219,
     219,   219,     0,   655,   992,     0,     0,     0,     0,   996,
     222,     0,     0,     0,     0,     0,  1003,     0,     0,  1004,
    1005,   671,     0,   674,   675,     0,  1006,  1076,  1077,     0,
       0,  1079,     0,  1080,     0,     0,     0,     0,  1014,     0,
       0,     0,   690,     0,     0,   304,   221,   221,   221,   221,
       0,     0,     0,     0,     0,     0,   372,   515,   515,   372,
     372,   372,   372,   372,   372,   372,   372,   372,   372,   372,
     372,   222,   222,   222,   222,     0,   724,     0,   726,     0,
       0,     0,     0,   219,   219,     0,   735,     0,     0,     0,
    1047,   740,     0,     0,  1049,   304,     0,     0,     0,     0,
     611,     0,     0,  1056,     0,     0,     0,     0,     0,     0,
    1130,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   773,     0,     0,     0,     0,     0,     0,
       0,   221,   221,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1090,     0,     0,
       0,     0,     0,     0,     0,     0,   222,   222,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   304,  1116,     0,
       0,     0,     0,     0,   239,   240,   241,   242,   243,   244,
       0,     0,     0,     0,   347,   245,   347,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   835,     0,     0,   837,   838,
       0,  1146,     0,   511,   849,     0,     0,     0,     0,     0,
     304,     0,   855,     0,   611,   611,   611,   611,     0,   304,
     304,  1158,   304,     0,     0,     0,     0,     0,   611,   611,
     611,     0,     0,     0,     0,     0,     0,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,     0,     0,   260,   261,   262,   263,     0,     0,     0,
     264,   265,   266,     0,     0,     0,   267,   268,     0,     0,
       0,     0,     0,   269,   270,   271,   272,     0,     0,     0,
       0,   273,     0,     0,     0,     0,     0,   347,     0,     0,
     274,   275,   276,     0,     0,   277,   278,     0,     0,     0,
     612,   279,     0,     0,     0,     0,     0,     0,     0,   280,
       0,     0,     0,     0,     0,     0,     0,   304,     0,     0,
       0,   544,   544,     0,   281,   282,   283,   284,   285,   286,
     287,   288,     0,     0,     0,     0,   611,     0,     0,   611,
       0,     0,   611,     0,     0,   611,   965,   965,   965,   965,
       0,     0,     0,   161,   162,   163,   164,     0,     0,     0,
       0,     0,   161,   162,   163,   164,     0,     0,     0,     0,
       0,   304,   304,     0,     0,   165,   166,     0,   612,     0,
       0,   304,   304,     0,   304,   166,     0,     0,   167,     0,
     503,     0,     0,   168,   169,     0,     0,   167,   304,   503,
     304,     0,   168,   169,   170,   171,   172,     0,     0,     0,
       0,     0,   544,   170,   171,   172,   161,   162,   163,   164,
       0,     0,     0,     0,     0,   161,   162,   163,   164,     0,
     965,     0,     0,     0,     0,     0,     0,     0,   165,   166,
       0,   611,   611,   611,     0,     0,     0,     0,   166,     0,
       0,   167,     0,     0,     0,   612,   168,   169,     0,     0,
     167,     0,     0,     0,     0,   168,   169,   170,   171,   172,
       0,     0,     0,     0,     0,   302,   170,   171,   172,     0,
       0,     0,     0,     0,   544,   173,   174,   175,   176,   177,
     178,     0,     0,     0,   173,   174,   175,   176,   177,   178,
       0,     0,     0,     0,     0,     0,     0,     0,   611,     0,
     611,     0,  1088,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   304,     0,     0,   365,     0,     0,   304,   304,
       0,     0,   304,   544,     0,   304,     0,     0,     0,     0,
       0,     0,     0,     0,   965,     0,   304,     0,   173,   174,
     668,   176,   177,   178,   965,     0,     0,   173,   174,   175,
     176,   177,   178,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   304,   304,     0,   304,   304,
       0,     0,     0,   161,   162,   163,   164,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   304,   965,   965,   612,
     612,   612,   612,     0,     0,     0,   166,     0,     0,     0,
       0,     0,     0,   612,   612,   612,     0,   462,   167,     0,
       0,   965,     0,   168,   169,     0,     0,     0,     0,   965,
       0,     0,     0,     0,   170,   608,   172,   965,     0,     0,
       0,     0,     0,   304,   304,   304,   304,     0,     0,   304,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     518,     0,     0,     0,     0,     0,     0,     0,     0,   526,
     527,     0,   529,     0,     0,     0,   304,   304,   304,   304,
       0,   304,   304,   304,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   612,   304,
     304,     0,     0,     0,     0,   173,   174,   175,   176,   177,
     178,   612,     0,     0,   612,     0,     0,   612,     0,     0,
     612,     0,     0,     0,     0,     0,     0,     0,   976,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   304,     0,   304,   304,
     304,     0,   304,     0,     0,     0,     0,   304,   304,     0,
       0,     0,     0,     0,     0,     0,     0,   623,     0,     0,
       0,     0,     0,     0,     0,   304,     0,     0,   304,   304,
     304,   304,   304,   304,     0,     0,   304,     0,     0,     0,
     304,   304,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   976,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   612,   612,   612,     0,
       0,   665,   666,     0,     0,     0,     0,     0,   673,     0,
       0,   677,   678,     0,   680,     0,   304,     0,   304,     0,
       0,     0,   304,   304,     0,     0,   304,   304,   691,     0,
     692,     0,   304,   304,   304,   304,     0,   304,   304,     0,
     304,   304,   304,     0,   976,     0,     0,     0,     0,   976,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   612,     0,   612,     0,     0,     0,     0,
       0,     0,   304,     0,     0,     0,     0,   304,   304,   304,
     304,     0,     0,     0,   304,     0,   304,   304,     0,     0,
     304,     0,     0,     0,   976,    -9,     0,     0,     0,     0,
      13,    14,    15,    16,    17,    18,    19,    20,     0,     0,
       0,     0,     0,     0,     0,     0,   304,   304,   304,   304,
       0,     0,   304,   304,   304,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    21,     0,     0,    22,
      23,     0,   304,   304,     0,     0,   304,   304,     0,   304,
       0,   976,   786,     0,    24,     0,    25,    -9,   790,   791,
       0,   304,   794,     0,     0,   796,     0,     0,     0,     0,
       0,     0,     0,   304,   976,     0,   805,     0,     0,     0,
       0,    26,     0,   304,     0,     0,     6,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,     0,     0,     0,
       0,     0,     0,     0,     0,   831,   832,     0,   833,   834,
       0,    28,    29,     0,     0,     0,     0,    30,    31,    32,
       0,     0,     0,    33,    34,    35,   854,     0,    36,    37,
      38,    39,    40,     0,     0,     0,     0,    41,    42,    43,
      44,     0,    45,    46,    47,    48,    49,    50,    51,    52,
       0,     0,     0,    53,    54,     0,     0,    55,    56,    57,
      58,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   902,   903,   904,   905,     0,     0,   907,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    59,    60,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   931,   932,   933,   934,
       0,   936,   937,   938,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   944,   945,
     946,     0,     0,     0,   321,   325,   326,   327,     0,     0,
       0,     0,     0,   195,     0,   200,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   214,   215,
     216,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   988,     0,   989,   990,
     991,     0,   993,     0,     0,     0,     0,   997,   998,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1007,     0,     0,  1008,  1009,
    1010,  1011,  1012,  1013,     0,     0,  1015,     0,     0,     0,
    1017,  1018,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   321,     0,     0,   321,  1046,     0,  1048,     0,
       0,     0,  1050,  1051,     0,   325,  1054,  1055,     0,     0,
       0,     0,  1057,  1058,  1059,  1060,     0,  1061,  1062,     0,
    1064,  1065,  1066,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   321,     0,     0,   321,
       0,     0,     0,   352,   353,   354,     0,     0,   356,     0,
       0,   359,  1089,     0,     0,     0,     0,  1091,  1092,  1093,
    1094,     0,     0,     0,  1095,     0,  1096,  1097,     0,     0,
    1100,   379,   380,     0,     0,     0,     0,     0,     0,     0,
     383,     0,     0,     0,     0,   388,   389,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1117,  1118,  1119,  1120,
       0,     0,  1121,  1122,  1123,   408,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   418,   419,   421,   422,     0,
       0,     0,  1134,  1135,   430,   431,  1136,  1137,     0,  1123,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1147,     0,     0,     0,   321,   321,   321,   321,     0,
       0,   321,     0,  1123,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1161,   321,   321,     0,   321,   321,   321,
     321,   321,   321,   321,   321,   321,   321,   321,   321,   321,
     321,   321,   643,   644,   645,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   321,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     321,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   321,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   321,     0,
     556,   557,   558,   559,   560,   561,   562,   563,   564,   565,
     566,   567,   568,   569,     0,     0,   572,   573,     0,   576,
       0,   578,     0,     0,     0,     0,   583,     0,     0,   586,
       0,     0,     0,     0,     0,   591,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   321,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   321,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   321,   321,
     321,     0,     0,     0,     0,     0,     0,     0,   321,   321,
      13,    14,    15,    16,    17,    18,    19,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   321,   321,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    21,     0,     0,    22,
      23,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    24,     0,    25,   385,     0,     0,
       0,   723,     0,   725,     0,     0,   728,   729,     0,     0,
       0,     0,     0,     0,     0,   738,   739,     0,     0,     0,
     742,    26,   744,   745,   746,   747,     0,   750,   751,   752,
     753,     0,   759,   760,     0,     0,    27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    28,    29,     0,     0,   321,     0,    30,    31,    32,
       0,     0,     0,    33,    34,    35,     0,     0,    36,    37,
      38,    39,    40,     0,     0,     0,     0,    41,    42,    43,
      44,     0,    45,    46,    47,    48,    49,    50,    51,    52,
       0,     0,     0,    53,    54,     0,     0,    55,    56,    57,
      58,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   811,   812,     0,     0,
       0,     0,    59,    60,     0,     0,     0,     0,     0,     0,
       0,    13,    14,    15,    16,    17,    18,    19,    20,     0,
       0,     0,     0,     0,   321,   321,   321,   321,     0,     0,
       0,     0,   321,     0,     0,     0,     0,     0,   321,     0,
       0,     0,     0,     0,     0,   321,     0,    21,   321,     0,
      22,    23,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    24,     0,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   914,   915,    27,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    28,    29,     0,     0,   930,     0,    30,    31,
      32,     0,     0,     0,    33,    34,    35,     0,     0,    36,
      37,    38,    39,    40,     0,     0,   940,     0,    41,    42,
      43,    44,     0,    45,    46,    47,    48,    49,    50,    51,
      52,     0,     0,     0,    53,    54,     0,     0,    55,    56,
      57,    58,     0,     0,     0,   321,   321,     0,     0,   321,
       0,   321,   321,   321,   321,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    59,    60,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   321,
     321,   237,   321,     0,     0,    -8,    -8,    -8,    -8,    -8,
      -8,    -8,    -8,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    -8,
      -8,    -8,    -8,    -8,    -8,     0,  1129,     0,   321,     0,
      -8,    -8,     0,   321,    -8,    -8,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   321,   321,     0,     0,    -8,
       0,    -8,    -8,     0,     0,     0,     0,     0,     0,     0,
    1152,     0,     0,     0,     0,     0,     0,     0,     0,   321,
       0,     0,     0,     0,     0,     0,    -8,   321,     0,     0,
       0,     1,   321,     0,     0,     0,     0,     0,     0,     0,
       0,    -8,    -8,    -8,    -8,    -8,    -8,    -8,    -8,    -8,
      -8,    -8,    -8,    -8,    -8,    -8,    -8,    -8,    -8,    -8,
      -8,    -8,    -8,    -8,    -8,    -8,    -8,    -8,    -8,    -8,
      -8,    -8,    -8,    -8,    -8,    -8,    -8,    -8,    -8,    -8,
      -8,    -8,    -8,    -8,    -8,    -8,    -8,    -8,    -8,    -8,
      -8,    -8,    -8,    -8,    -8,    -8,    -8,    -8,    -8,    -8,
      -8,    -8,    -8,    -8,    -8,    -8,    -8,     0,     0,     0,
       0,     0,     0,     0,    -8,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    -8,
      -8,    -8,    -8,    -8,    -8,    -8,    -8,    -8,    -8
};

static const yytype_int16 yycheck[] =
{
      22,    23,   203,   338,   481,   482,   483,   445,   548,   454,
       8,    61,    48,   216,   479,   480,   380,   879,   879,    16,
     883,   352,    19,   179,   195,   215,   877,   878,   371,   348,
     752,   488,   342,   745,   746,    59,  1067,     1,    87,    88,
      89,   605,  1073,   804,    41,   609,   166,   759,   760,   750,
     241,   242,   243,   244,    59,  1069,  1100,   213,    59,    46,
      48,    64,   858,    61,    59,    52,    64,    59,   883,     0,
      59,    57,    66,    58,   531,   187,   188,   408,    64,    73,
      54,    55,    71,  1114,    87,    48,   882,    76,    77,    54,
      55,    92,    87,  1137,   957,    87,    88,    89,   960,    59,
      57,    90,    87,    88,    89,    79,    80,    64,    91,    42,
      43,    71,  1126,    64,    79,    80,    76,    77,    16,    70,
      91,   170,    20,    87,    88,    89,    59,    87,    88,    89,
      60,    73,  1163,    59,    64,   336,    78,   859,  1169,    54,
     475,   476,   477,   478,    59,    71,   170,    67,    68,   352,
      76,    77,    72,    13,   866,   856,  1019,   869,   180,    54,
     872,  1024,   600,   170,    59,   170,   171,   172,   173,   614,
     615,   372,    63,  1034,   294,    87,   377,   297,   200,   489,
     881,   170,   171,   172,   173,   749,   505,   751,    87,   211,
     533,    90,   214,   383,   955,   530,   352,   170,   959,   390,
     391,   392,   393,    54,  1019,    62,  1069,    64,    59,  1024,
     170,   171,   172,   173,    90,     1,    60,     3,   338,    87,
      64,   341,  1084,  1074,    87,   556,   557,   558,   559,   560,
     561,   562,   563,   564,   565,   566,   567,   568,   569,   570,
      48,    49,   168,   169,   170,   171,   172,   173,    46,    60,
      48,    49,   408,    64,    52,   586,    87,    59,    59,    87,
     972,    89,    63,  1126,    59,    70,    71,   807,   808,    71,
      77,   811,   812,    59,    76,    77,  1127,  1128,    83,    84,
      85,   187,   188,    60,    53,    71,  1149,    64,    90,    60,
      76,    77,    60,    64,   858,    95,    64,  1159,  1159,    96,
    1151,    87,    63,  1164,    59,  1167,    87,    88,    89,   747,
     187,   188,   348,   853,   515,    94,   651,   881,   882,    59,
     758,   766,   767,    87,    88,    89,    96,   447,   448,   449,
     450,   353,   354,   453,  1149,   170,   386,   187,   188,    46,
      59,    48,    49,    50,    51,    52,   466,   467,    48,    49,
      50,    90,    71,   375,   557,   558,   378,    76,    77,   100,
     348,   552,   553,   554,   555,    87,    88,    89,   170,   171,
     172,   173,   187,   188,   914,   915,   916,   917,    96,   499,
      36,    37,    38,    39,   170,   171,   172,   173,   386,   181,
     182,   183,   512,    21,    22,    23,    24,    25,   100,   421,
     556,   557,   558,   559,   560,   561,   562,   563,   564,   565,
     566,   567,   568,   569,   570,   586,    96,    73,    87,    39,
     540,   418,   180,   181,   182,   183,   184,   187,   188,    87,
     586,    87,    88,    89,   431,    81,    82,   875,   434,   435,
     436,   437,   438,   439,   440,   441,   442,   443,   444,    48,
      49,   170,   171,   172,   173,    64,    65,    70,    71,   999,
    1000,   177,   178,    70,    71,    70,    71,   684,   685,   505,
      96,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   275,   276,   851,   852,   473,
     474,   513,   514,   613,    35,    17,    69,   519,   520,   273,
      54,   704,    59,   706,   624,   170,   528,   698,   699,    59,
      97,   170,   548,   185,    63,    96,    96,   505,     4,    96,
      63,    96,     4,     4,   546,    28,    93,    63,   188,    47,
     650,   734,   652,   971,   735,   973,   187,   982,   187,   159,
     660,   661,   505,    18,    18,   165,    18,    18,    60,    64,
     572,   573,    20,    63,    63,   890,    60,    59,  1035,   179,
     548,   583,   897,    74,    87,   900,    54,   687,   688,    75,
     167,  1036,   773,    64,   194,   195,    59,   170,   942,    64,
      59,    54,   186,   171,   170,   548,   171,    63,   170,   209,
      87,    26,   212,   213,    63,   215,   216,    96,    96,   219,
    1038,   170,  1040,   175,   170,    18,  1071,  1072,    61,   229,
      16,   170,   170,    60,   817,    64,    36,    37,    38,    39,
      60,    59,    56,    60,   170,   170,    59,    59,   170,    27,
     170,    62,   170,    63,    19,   170,   170,   170,    58,    59,
      57,   663,   664,   175,    87,    60,    60,   669,   670,   671,
    1014,    71,    60,   675,   170,    65,    76,    77,    60,    64,
      55,    60,   170,    64,    56,   170,   180,    87,    88,    89,
     170,   693,    96,   199,   170,   170,   170,    59,    59,    59,
     702,   703,    56,   705,    15,   707,   708,   709,   710,   711,
     712,   713,   714,   715,   716,   717,   718,    87,    69,  1063,
      60,    55,    64,    60,   726,    57,    54,    60,   170,   179,
      56,    56,    56,    56,    14,    64,   738,   739,    60,    60,
      57,    54,    72,    55,    64,    55,   170,    99,   348,    57,
      64,   176,   352,    59,    57,    60,   356,   357,    60,    60,
      64,   361,   362,    57,    64,    64,    64,   176,   168,   169,
     170,   171,   172,   173,   374,   375,    64,    60,    57,   379,
     380,   381,    55,   383,   884,   787,    64,    57,    64,    98,
     792,   807,   808,   795,    60,   811,   812,    64,    57,   176,
    1115,    64,    64,    57,   806,    57,   238,   235,   408,   156,
     549,   813,   617,   892,   816,   296,   818,   819,   820,   821,
     822,   417,   859,   825,   860,   827,   828,   829,   959,   875,
     749,   758,   359,   835,   586,   383,   734,   853,   348,   807,
     808,   460,   375,   811,   812,   445,   470,   777,   167,   167,
     471,   469,   472,    -1,   190,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   335,    -1,   807,   808,    -1,    -1,   811,   812,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   853,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   914,   915,
     916,   917,    -1,   503,   906,    -1,    -1,    -1,    -1,   911,
     853,    -1,    -1,    -1,    -1,    -1,   918,    -1,    -1,   921,
     922,   521,    -1,   523,   524,    -1,   928,  1027,  1028,    -1,
      -1,  1031,    -1,  1033,    -1,    -1,    -1,    -1,   940,    -1,
      -1,    -1,   542,    -1,    -1,   160,   914,   915,   916,   917,
      -1,    -1,    -1,    -1,    -1,    -1,   556,   557,   558,   559,
     560,   561,   562,   563,   564,   565,   566,   567,   568,   569,
     570,   914,   915,   916,   917,    -1,   576,    -1,   578,    -1,
      -1,    -1,    -1,   999,  1000,    -1,   586,    -1,    -1,    -1,
     992,   591,    -1,    -1,   996,   210,    -1,    -1,    -1,    -1,
     600,    -1,    -1,  1005,    -1,    -1,    -1,    -1,    -1,    -1,
    1110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   623,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   999,  1000,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1049,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   999,  1000,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   302,  1090,    -1,
      -1,    -1,    -1,    -1,    29,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,   704,    40,   706,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   725,    -1,    -1,   728,   729,
      -1,  1133,    -1,   733,   734,    -1,    -1,    -1,    -1,    -1,
     355,    -1,   742,    -1,   744,   745,   746,   747,    -1,   364,
     365,  1153,   367,    -1,    -1,    -1,    -1,    -1,   758,   759,
     760,    -1,    -1,    -1,    -1,    -1,    -1,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,    -1,    -1,   118,   119,   120,   121,    -1,    -1,    -1,
     125,   126,   127,    -1,    -1,    -1,   131,   132,    -1,    -1,
      -1,    -1,    -1,   138,   139,   140,   141,    -1,    -1,    -1,
      -1,   146,    -1,    -1,    -1,    -1,    -1,   817,    -1,    -1,
     155,   156,   157,    -1,    -1,   160,   161,    -1,    -1,    -1,
     445,   166,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   174,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   462,    -1,    -1,
      -1,   851,   852,    -1,   189,   190,   191,   192,   193,   194,
     195,   196,    -1,    -1,    -1,    -1,   866,    -1,    -1,   869,
      -1,    -1,   872,    -1,    -1,   875,   876,   877,   878,   879,
      -1,    -1,    -1,    36,    37,    38,    39,    -1,    -1,    -1,
      -1,    -1,    36,    37,    38,    39,    -1,    -1,    -1,    -1,
      -1,   516,   517,    -1,    -1,    58,    59,    -1,   523,    -1,
      -1,   526,   527,    -1,   529,    59,    -1,    -1,    71,    -1,
      73,    -1,    -1,    76,    77,    -1,    -1,    71,   543,    73,
     545,    -1,    76,    77,    87,    88,    89,    -1,    -1,    -1,
      -1,    -1,   942,    87,    88,    89,    36,    37,    38,    39,
      -1,    -1,    -1,    -1,    -1,    36,    37,    38,    39,    -1,
     960,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    59,
      -1,   971,   972,   973,    -1,    -1,    -1,    -1,    59,    -1,
      -1,    71,    -1,    -1,    -1,   600,    76,    77,    -1,    -1,
      71,    -1,    -1,    -1,    -1,    76,    77,    87,    88,    89,
      -1,    -1,    -1,    -1,    -1,   160,    87,    88,    89,    -1,
      -1,    -1,    -1,    -1,  1014,   168,   169,   170,   171,   172,
     173,    -1,    -1,    -1,   168,   169,   170,   171,   172,   173,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1038,    -1,
    1040,    -1,  1042,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   667,    -1,    -1,   210,    -1,    -1,   673,   674,
      -1,    -1,   677,  1063,    -1,   680,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1074,    -1,   691,    -1,   168,   169,
     170,   171,   172,   173,  1084,    -1,    -1,   168,   169,   170,
     171,   172,   173,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   720,   721,    -1,   723,   724,
      -1,    -1,    -1,    36,    37,    38,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   741,  1127,  1128,   744,
     745,   746,   747,    -1,    -1,    -1,    59,    -1,    -1,    -1,
      -1,    -1,    -1,   758,   759,   760,    -1,   302,    71,    -1,
      -1,  1151,    -1,    76,    77,    -1,    -1,    -1,    -1,  1159,
      -1,    -1,    -1,    -1,    87,    88,    89,  1167,    -1,    -1,
      -1,    -1,    -1,   788,   789,   790,   791,    -1,    -1,   794,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     355,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   364,
     365,    -1,   367,    -1,    -1,    -1,   831,   832,   833,   834,
      -1,   836,   837,   838,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   853,   854,
     855,    -1,    -1,    -1,    -1,   168,   169,   170,   171,   172,
     173,   866,    -1,    -1,   869,    -1,    -1,   872,    -1,    -1,
     875,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   883,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   901,    -1,   903,   904,
     905,    -1,   907,    -1,    -1,    -1,    -1,   912,   913,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   462,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   930,    -1,    -1,   933,   934,
     935,   936,   937,   938,    -1,    -1,   941,    -1,    -1,    -1,
     945,   946,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   957,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   971,   972,   973,    -1,
      -1,   516,   517,    -1,    -1,    -1,    -1,    -1,   523,    -1,
      -1,   526,   527,    -1,   529,    -1,   991,    -1,   993,    -1,
      -1,    -1,   997,   998,    -1,    -1,  1001,  1002,   543,    -1,
     545,    -1,  1007,  1008,  1009,  1010,    -1,  1012,  1013,    -1,
    1015,  1016,  1017,    -1,  1019,    -1,    -1,    -1,    -1,  1024,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1038,    -1,  1040,    -1,    -1,    -1,    -1,
      -1,    -1,  1047,    -1,    -1,    -1,    -1,  1052,  1053,  1054,
    1055,    -1,    -1,    -1,  1059,    -1,  1061,  1062,    -1,    -1,
    1065,    -1,    -1,    -1,  1069,     0,    -1,    -1,    -1,    -1,
       5,     6,     7,     8,     9,    10,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1091,  1092,  1093,  1094,
      -1,    -1,  1097,  1098,  1099,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    44,
      45,    -1,  1117,  1118,    -1,    -1,  1121,  1122,    -1,  1124,
      -1,  1126,   667,    -1,    59,    -1,    61,    62,   673,   674,
      -1,  1136,   677,    -1,    -1,   680,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1148,  1149,    -1,   691,    -1,    -1,    -1,
      -1,    86,    -1,  1158,    -1,    -1,    91,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   720,   721,    -1,   723,   724,
      -1,   116,   117,    -1,    -1,    -1,    -1,   122,   123,   124,
      -1,    -1,    -1,   128,   129,   130,   741,    -1,   133,   134,
     135,   136,   137,    -1,    -1,    -1,    -1,   142,   143,   144,
     145,    -1,   147,   148,   149,   150,   151,   152,   153,   154,
      -1,    -1,    -1,   158,   159,    -1,    -1,   162,   163,   164,
     165,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   788,   789,   790,   791,    -1,    -1,   794,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   197,   198,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   831,   832,   833,   834,
      -1,   836,   837,   838,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   853,   854,
     855,    -1,    -1,    -1,   166,   167,   168,   169,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   901,    -1,   903,   904,
     905,    -1,   907,    -1,    -1,    -1,    -1,   912,   913,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   930,    -1,    -1,   933,   934,
     935,   936,   937,   938,    -1,    -1,   941,    -1,    -1,    -1,
     945,   946,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   294,    -1,    -1,   297,   991,    -1,   993,    -1,
      -1,    -1,   997,   998,    -1,   307,  1001,  1002,    -1,    -1,
      -1,    -1,  1007,  1008,  1009,  1010,    -1,  1012,  1013,    -1,
    1015,  1016,  1017,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   338,    -1,    -1,   341,
      -1,    -1,    -1,   197,   198,   199,    -1,    -1,   202,    -1,
      -1,   205,  1047,    -1,    -1,    -1,    -1,  1052,  1053,  1054,
    1055,    -1,    -1,    -1,  1059,    -1,  1061,  1062,    -1,    -1,
    1065,   225,   226,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     234,    -1,    -1,    -1,    -1,   239,   240,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1091,  1092,  1093,  1094,
      -1,    -1,  1097,  1098,  1099,   259,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   269,   270,   271,   272,    -1,
      -1,    -1,  1117,  1118,   278,   279,  1121,  1122,    -1,  1124,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1136,    -1,    -1,    -1,   447,   448,   449,   450,    -1,
      -1,   453,    -1,  1148,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1158,   466,   467,    -1,   469,   470,   471,
     472,   473,   474,   475,   476,   477,   478,   479,   480,   481,
     482,   483,   484,   485,   486,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   499,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     512,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   530,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   540,    -1,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,    -1,    -1,   410,   411,    -1,   413,
      -1,   415,    -1,    -1,    -1,    -1,   420,    -1,    -1,   423,
      -1,    -1,    -1,    -1,    -1,   429,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   613,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   624,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   650,   651,
     652,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   660,   661,
       5,     6,     7,     8,     9,    10,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   687,   688,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    44,
      45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    59,    -1,    61,    62,    -1,    -1,
      -1,   575,    -1,   577,    -1,    -1,   580,   581,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   589,   590,    -1,    -1,    -1,
     594,    86,   596,   597,   598,   599,    -1,   601,   602,   603,
     604,    -1,   606,   607,    -1,    -1,   101,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   116,   117,    -1,    -1,   777,    -1,   122,   123,   124,
      -1,    -1,    -1,   128,   129,   130,    -1,    -1,   133,   134,
     135,   136,   137,    -1,    -1,    -1,    -1,   142,   143,   144,
     145,    -1,   147,   148,   149,   150,   151,   152,   153,   154,
      -1,    -1,    -1,   158,   159,    -1,    -1,   162,   163,   164,
     165,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   700,   701,    -1,    -1,
      -1,    -1,   197,   198,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     5,     6,     7,     8,     9,    10,    11,    12,    -1,
      -1,    -1,    -1,    -1,   876,   877,   878,   879,    -1,    -1,
      -1,    -1,   884,    -1,    -1,    -1,    -1,    -1,   890,    -1,
      -1,    -1,    -1,    -1,    -1,   897,    -1,    41,   900,    -1,
      44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    59,    -1,    61,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   809,   810,   101,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   116,   117,    -1,    -1,   830,    -1,   122,   123,
     124,    -1,    -1,    -1,   128,   129,   130,    -1,    -1,   133,
     134,   135,   136,   137,    -1,    -1,   850,    -1,   142,   143,
     144,   145,    -1,   147,   148,   149,   150,   151,   152,   153,
     154,    -1,    -1,    -1,   158,   159,    -1,    -1,   162,   163,
     164,   165,    -1,    -1,    -1,  1027,  1028,    -1,    -1,  1031,
      -1,  1033,  1034,  1035,  1036,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   197,   198,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1071,
    1072,     1,  1074,    -1,    -1,     5,     6,     7,     8,     9,
      10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      30,    31,    32,    33,    34,    -1,  1108,    -1,  1110,    -1,
      40,    41,    -1,  1115,    44,    45,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1127,  1128,    -1,    -1,    59,
      -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1142,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1151,
      -1,    -1,    -1,    -1,    -1,    -1,    86,  1159,    -1,    -1,
      -1,    91,  1164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   174,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,    91,   201,   204,   205,     0,    91,    13,   202,   213,
     170,   205,    63,     5,     6,     7,     8,     9,    10,    11,
      12,    41,    44,    45,    59,    61,    86,   101,   116,   117,
     122,   123,   124,   128,   129,   130,   133,   134,   135,   136,
     137,   142,   143,   144,   145,   147,   148,   149,   150,   151,
     152,   153,   154,   158,   159,   162,   163,   164,   165,   197,
     198,   203,   206,   207,   208,   211,   212,   214,   215,   216,
     217,   218,   219,   221,   222,   223,   226,   227,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   259,   260,   261,   262,   263,   264,   265,   267,
     268,   270,   273,   274,   276,   277,   279,   281,   282,   283,
     284,   285,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   319,   320,   321,   324,   326,
     327,   328,   329,   330,   331,   332,   333,   335,   170,    87,
      87,    90,   210,    90,   210,    87,    87,   210,    87,    59,
     382,    36,    37,    38,    39,    58,    59,    71,    76,    77,
      87,    88,    89,   168,   169,   170,   171,   172,   173,   339,
     346,   351,   367,   368,   369,   370,   371,   375,   384,   385,
     397,   398,   346,    77,   336,   382,    53,   340,    42,    43,
     382,    95,   334,    94,    63,   381,    96,    96,    59,   353,
     384,    59,   354,   210,   382,   382,   382,    90,   170,   339,
     347,   351,   368,   100,   100,    96,    96,    87,    87,    96,
     187,   188,   300,    35,   338,   204,   205,     1,   205,    29,
      30,    31,    32,    33,    34,    40,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     118,   119,   120,   121,   125,   126,   127,   131,   132,   138,
     139,   140,   141,   146,   155,   156,   157,   160,   161,   166,
     174,   189,   190,   191,   192,   193,   194,   195,   196,    21,
      22,    23,    24,    25,    17,   224,   224,    69,   170,   383,
     384,    88,   357,   358,   385,   378,   384,    71,   170,   171,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   171,   369,   370,   397,   397,   397,    48,    49,
      48,    49,    50,    59,    87,   375,   384,   346,    54,   373,
     374,    59,   376,    46,    52,   400,   377,   384,   341,   361,
     379,   384,   382,   382,   382,   346,   382,   376,   170,   382,
      59,   380,    97,   170,   384,   357,   346,   384,   343,   362,
     363,   375,   384,   346,   342,   356,   362,   384,   377,   382,
     382,   384,   185,   382,   206,    62,   203,   209,   382,   382,
     381,   381,   381,   381,   338,   338,   338,   338,   338,   338,
     338,   338,   338,   338,   338,   338,   338,   338,   382,    63,
      96,    96,     4,    96,    63,    96,     4,     4,   382,   382,
      92,   382,   382,   338,    28,   275,   275,   275,    93,   280,
     382,   382,    63,   187,   188,   187,   187,   188,   187,   188,
     187,   187,   188,   187,   188,   188,    47,    18,    18,    18,
      18,   386,    16,    20,   225,   233,   225,    90,   386,    60,
      64,    63,   357,    63,   359,    57,    64,    59,    60,    73,
      78,    74,    75,    81,    82,    54,    55,    79,    80,    70,
      71,    83,    84,    85,    67,    68,    72,    87,   374,   376,
     386,   393,    48,    49,    50,    51,   399,   400,   386,    54,
     373,   167,   337,    73,   349,   350,   351,   364,   365,   366,
     379,   384,    59,   343,   377,   384,   346,   346,   357,   384,
     384,   334,   170,   384,   384,    64,   357,   357,    64,   357,
      54,   372,   372,   376,    59,   355,   384,   346,   355,   384,
      59,   346,    59,   269,   384,   269,   384,   186,   342,   205,
     171,   171,   381,   381,   381,   381,   382,   382,   382,   382,
     382,   382,   382,   382,   382,   382,   382,   382,   382,   382,
     343,   170,   382,   382,    63,   286,   382,   170,   382,    63,
     266,   266,   210,   382,   346,    87,   382,    26,   271,    96,
      96,   382,   170,   210,   170,   175,   301,   301,   301,   301,
     301,   301,   301,   301,   301,   301,   301,   301,    88,   317,
     357,   384,   385,    18,   386,   386,   386,   386,    61,   386,
     233,   383,   170,   357,    59,   170,   386,   386,   389,   388,
     390,   391,   392,   392,   393,   393,   393,   393,   396,   396,
     395,   395,   395,   397,   397,   397,    60,   399,   373,    64,
      65,    55,    64,   386,    60,   384,   348,   351,   364,   368,
      56,    59,   386,   346,   346,   357,   357,   346,   170,   258,
     346,   384,    60,   357,   384,   384,   170,   357,   357,   346,
     357,   393,   399,   372,    64,    87,   325,    59,    59,   386,
     384,   357,   357,   346,   347,   209,   170,   170,   381,   381,
     381,   381,   343,   343,   377,   343,   377,   343,   343,   343,
     343,   343,   343,   343,   343,   343,   343,   343,   343,    63,
     346,   346,   170,   382,   384,   382,   384,   170,   382,   382,
     346,   170,   170,   341,   343,   384,    27,   272,   382,   382,
     384,   170,   382,   175,   382,   382,   382,   382,   317,   323,
     382,   382,   382,   382,   181,   182,   183,   311,   322,   382,
     382,   311,   386,   233,   233,    19,   220,   220,    87,   231,
     232,    60,   352,   384,   386,    57,    60,    66,   170,   386,
     386,   386,   386,    60,   346,   346,   357,   346,   346,   346,
     357,   357,   346,    60,   357,    64,   357,    55,   325,   325,
      60,   386,   386,    60,    64,   357,   346,   170,   170,   381,
     381,   382,   382,   346,   346,   377,   346,   377,   346,   346,
     346,   346,   346,   346,   346,   346,   346,   346,   346,   346,
     170,   357,   357,   357,   357,   384,   346,   384,   384,   170,
     170,   170,   344,   345,   346,   364,   366,   344,   377,   384,
      96,   346,   346,   278,   357,   384,   315,   317,   315,   315,
     316,   317,   199,   322,   180,   184,   302,   310,   311,   307,
     311,   302,   303,   310,   180,   304,    59,    59,    59,    56,
     323,   315,   315,    56,    15,   228,   229,    87,   233,   233,
      69,    62,    64,   376,    60,   387,    55,    64,    60,    57,
      54,   346,   357,   357,   357,   357,   346,   357,   346,    60,
     398,   346,   347,   347,   382,   382,   347,   347,   346,   346,
     377,   346,   346,   346,   346,   346,   346,   346,   346,   346,
     382,   357,   357,   357,   357,   346,   357,   357,   357,   170,
     382,   269,   269,   347,   357,   357,   357,   302,   177,   178,
     307,   303,   304,   179,   315,    56,   315,    56,   315,    56,
      56,   316,   312,   313,   314,   384,   386,   312,   312,   313,
     314,   302,   311,   307,   318,   358,   385,     1,     3,    87,
     386,    14,   230,    90,   393,   231,   393,   393,   357,   357,
     357,   357,   346,   357,    60,    60,   346,   357,   357,   347,
     347,   347,   347,   346,   346,   346,   346,   357,   357,   357,
     357,   357,   357,   357,   346,   357,   269,   357,   357,   309,
     398,   305,   306,   318,   309,   314,    60,    64,    59,    63,
      60,    64,    60,    64,    64,    70,    71,   308,   317,   315,
     317,    57,    54,   233,    55,    55,   357,   346,   357,   346,
     357,   357,   347,   347,   357,   357,   346,   357,   357,   357,
     357,   357,   357,   269,   357,   357,   357,   318,    72,    64,
      57,    70,    71,   318,    64,    70,   386,   386,   170,   386,
     386,   313,   395,   396,    64,   317,   317,     1,   384,   357,
     346,   357,   357,   357,   357,   357,   357,   357,   269,   360,
     357,   308,   305,   176,   396,   396,   308,   312,    59,    60,
      64,    60,    60,    57,   314,    64,   346,   357,   357,   357,
     357,   357,   357,   357,   360,    57,    64,    64,    64,   397,
     386,   308,   393,    99,   357,   357,   357,   357,   176,   305,
     312,   312,    64,    60,    57,    55,   346,   357,   360,    64,
      57,    64,   397,    98,   318,   176,   312,    60,   346,    64,
      57,   357,   313,   314,    64,   308,   313,    64,    57,   314,
     308,    57
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   200,   201,   202,   203,   203,   204,   204,   205,   205,
     206,   206,   206,   206,   206,   206,   206,   206,   206,   206,
     207,   207,   207,   208,   209,   210,   210,   211,   212,   213,
     214,   214,   214,   214,   214,   214,   215,   216,   217,   218,
     219,   220,   220,   221,   222,   222,   223,   223,   224,   224,
     225,   226,   226,   226,   226,   227,   228,   228,   229,   229,
     229,   229,   230,   230,   230,   231,   231,   231,   232,   232,
     233,   233,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   235,   236,   236,   236,   236,   237,
     237,   238,   239,   240,   241,   242,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   253,   253,
     254,   255,   255,   255,   256,   256,   257,   257,   258,   259,
     260,   261,   262,   263,   263,   263,   263,   263,   264,   265,
     266,   266,   267,   268,   268,   269,   269,   270,   271,   271,
     272,   272,   273,   274,   275,   275,   276,   277,   278,   278,
     278,   279,   280,   280,   281,   282,   283,   283,   283,   284,
     285,   285,   285,   285,   285,   285,   285,   286,   286,   287,
     287,   287,   287,   287,   287,   287,   287,   287,   287,   287,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   300,   301,   301,   302,   303,   303,
     304,   304,   304,   305,   305,   305,   306,   306,   306,   306,
     307,   308,   308,   308,   309,   309,   310,   310,   310,   310,
     311,   311,   311,   311,   311,   311,   312,   312,   313,   314,
     314,   314,   315,   315,   316,   317,   317,   318,   318,   319,
     319,   319,   320,   321,   322,   322,   323,   324,   325,   325,
     325,   326,   326,   326,   326,   326,   326,   326,   326,   327,
     328,   329,   329,   330,   331,   332,   332,   332,   332,   333,
     333,   333,   333,   333,   333,   333,   333,   334,   334,   335,
     335,   336,   336,   337,   337,   338,   338,   339,   339,   339,
     339,   340,   340,   341,   342,   343,   343,   344,   344,   345,
     345,   346,   346,   346,   347,   347,   348,   348,   348,   349,
     349,   350,   350,   351,   352,   353,   354,   355,   356,   357,
     357,   358,   359,   359,   360,   360,   361,   362,   362,   363,
     364,   364,   365,   366,   367,   367,   368,   368,   368,   368,
     368,   368,   369,   369,   369,   370,   370,   370,   371,   371,
     372,   373,   374,   374,   374,   375,   375,   376,   377,   378,
     379,   380,   380,   381,   382,   382,   383,   384,   384,   385,
     385,   386,   387,   387,   388,   388,   389,   389,   390,   390,
     391,   391,   391,   392,   392,   392,   392,   392,   393,   394,
     394,   394,   394,   395,   395,   395,   396,   396,   396,   396,
     397,   397,   397,   397,   398,   398,   398,   398,   398,   398,
     399,   399,   399,   399,   399,   400,   400
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     1,     3,     1,     2,     1,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     5,     2,     1,     1,     1,     1,     2,     2,     4,
       1,     1,     1,     1,     1,     1,     2,     9,     6,     6,
       7,     0,     2,     7,     4,     3,     5,     4,     0,     2,
       2,     4,     4,     2,     3,     2,     0,     1,     2,     2,
       2,     2,     0,     6,     3,     3,     3,     1,     3,     1,
       0,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     7,     7,     8,     9,     6,
       6,     6,     7,     6,     7,     8,     7,     6,     8,     8,
       5,     6,     5,     4,     7,     7,     7,     6,     6,     6,
       1,     4,     4,     4,     6,     6,     8,     7,     1,     8,
      10,     8,     9,     1,     1,     1,     3,     2,    10,    13,
       0,     2,    10,     9,     8,     1,     5,    13,     0,     1,
       0,     1,    10,    11,     0,     1,     6,     5,     0,     2,
       2,     6,     0,     1,     9,    16,     9,     5,     6,     6,
       5,     5,     4,     9,     9,     7,     7,     0,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     7,     7,     7,     7,     7,     7,     9,     7,     7,
       9,     8,     4,     1,     1,     0,     2,     7,     9,     1,
      16,    14,    10,     1,     3,     3,     1,     3,     5,     7,
       5,     0,     2,     2,     0,     2,     0,     1,     1,     1,
       4,     6,     4,     6,     4,     6,     1,     1,     1,     1,
       3,     6,     2,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     6,     6,     6,     8,     2,     8,     0,     2,
       2,     4,     4,     3,     6,     6,     6,     7,     3,     2,
       2,     9,     9,     2,     2,    12,    12,    11,    11,     1,
       2,     1,     1,     2,     1,     2,     1,     0,     1,     0,
       5,     0,     1,     0,     1,     0,     1,     1,     1,     1,
       1,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     5,     7,     4,     4,     1,
       3,     2,     2,     4,     0,     2,     1,     3,     2,     3,
       1,     4,     2,     1,     3,     4,     2,     2,     1,     2,
       1,     2,     1,     2,     2,     1,     2,     2,     3,     4,
       3,     7,     1,     5,     3,     5,     3,     5,     1,     4,
       7,     0,     3,     2,     3,     5,     1,     1,     1,     1,
       1,     1,     5,     1,     3,     1,     3,     1,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     1,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     1,
       2,     2,     2,     1,     1,     1,     3,     2,     4,     1,
       1,     1,     1,     1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (pBuilder, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, pBuilder); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, CISA_IR_Builder* pBuilder)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (pBuilder);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, CISA_IR_Builder* pBuilder)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep, pBuilder);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule, CISA_IR_Builder* pBuilder)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)], pBuilder);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, pBuilder); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, CISA_IR_Builder* pBuilder)
{
  YY_USE (yyvaluep);
  YY_USE (pBuilder);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (CISA_IR_Builder* pBuilder)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex (pBuilder);
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* Listing: NewlinesOpt ListingHeader NewlinesOpt Statements NewlinesOpt  */
#line 668 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                                                                      {
        TRACE("** Listing Complete\n");
        pBuilder->CISA_post_file_parse();
    }
#line 3077 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 22: /* Scope: ScopeStart error  */
#line 697 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                       {
        PARSE_ERROR_AT((int)(yyvsp[-1].intval), "unclosed scope");
    }
#line 3085 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 23: /* ScopeStart: LBRACE  */
#line 701 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
           {
        pBuilder->CISA_push_decl_scope();
        (yyval.intval) = CISAlineno;
    }
#line 3094 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 24: /* ScopeEnd: RBRACE  */
#line 705 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                 {pBuilder->CISA_pop_decl_scope();}
#line 3100 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 27: /* DirectiveKernel: DIRECTIVE_KERNEL IdentOrStringLit  */
#line 716 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        VISAKernel *cisa_kernel = NULL;
        pBuilder->AddKernel(cisa_kernel, (yyvsp[0].string));
    }
#line 3109 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 28: /* DirectiveGlobalFunction: DIRECTIVE_GLOBAL_FUNC IdentOrStringLit  */
#line 724 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
  {
      VISAFunction *cisa_kernel = NULL;
      pBuilder->AddFunction(cisa_kernel, (yyvsp[0].string));
  }
#line 3118 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 29: /* DirectiveVersion: DIRECTIVE_VERSION DEC_LIT DOT DEC_LIT  */
#line 732 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
   {
       pBuilder->CISA_IR_setVersion((unsigned char)(yyvsp[-2].intval), (unsigned char)(yyvsp[0].intval));
   }
#line 3126 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 36: /* DeclFunction: DIRECTIVE_FUNCDECL STRING_LIT  */
#line 746 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        // do nothing as it's informational only
    }
#line 3134 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 37: /* DeclVariable: DIRECTIVE_DECL IDENT V_TYPE_EQ_G DECL_DATA_TYPE NUM_ELTS_EQ IntExp AlignAttrOpt AliasAttrOpt GenAttrOpt  */
#line 753 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
       ABORT_ON_FAIL(pBuilder->CISA_general_variable_decl(
           (yyvsp[-7].string), (unsigned int)(yyvsp[-3].intval), (yyvsp[-5].type), (yyvsp[-2].align), (yyvsp[-1].alias).aliasname, (yyvsp[-1].alias).offset, AttrOptVar, CISAlineno));
       AttrOptVar.clear();
    }
#line 3144 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 38: /* DeclAddress: DIRECTIVE_DECL IDENT V_TYPE_EQ_A NUM_ELTS_EQ IntExp GenAttrOpt  */
#line 761 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
   {
       ABORT_ON_FAIL(
           pBuilder->CISA_addr_variable_decl((yyvsp[-4].string), (unsigned int)(yyvsp[-1].intval), ISA_TYPE_UW, AttrOptVar, CISAlineno));
       AttrOptVar.clear();
   }
#line 3154 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 39: /* DeclPredicate: DIRECTIVE_DECL IDENT V_TYPE_EQ_P NUM_ELTS_EQ IntExp GenAttrOpt  */
#line 769 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
   {
       ABORT_ON_FAIL(pBuilder->CISA_predicate_variable_decl((yyvsp[-4].string), (unsigned int)(yyvsp[-1].intval), AttrOptVar, CISAlineno));
       AttrOptVar.clear();
   }
#line 3163 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 40: /* DeclSampler: DIRECTIVE_DECL IDENT V_TYPE_EQ_S NUM_ELTS_EQ IntExp VNameEqOpt GenAttrOpt  */
#line 776 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
   {
       ABORT_ON_FAIL(pBuilder->CISA_sampler_variable_decl((yyvsp[-5].string), (int)(yyvsp[-2].intval), (yyvsp[-1].string), CISAlineno));
   }
#line 3171 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 41: /* VNameEqOpt: %empty  */
#line 779 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                    {(yyval.string) = "";}
#line 3177 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 42: /* VNameEqOpt: V_NAME_EQ IDENT  */
#line 779 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                                                 {(yyval.string) = (yyvsp[0].string);}
#line 3183 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 43: /* DeclSurface: DIRECTIVE_DECL IDENT V_TYPE_EQ_T NUM_ELTS_EQ IntExp VNameEqOpt GenAttrOpt  */
#line 783 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
   {
       ABORT_ON_FAIL(pBuilder->CISA_surface_variable_decl((yyvsp[-5].string), (int)(yyvsp[-2].intval), (yyvsp[-1].string), AttrOptVar, CISAlineno));
       AttrOptVar.clear();
   }
#line 3192 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 44: /* DirectiveInput: DIRECTIVE_INPUT IDENT InputOffset InputSize  */
#line 791 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        ABORT_ON_FAIL(pBuilder->CISA_input_directive((yyvsp[-2].string), (short)(yyvsp[-1].intval), (unsigned short)(yyvsp[0].intval), CISAlineno));
    }
#line 3200 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 45: /* DirectiveInput: DIRECTIVE_INPUT IDENT InputOffset  */
#line 796 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        int64_t size = 0;
        ABORT_ON_FAIL(pBuilder->CISA_eval_sizeof_decl(CISAlineno, (yyvsp[-1].string), size));
        MUST_HOLD(size < 0x10000, "declaration size is too large");
        ABORT_ON_FAIL(pBuilder->CISA_input_directive((yyvsp[-1].string), (short)(yyvsp[0].intval), (unsigned short)size, CISAlineno));
    }
#line 3211 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 46: /* DirectiveImplicitInput: DIRECTIVE_IMPLICIT IDENT InputOffset InputSize GenAttrOpt  */
#line 808 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        ABORT_ON_FAIL(pBuilder->CISA_implicit_input_directive(
            (yyvsp[-4].string), (yyvsp[-3].string), (short)(yyvsp[-2].intval), (unsigned short)(yyvsp[-1].intval), CISAlineno));
    }
#line 3220 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 47: /* DirectiveImplicitInput: DIRECTIVE_IMPLICIT IDENT InputOffset GenAttrOpt  */
#line 815 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        int64_t size = 0;
        ABORT_ON_FAIL(pBuilder->CISA_eval_sizeof_decl(CISAlineno, (yyvsp[-2].string), size));
        MUST_HOLD(size < 0x10000, "declaration size is too large");
        ABORT_ON_FAIL(pBuilder->CISA_input_directive((yyvsp[-2].string), (short)(yyvsp[-1].intval), (unsigned short)size, CISAlineno));
    }
#line 3231 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 48: /* InputOffset: %empty  */
#line 822 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                    {(yyval.intval) = 0;}
#line 3237 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 49: /* InputOffset: OFFSET_EQ IntExp  */
#line 822 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                                                 {(yyval.intval) = (yyvsp[0].intval);}
#line 3243 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 50: /* InputSize: SIZE_EQ IntExp  */
#line 823 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                          {(yyval.intval) = (yyvsp[0].intval);}
#line 3249 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 51: /* DirectiveAttr: DIRECTIVE_KERNEL_ATTR IDENT EQUALS STRING_LIT  */
#line 829 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                                                  {
        ABORT_ON_FAIL(pBuilder->CISA_attr_directive((yyvsp[-2].string), (yyvsp[0].string), CISAlineno));
    }
#line 3257 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 52: /* DirectiveAttr: DIRECTIVE_KERNEL_ATTR IDENT EQUALS IntExp  */
#line 833 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                                              {
        ABORT_ON_FAIL(pBuilder->CISA_attr_directiveNum((yyvsp[-2].string), (uint32_t)(yyvsp[0].intval), CISAlineno));
    }
#line 3265 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 53: /* DirectiveAttr: DIRECTIVE_KERNEL_ATTR IDENT  */
#line 837 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                                {
        ABORT_ON_FAIL(pBuilder->CISA_attr_directive((yyvsp[0].string), nullptr, CISAlineno));
    }
#line 3273 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 54: /* DirectiveAttr: DIRECTIVE_KERNEL_ATTR IDENT EQUALS  */
#line 841 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                                       {
        ABORT_ON_FAIL(pBuilder->CISA_attr_directive((yyvsp[-1].string), nullptr, CISAlineno));
    }
#line 3281 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 55: /* DirectiveFunc: DIRECTIVE_FUNC IdentOrStringLit  */
#line 847 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        ABORT_ON_FAIL(pBuilder->CISA_function_directive((yyvsp[0].string), CISAlineno));
    }
#line 3289 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 56: /* AlignAttrOpt: %empty  */
#line 852 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                     {(yyval.align) = ALIGN_BYTE;}
#line 3295 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 58: /* Align: ALIGN_EQ ALIGN_KEYWORD  */
#line 854 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                           { // 2GRF, 32word, ...
        (yyval.align) = (yyvsp[0].align);
    }
#line 3303 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 59: /* Align: ALIGN_EQ IDENT  */
#line 858 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                   { // e.g. byte, word, dword, qword, GRF, GRFx2
       if (!ParseAlign(pBuilder, (yyvsp[0].string), (yyval.align))) {
           PARSE_ERROR((yyvsp[0].string), ": invalid align value");
       }
    }
#line 3313 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 60: /* Align: ALIGN_EQ IntExp  */
#line 864 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                    {
        // e.g. %sizeof(GRF) or %sizeof(DECL)
        (yyval.align) = AlignBytesToVisaAlignment((int)(yyvsp[0].intval));
        if ((yyval.align) == ALIGN_UNDEF) {
            PARSE_ERROR("invalid align size (must be 1, 2, 4, 8, ..., 128)");
        }
    }
#line 3325 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 61: /* Align: ALIGN_EQ error  */
#line 872 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                   {
        PARSE_ERROR("syntax error in align attribute");
    }
#line 3333 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 62: /* AliasAttrOpt: %empty  */
#line 879 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
       (yyval.alias).aliasname = NULL;
       (yyval.alias).offset = 0;
    }
#line 3342 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 63: /* AliasAttrOpt: ALIAS_EQ LANGLE Var COMMA IntExpNRA RANGLE  */
#line 884 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
       (yyval.alias).aliasname = (yyvsp[-3].string);
       (yyval.alias).offset = (int)(yyvsp[-1].intval);
    }
#line 3351 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 64: /* AliasAttrOpt: ALIAS_EQ LANGLE error  */
#line 889 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
       PARSE_ERROR("syntax error in alias attribute");
    }
#line 3359 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 65: /* OneAttr: IDENT EQUALS IntExpNRA  */
#line 895 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
      (yyval.pattr_gen) = pBuilder->CISA_Create_Attr((yyvsp[-2].string), (yyvsp[0].intval), nullptr);
    }
#line 3367 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 66: /* OneAttr: IDENT EQUALS STRING_LIT  */
#line 899 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
      (yyval.pattr_gen) = pBuilder->CISA_Create_Attr((yyvsp[-2].string), 0, (yyvsp[0].string));
    }
#line 3375 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 67: /* OneAttr: IDENT  */
#line 903 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
      (yyval.pattr_gen) = pBuilder->CISA_Create_Attr((yyvsp[0].string), 0, nullptr);
    }
#line 3383 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 68: /* AttrOpt: AttrOpt COMMA OneAttr  */
#line 909 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
      AttrOptVar.push_back((yyvsp[0].pattr_gen));
    }
#line 3391 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 69: /* AttrOpt: OneAttr  */
#line 914 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
      AttrOptVar.push_back((yyvsp[0].pattr_gen));
    }
#line 3399 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 70: /* GenAttrOpt: %empty  */
#line 920 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        (yyval.intval) = 0;
    }
#line 3407 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 71: /* GenAttrOpt: ATTR_EQ LBRACE AttrOpt RBRACE  */
#line 924 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        (yyval.intval) = 1;
    }
#line 3415 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 124: /* Label: LABEL  */
#line 986 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
             {pBuilder->CISA_create_label((yyvsp[0].string), CISAlineno);}
#line 3421 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 125: /* LogicInstruction: Predicate BINARY_LOGIC_OP SatModOpt ExecSize VecDstOperand_G_I VecSrcOperand_G_I_IMM VecSrcOperand_G_I_IMM  */
#line 991 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        pBuilder->CISA_create_logic_instruction((yyvsp[-6].pred_reg), (yyvsp[-5].opcode), (yyvsp[-4].sat), (yyvsp[-3].emask_exec_size).emask, (yyvsp[-3].emask_exec_size).exec_size,
            (yyvsp[-2].genOperand).cisa_gen_opnd, (yyvsp[-1].genOperand).cisa_gen_opnd, (yyvsp[0].genOperand).cisa_gen_opnd, NULL, NULL, CISAlineno);
    }
#line 3430 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 126: /* LogicInstruction: Predicate BINARY_LOGIC_OP SatModOpt ExecSize PredVar PredVar PredVar  */
#line 997 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        pBuilder->CISA_create_logic_instruction((yyvsp[-5].opcode), (yyvsp[-3].emask_exec_size).emask, (yyvsp[-3].emask_exec_size).exec_size, (yyvsp[-2].vISADecl), (yyvsp[-1].vISADecl), (yyvsp[0].vISADecl), CISAlineno);
    }
#line 3438 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 127: /* LogicInstruction: Predicate TERNARY_LOGIC_OP SatModOpt ExecSize VecDstOperand_G_I VecSrcOperand_G_I_IMM VecSrcOperand_G_I_IMM VecSrcOperand_G_I_IMM  */
#line 1002 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        pBuilder->CISA_create_logic_instruction((yyvsp[-7].pred_reg), (yyvsp[-6].opcode), (yyvsp[-5].sat), (yyvsp[-4].emask_exec_size).emask, (yyvsp[-4].emask_exec_size).exec_size,
            (yyvsp[-3].genOperand).cisa_gen_opnd, (yyvsp[-2].genOperand).cisa_gen_opnd, (yyvsp[-1].genOperand).cisa_gen_opnd, (yyvsp[0].genOperand).cisa_gen_opnd, NULL, CISAlineno);
    }
#line 3447 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 128: /* LogicInstruction: Predicate QUATERNARY_LOGIC_OP SatModOpt ExecSize VecDstOperand_G_I VecSrcOperand_G_I_IMM VecSrcOperand_G_I_IMM VecSrcOperand_G_I_IMM VecSrcOperand_G_I_IMM  */
#line 1008 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        pBuilder->CISA_create_logic_instruction((yyvsp[-8].pred_reg), (yyvsp[-7].opcode), (yyvsp[-6].sat), (yyvsp[-5].emask_exec_size).emask, (yyvsp[-5].emask_exec_size).exec_size,
            (yyvsp[-4].genOperand).cisa_gen_opnd, (yyvsp[-3].genOperand).cisa_gen_opnd, (yyvsp[-2].genOperand).cisa_gen_opnd, (yyvsp[-1].genOperand).cisa_gen_opnd, (yyvsp[0].genOperand).cisa_gen_opnd, CISAlineno);
    }
#line 3456 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 129: /* UnaryLogicInstruction: Predicate UNARY_LOGIC_OP SatModOpt ExecSize VecDstOperand_G_I VecSrcOperand_G_I_IMM  */
#line 1015 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        pBuilder->CISA_create_logic_instruction((yyvsp[-5].pred_reg), (yyvsp[-4].opcode), (yyvsp[-3].sat), (yyvsp[-2].emask_exec_size).emask, (yyvsp[-2].emask_exec_size).exec_size,
            (yyvsp[-1].genOperand).cisa_gen_opnd, (yyvsp[0].genOperand).cisa_gen_opnd, NULL, NULL, NULL, CISAlineno);
    }
#line 3465 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 130: /* UnaryLogicInstruction: Predicate UNARY_LOGIC_OP SatModOpt ExecSize PredVar PredVar  */
#line 1021 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        pBuilder->CISA_create_logic_instruction((yyvsp[-4].opcode), (yyvsp[-2].emask_exec_size).emask, (yyvsp[-2].emask_exec_size).exec_size,
            (yyvsp[-1].vISADecl), (yyvsp[0].vISADecl), NULL, CISAlineno);
    }
#line 3474 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 131: /* MathInstruction_2OPND: Predicate MATH2_OP SatModOpt ExecSize VecDstOperand_G_I VecSrcOperand_G_I_IMM  */
#line 1028 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        pBuilder->CISA_create_math_instruction((yyvsp[-5].pred_reg), (yyvsp[-4].opcode), (yyvsp[-3].sat), (yyvsp[-2].emask_exec_size).emask, (yyvsp[-2].emask_exec_size).exec_size,
            (yyvsp[-1].genOperand).cisa_gen_opnd, (yyvsp[0].genOperand).cisa_gen_opnd, NULL, CISAlineno);
    }
#line 3483 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 132: /* MathInstruction_3OPND: Predicate MATH3_OP SatModOpt ExecSize VecDstOperand_G_I VecSrcOperand_G_I_IMM VecSrcOperand_G_I_IMM  */
#line 1035 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        pBuilder->CISA_create_math_instruction((yyvsp[-6].pred_reg), (yyvsp[-5].opcode), (yyvsp[-4].sat), (yyvsp[-3].emask_exec_size).emask, (yyvsp[-3].emask_exec_size).exec_size,
            (yyvsp[-2].genOperand).cisa_gen_opnd, (yyvsp[-1].genOperand).cisa_gen_opnd, (yyvsp[0].genOperand).cisa_gen_opnd, CISAlineno);
    }
#line 3492 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 133: /* ArithInstruction_2OPND: Predicate ARITH2_OP SatModOpt ExecSize VecDstOperand_G_I VecSrcOperand_G_I_IMM  */
#line 1042 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        pBuilder->CISA_create_arith_instruction((yyvsp[-5].pred_reg), (yyvsp[-4].opcode), (yyvsp[-3].sat), (yyvsp[-2].emask_exec_size).emask, (yyvsp[-2].emask_exec_size).exec_size,
            (yyvsp[-1].genOperand).cisa_gen_opnd, (yyvsp[0].genOperand).cisa_gen_opnd, NULL, NULL, CISAlineno);
    }
#line 3501 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 134: /* ArithInstruction_3OPND: Predicate ARITH3_OP SatModOpt ExecSize VecDstOperand_G_I VecSrcOperand_G_I_IMM VecSrcOperand_G_I_IMM  */
#line 1049 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        MUST_HOLD(!(((yyvsp[-5].opcode) == ISA_LINE) && ((yyvsp[-1].genOperand).type == OPERAND_IMMEDIATE || (yyvsp[-1].genOperand).type == OPERAND_INDIRECT)),
            "wrong type of src0 operand");
        pBuilder->CISA_create_arith_instruction(
            (yyvsp[-6].pred_reg), (yyvsp[-5].opcode), (yyvsp[-4].sat), (yyvsp[-3].emask_exec_size).emask, (yyvsp[-3].emask_exec_size).exec_size,
            (yyvsp[-2].genOperand).cisa_gen_opnd, (yyvsp[-1].genOperand).cisa_gen_opnd, (yyvsp[0].genOperand).cisa_gen_opnd, NULL, CISAlineno);
    }
#line 3513 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 135: /* ArithInstruction_4OPND: Predicate ARITH4_OP SatModOpt ExecSize VecDstOperand_G_I VecSrcOperand_G_I_IMM VecSrcOperand_G_I_IMM VecSrcOperand_G_I_IMM  */
#line 1061 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
     {
         pBuilder->CISA_create_arith_instruction((yyvsp[-7].pred_reg), (yyvsp[-6].opcode), (yyvsp[-5].sat), (yyvsp[-4].emask_exec_size).emask, (yyvsp[-4].emask_exec_size).exec_size,
            (yyvsp[-3].genOperand).cisa_gen_opnd, (yyvsp[-2].genOperand).cisa_gen_opnd, (yyvsp[-1].genOperand).cisa_gen_opnd, (yyvsp[0].genOperand).cisa_gen_opnd, CISAlineno);
     }
#line 3522 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 136: /* ArithInstruction_4OPND: Predicate ARITH4_OP2 ExecSize VecDstOperand_G_I VecDstOperand_G_I VecSrcOperand_G_I_IMM VecSrcOperand_G_I_IMM  */
#line 1068 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
     {
        pBuilder->CISA_create_arith_instruction2((yyvsp[-6].pred_reg), (yyvsp[-5].opcode), (yyvsp[-4].emask_exec_size).emask, (yyvsp[-4].emask_exec_size).exec_size,
            (yyvsp[-3].genOperand).cisa_gen_opnd, (yyvsp[-2].genOperand).cisa_gen_opnd, (yyvsp[-1].genOperand).cisa_gen_opnd, (yyvsp[0].genOperand).cisa_gen_opnd, CISAlineno);
     }
#line 3531 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 137: /* DpasInstruction: DPAS_OP ExecSize RawOperand RawOperand RawOperand VecSrcOpndSimple  */
#line 1077 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        pBuilder->CISA_create_dpas_instruction(
            (yyvsp[-5].dpas_info).opcode, (yyvsp[-4].emask_exec_size).emask, (yyvsp[-4].emask_exec_size).exec_size,
            (yyvsp[-3].RawVar), (yyvsp[-2].RawVar), (yyvsp[-1].RawVar), (yyvsp[0].genOperand).cisa_gen_opnd,
            (yyvsp[-5].dpas_info).src2Precision, (yyvsp[-5].dpas_info).src1Precision, (yyvsp[-5].dpas_info).depth, (yyvsp[-5].dpas_info).count, CISAlineno);
    }
#line 3542 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 138: /* BfnInstruction: Predicate BFN_OP SatModOpt ExecSize VecDstOperand_G_I VecSrcOperand_G_I_IMM VecSrcOperand_G_I_IMM VecSrcOperand_G_I_IMM  */
#line 1087 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        pBuilder->CISA_create_bfn_instruction((yyvsp[-7].pred_reg), (yyvsp[-6].bfn_info).func_ctrl , (yyvsp[-5].sat), (yyvsp[-4].emask_exec_size).emask, (yyvsp[-4].emask_exec_size).exec_size,
            (yyvsp[-3].genOperand).cisa_gen_opnd, (yyvsp[-2].genOperand).cisa_gen_opnd, (yyvsp[-1].genOperand).cisa_gen_opnd, (yyvsp[0].genOperand).cisa_gen_opnd, CISAlineno);
    }
#line 3551 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 139: /* QwScatterInstruction: Predicate QW_SCATTER_OP DOT DEC_LIT ExecSize Var RawOperand RawOperand  */
#line 1093 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        ABORT_ON_FAIL(pBuilder->CISA_create_qword_scatter_instruction(
            (yyvsp[-6].opcode), (yyvsp[-7].pred_reg), (yyvsp[-3].emask_exec_size).emask, (yyvsp[-3].emask_exec_size).exec_size, (uint32_t)(yyvsp[-4].intval), (yyvsp[-2].string), (yyvsp[-1].RawVar), (yyvsp[0].RawVar), CISAlineno));
    }
#line 3560 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 140: /* FCvtInstruction: FCVT_OP SatModOpt ExecSize VecDstOperand_G VecSrcOperand_G_IMM  */
#line 1100 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        pBuilder->CISA_create_fcvt_instruction((yyvsp[-3].sat), (yyvsp[-2].emask_exec_size).emask, (yyvsp[-2].emask_exec_size).exec_size, (yyvsp[-1].genOperand).cisa_gen_opnd, (yyvsp[0].genOperand).cisa_gen_opnd, CISAlineno);
    }
#line 3568 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 141: /* AntiTrigInstruction: Predicate ANTI_TRIG_OP SatModOpt ExecSize VecDstOperand_G_I VecSrcOperand_G_I_IMM  */
#line 1106 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        pBuilder->CISA_create_invtri_inst((yyvsp[-5].pred_reg), (yyvsp[-4].opcode), (yyvsp[-3].sat), (yyvsp[-2].emask_exec_size).emask, (yyvsp[-2].emask_exec_size).exec_size,
            (yyvsp[-1].genOperand).cisa_gen_opnd, (yyvsp[0].genOperand).cisa_gen_opnd, CISAlineno);
    }
#line 3577 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 142: /* AddrAddInstruction: ADDR_ADD_OP ExecSize VecDstOperand_A VecSrcOperand_G_A_AO VecSrcOperand_G_IMM_AO  */
#line 1115 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        // a grammatically problematic instruction
        //   addr_add (M1_NM, 1) A0(0)<1> &V127 - 0x10...
        //                                        ^^^^ next operand or V127 offset
        pBuilder->CISA_create_address_instruction((yyvsp[-4].opcode), (yyvsp[-3].emask_exec_size).emask, (yyvsp[-3].emask_exec_size).exec_size,
            (yyvsp[-2].genOperand).cisa_gen_opnd, (yyvsp[-1].genOperand).cisa_gen_opnd, (yyvsp[0].genOperand).cisa_gen_opnd, CISAlineno);
    }
#line 3589 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 143: /* SetpInstruction: SETP_OP ExecSize PredVar VecSrcOperand_G_I_IMM  */
#line 1125 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        pBuilder->CISA_create_setp_instruction(
            (yyvsp[-3].opcode), (yyvsp[-2].emask_exec_size).emask, (yyvsp[-2].emask_exec_size).exec_size, (yyvsp[-1].vISADecl), (yyvsp[0].genOperand).cisa_gen_opnd, CISAlineno);
    }
#line 3598 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 144: /* SelInstruction: Predicate SEL_OP SatModOpt ExecSize VecDstOperand_G_I VecSrcOperand_G_I_IMM VecSrcOperand_G_I_IMM  */
#line 1132 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        pBuilder->CISA_create_sel_instruction((yyvsp[-5].opcode), (yyvsp[-4].sat), (yyvsp[-6].pred_reg), (yyvsp[-3].emask_exec_size).emask, (yyvsp[-3].emask_exec_size).exec_size,
            (yyvsp[-2].genOperand).cisa_gen_opnd, (yyvsp[-1].genOperand).cisa_gen_opnd, (yyvsp[0].genOperand).cisa_gen_opnd, CISAlineno);
    }
#line 3607 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 145: /* MinInstruction: Predicate MIN_OP SatModOpt ExecSize VecDstOperand_G_I VecSrcOperand_G_I_IMM VecSrcOperand_G_I_IMM  */
#line 1139 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        pBuilder->CISA_create_fminmax_instruction(0, ISA_FMINMAX, (yyvsp[-4].sat), (yyvsp[-6].pred_reg), (yyvsp[-3].emask_exec_size).emask, (yyvsp[-3].emask_exec_size).exec_size,
            (yyvsp[-2].genOperand).cisa_gen_opnd, (yyvsp[-1].genOperand).cisa_gen_opnd, (yyvsp[0].genOperand).cisa_gen_opnd, CISAlineno);
    }
#line 3616 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 146: /* MaxInstruction: Predicate MAX_OP SatModOpt ExecSize VecDstOperand_G_I VecSrcOperand_G_I_IMM VecSrcOperand_G_I_IMM  */
#line 1147 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        pBuilder->CISA_create_fminmax_instruction(
            1, ISA_FMINMAX, (yyvsp[-4].sat), (yyvsp[-6].pred_reg), (yyvsp[-3].emask_exec_size).emask, (yyvsp[-3].emask_exec_size).exec_size,
            (yyvsp[-2].genOperand).cisa_gen_opnd, (yyvsp[-1].genOperand).cisa_gen_opnd, (yyvsp[0].genOperand).cisa_gen_opnd, CISAlineno);
    }
#line 3626 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 147: /* MovInstruction: Predicate MOV_OP SatModOpt ExecSize VecDstOperand_G_I VecSrcOperand_G_I_IMM_A_AO  */
#line 1156 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        ABORT_ON_FAIL(pBuilder->CISA_create_mov_instruction(
            (yyvsp[-5].pred_reg), (yyvsp[-4].opcode), (yyvsp[-2].emask_exec_size).emask, (yyvsp[-2].emask_exec_size).exec_size, (yyvsp[-3].sat),
            (yyvsp[-1].genOperand).cisa_gen_opnd, (yyvsp[0].genOperand).cisa_gen_opnd, CISAlineno));
    }
#line 3636 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 148: /* MovInstruction: Predicate MOV_OP SatModOpt ExecSize VecDstOperand_A VecSrcOperand_G_I_IMM_A_AO  */
#line 1163 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        pBuilder->CISA_create_mov_instruction(
            (yyvsp[-5].pred_reg), (yyvsp[-4].opcode), (yyvsp[-2].emask_exec_size).emask, (yyvsp[-2].emask_exec_size).exec_size, (yyvsp[-3].sat),
            (yyvsp[-1].genOperand).cisa_gen_opnd, (yyvsp[0].genOperand).cisa_gen_opnd, CISAlineno);
    }
#line 3646 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 149: /* MovInstruction: Predicate MOV_OP SatModOpt ExecSize VecDstOperand_G_I PredVar  */
#line 1170 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        ABORT_ON_FAIL(pBuilder->CISA_create_mov_instruction((yyvsp[-1].genOperand).cisa_gen_opnd, (yyvsp[0].vISADecl), CISAlineno));
    }
#line 3654 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 150: /* BreakpointInstruction: BREAKPOINT_OP  */
#line 1176 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
      pBuilder->CISA_create_breakpoint_instruction(CISAlineno);
    }
#line 3662 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 151: /* MovsInstruction: MOVS_OP ExecSize DstStateOperand SrcStateOperand  */
#line 1182 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        pBuilder->CISA_create_movs_instruction((yyvsp[-2].emask_exec_size).emask, ISA_MOVS, (yyvsp[-2].emask_exec_size).exec_size,
            (yyvsp[-1].StateVar).cisa_gen_opnd, (yyvsp[0].StateVar).cisa_gen_opnd, CISAlineno);
    }
#line 3671 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 152: /* MovsInstruction: MOVS_OP ExecSize VecDstOperand_G SrcStateOperand  */
#line 1188 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        pBuilder->CISA_create_movs_instruction((yyvsp[-2].emask_exec_size).emask, ISA_MOVS, (yyvsp[-2].emask_exec_size).exec_size,
            (yyvsp[-1].genOperand).cisa_gen_opnd, (yyvsp[0].StateVar).cisa_gen_opnd, CISAlineno);
    }
#line 3680 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 153: /* MovsInstruction: MOVS_OP ExecSize DstStateOperand VecSrcOperand_G_I_IMM  */
#line 1194 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        pBuilder->CISA_create_movs_instruction((yyvsp[-2].emask_exec_size).emask, ISA_MOVS, (yyvsp[-2].emask_exec_size).exec_size,
            (yyvsp[-1].StateVar).cisa_gen_opnd, (yyvsp[0].genOperand).cisa_gen_opnd, CISAlineno);
    }
#line 3689 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 154: /* CmpInstruction: CMP_OP ConditionalModifier ExecSize PredVar VecSrcOperand_G_I_IMM VecSrcOperand_G_I_IMM  */
#line 1212 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        pBuilder->CISA_create_cmp_instruction((yyvsp[-4].cond_mod), (yyvsp[-3].emask_exec_size).emask, (yyvsp[-3].emask_exec_size).exec_size,
            (yyvsp[-2].vISADecl), (yyvsp[-1].genOperand).cisa_gen_opnd, (yyvsp[0].genOperand).cisa_gen_opnd, CISAlineno);
    }
#line 3698 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 155: /* CmpInstruction: CMP_OP ConditionalModifier ExecSize VecDstOperand_G_I VecSrcOperand_G_I_IMM VecSrcOperand_G_I_IMM  */
#line 1219 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        // NOTE: predication not permitted.  Apparently the vISA API doesn't allow for predicated compares
        pBuilder->CISA_create_cmp_instruction(
            (yyvsp[-4].cond_mod), ISA_CMP, (yyvsp[-3].emask_exec_size).emask, (yyvsp[-3].emask_exec_size).exec_size,
            (yyvsp[-2].genOperand).cisa_gen_opnd, (yyvsp[-1].genOperand).cisa_gen_opnd, (yyvsp[0].genOperand).cisa_gen_opnd, CISAlineno);
    }
#line 3709 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 156: /* MediaInstruction: MEDIA_OP MEDIA_MODE TwoDimOffset Var MediaInstructionPlaneID VecSrcOperand_G_I_IMM VecSrcOperand_G_I_IMM RawOperand  */
#line 1229 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        ABORT_ON_FAIL(pBuilder->CISA_create_media_instruction(
            (yyvsp[-7].opcode), (yyvsp[-6].media_mode), (yyvsp[-5].offset).row, (yyvsp[-5].offset).elem, (int)(yyvsp[-3].intval), (yyvsp[-4].string),
            (yyvsp[-2].genOperand).cisa_gen_opnd, (yyvsp[-1].genOperand).cisa_gen_opnd, (yyvsp[0].RawVar), CISAlineno));
    }
#line 3719 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 157: /* MediaInstruction: MEDIA_OP MEDIA_MODE TwoDimOffset Var VecSrcOperand_G_I_IMM VecSrcOperand_G_I_IMM RawOperand  */
#line 1237 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        ABORT_ON_FAIL(pBuilder->CISA_create_media_instruction(
            (yyvsp[-6].opcode), (yyvsp[-5].media_mode), (yyvsp[-4].offset).row, (yyvsp[-4].offset).elem, (int)0, (yyvsp[-3].string),
            (yyvsp[-2].genOperand).cisa_gen_opnd, (yyvsp[-1].genOperand).cisa_gen_opnd, (yyvsp[0].RawVar), CISAlineno));
    }
#line 3729 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 158: /* MediaInstructionPlaneID: DEC_LIT  */
#line 1243 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                                 {
        MUST_HOLD((yyvsp[0].intval) <= 0xF, "PlaneID must less than 0xF");
        (yyval.intval) = (yyvsp[0].intval);
    }
#line 3738 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 159: /* ScatterInstruction: SCATTER_OP ElemNum ExecSize OwordModifier Var VecSrcOperand_G_I_IMM RawOperand RawOperand  */
#line 1251 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        ABORT_ON_FAIL(pBuilder->CISA_create_scatter_instruction(
            (yyvsp[-7].opcode), (int)(yyvsp[-6].intval), (yyvsp[-5].emask_exec_size).emask, (yyvsp[-5].emask_exec_size).exec_size, (yyvsp[-4].oword_mod), (yyvsp[-3].string),
            (yyvsp[-2].genOperand).cisa_gen_opnd, (yyvsp[-1].RawVar), (yyvsp[0].RawVar), CISAlineno));
    }
#line 3748 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 160: /* ScatterTypedInstruction: Predicate SCATTER_TYPED_OP SAMPLER_CHANNEL ExecSize Var RawOperand RawOperand RawOperand RawOperand RawOperand  */
#line 1260 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        ABORT_ON_FAIL(pBuilder->CISA_create_scatter4_typed_instruction(
            (yyvsp[-8].opcode), (yyvsp[-9].pred_reg), ChannelMask::createFromAPI((yyvsp[-7].s_channel)), (yyvsp[-6].emask_exec_size).emask, (yyvsp[-6].emask_exec_size).exec_size, (yyvsp[-5].string),
            (yyvsp[-4].RawVar), (yyvsp[-3].RawVar), (yyvsp[-2].RawVar), (yyvsp[-1].RawVar), (yyvsp[0].RawVar), CISAlineno));
    }
#line 3758 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 161: /* Scatter4ScaledInstruction: Predicate SCATTER4_SCALED_OP SAMPLER_CHANNEL ExecSize Var VecSrcOperand_G_I_IMM RawOperand RawOperand  */
#line 1269 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        ABORT_ON_FAIL(pBuilder->CISA_create_scatter4_scaled_instruction(
            (yyvsp[-6].opcode), (yyvsp[-7].pred_reg), (yyvsp[-4].emask_exec_size).emask, (yyvsp[-4].emask_exec_size).exec_size, ChannelMask::createFromAPI((yyvsp[-5].s_channel)), (yyvsp[-3].string),
            (yyvsp[-2].genOperand).cisa_gen_opnd, (yyvsp[-1].RawVar), (yyvsp[0].RawVar), CISAlineno));
    }
#line 3768 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 162: /* ScatterScaledInstruction: Predicate SCATTER_SCALED_OP DOT DEC_LIT ExecSize Var VecSrcOperand_G_I_IMM RawOperand RawOperand  */
#line 1278 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        ABORT_ON_FAIL(pBuilder->CISA_create_scatter_scaled_instruction(
            (yyvsp[-7].opcode), (yyvsp[-8].pred_reg), (yyvsp[-4].emask_exec_size).emask, (yyvsp[-4].emask_exec_size).exec_size, (uint32_t) (yyvsp[-5].intval), (yyvsp[-3].string),
            (yyvsp[-2].genOperand).cisa_gen_opnd, (yyvsp[-1].RawVar), (yyvsp[0].RawVar), CISAlineno));
    }
#line 3778 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 163: /* SynchronizationInstruction: BARRIER_OP  */
#line 1285 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
               {
        pBuilder->CISA_create_sync_instruction((yyvsp[0].opcode), CISAlineno);
    }
#line 3786 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 164: /* SynchronizationInstruction: SBARRIER_SIGNAL  */
#line 1288 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                      {
        pBuilder->CISA_create_sbarrier_instruction(true, CISAlineno);
    }
#line 3794 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 165: /* SynchronizationInstruction: SBARRIER_WAIT  */
#line 1291 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                    {
        pBuilder->CISA_create_sbarrier_instruction(false, CISAlineno);
    }
#line 3802 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 166: /* SynchronizationInstruction: NBARRIER_SIGNAL VecSrcOperand_G_I_IMM VecSrcOperand_G_I_IMM  */
#line 1294 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                                                                  {
        pBuilder->CISA_create_nbarrier(false, (yyvsp[-1].genOperand).cisa_gen_opnd, (yyvsp[0].genOperand).cisa_gen_opnd, CISAlineno);
    }
#line 3810 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 167: /* SynchronizationInstruction: NBARRIER_WAIT VecSrcOperand_G_I_IMM  */
#line 1297 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                                          {
        pBuilder->CISA_create_nbarrier(true, (yyvsp[0].genOperand).cisa_gen_opnd, NULL, CISAlineno);
    }
#line 3818 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 168: /* DwordAtomicInstruction: Predicate DWORD_ATOMIC_OP ATOMIC_SUB_OP Atomic16Opt ExecSize Var RawOperand RawOperand RawOperand RawOperand  */
#line 1303 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        ABORT_ON_FAIL(pBuilder->CISA_create_dword_atomic_instruction(
            (yyvsp[-9].pred_reg), (yyvsp[-7].atomic_op), (yyvsp[-6].flag), (yyvsp[-5].emask_exec_size).emask, (yyvsp[-5].emask_exec_size).exec_size, (yyvsp[-4].string), (yyvsp[-3].RawVar), (yyvsp[-2].RawVar), (yyvsp[-1].RawVar), (yyvsp[0].RawVar), CISAlineno));
    }
#line 3827 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 169: /* TypedAtomicInstruction: Predicate TYPED_ATOMIC_OP ATOMIC_SUB_OP Atomic16Opt ExecSize Var RawOperand RawOperand RawOperand RawOperand RawOperand RawOperand RawOperand  */
#line 1310 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        ABORT_ON_FAIL(pBuilder->CISA_create_typed_atomic_instruction(
            (yyvsp[-12].pred_reg), (yyvsp[-10].atomic_op), (yyvsp[-9].flag), (yyvsp[-8].emask_exec_size).emask, (yyvsp[-8].emask_exec_size).exec_size, (yyvsp[-7].string),
            (yyvsp[-6].RawVar), (yyvsp[-5].RawVar), (yyvsp[-4].RawVar), (yyvsp[-3].RawVar), (yyvsp[-2].RawVar), (yyvsp[-1].RawVar), (yyvsp[0].RawVar), CISAlineno));
    }
#line 3837 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 170: /* Atomic16Opt: %empty  */
#line 1317 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
             {(yyval.flag) = false;}
#line 3843 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 171: /* Atomic16Opt: DOT DEC_LIT  */
#line 1318 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                  { // .16
        MUST_HOLD(((yyvsp[0].intval) == 16), "only supports 16");
        (yyval.flag) = true;
    }
#line 3852 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 172: /* SampleUnormInstruction: SAMPLE_UNORM_OP SAMPLER_CHANNEL CHANNEL_OUTPUT Var Var VecSrcOperand_G_I_IMM VecSrcOperand_G_I_IMM VecSrcOperand_G_I_IMM VecSrcOperand_G_I_IMM RawOperand  */
#line 1325 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        ABORT_ON_FAIL(pBuilder->CISA_create_sampleunorm_instruction(
            (yyvsp[-9].opcode), ChannelMask::createFromAPI((yyvsp[-8].s_channel)), (yyvsp[-7].s_channel_output), (yyvsp[-6].string), (yyvsp[-5].string),
            (yyvsp[-4].genOperand).cisa_gen_opnd, (yyvsp[-3].genOperand).cisa_gen_opnd, (yyvsp[-2].genOperand).cisa_gen_opnd, (yyvsp[-1].genOperand).cisa_gen_opnd, (yyvsp[0].RawVar), CISAlineno));
    }
#line 3862 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 173: /* SampleInstruction: SAMPLE_OP SAMPLER_CHANNEL SIMDMode Var Var RawOperand RawOperand RawOperand RawOperand  */
#line 1338 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        ABORT_ON_FAIL(pBuilder->CISA_create_sample_instruction(
            (yyvsp[-8].opcode), ChannelMask::createFromAPI((yyvsp[-7].s_channel)), (int)(yyvsp[-6].intval), (yyvsp[-5].string), (yyvsp[-4].string),
            (yyvsp[-3].RawVar), (yyvsp[-2].RawVar), (yyvsp[-1].RawVar), (yyvsp[0].RawVar), CISAlineno));
    }
#line 3872 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 174: /* SampleInstruction: SAMPLE_OP SAMPLER_CHANNEL SIMDMode Var RawOperand RawOperand RawOperand RawOperand  */
#line 1346 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
   {
       ABORT_ON_FAIL(pBuilder->CISA_create_sample_instruction(
           (yyvsp[-7].opcode), ChannelMask::createFromAPI((yyvsp[-6].s_channel)), (int)(yyvsp[-5].intval), "", (yyvsp[-4].string),
           (yyvsp[-3].RawVar), (yyvsp[-2].RawVar), (yyvsp[-1].RawVar), (yyvsp[0].RawVar), CISAlineno));
   }
#line 3882 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 175: /* SamplerAddrOperand: Var  */
#line 1353 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                     {
                      (yyval.sampler_base) = {(yyvsp[0].string), (unsigned int)0};
                     }
#line 3890 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 176: /* SamplerAddrOperand: LPAREN Var COMMA IntExpPrim RPAREN  */
#line 1358 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                     {
                      (yyval.sampler_base) = {(yyvsp[-3].string), (unsigned int)(yyvsp[-1].intval)};
                     }
#line 3898 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 177: /* Sample3dInstruction: Predicate SAMPLE_3D_OP PixelNullMaskEnableOpt CPSEnableOpt NonUniformSamplerEnableOpt SAMPLER_CHANNEL ExecSize VecSrcOperand_G_I_IMM SamplerAddrOperand SamplerAddrOperand RawOperand RawOperand RawOperandArray  */
#line 1369 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
   {
       const bool success = pBuilder->create3DSampleInstruction(
           (yyvsp[-12].pred_reg), (yyvsp[-11].sample3DOp), (yyvsp[-10].pixel_null_mask), (yyvsp[-9].cps), (yyvsp[-8].non_uniform_sampler), ChannelMask::createFromAPI((yyvsp[-7].s_channel)),
           (yyvsp[-6].emask_exec_size).emask, (yyvsp[-6].emask_exec_size).exec_size, (yyvsp[-5].genOperand).cisa_gen_opnd, (yyvsp[-4].sampler_base).base, (yyvsp[-4].sampler_base).offset,
           (yyvsp[-3].sampler_base).base, (yyvsp[-3].sampler_base).offset,
           (yyvsp[-1].RawVar), (yyvsp[-2].RawVar), (unsigned int)(yyvsp[0].intval), rawOperandArray, CISAlineno);

    ABORT_ON_FAIL(success);
   }
#line 3912 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 178: /* CPSEnableOpt: %empty  */
#line 1379 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                     {(yyval.cps) = false;}
#line 3918 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 179: /* CPSEnableOpt: CPS  */
#line 1379 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                                          {(yyval.cps) = true;}
#line 3924 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 180: /* NonUniformSamplerEnableOpt: %empty  */
#line 1381 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                                   {(yyval.non_uniform_sampler) = false;}
#line 3930 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 181: /* NonUniformSamplerEnableOpt: NON_UNIFORM_SAMPLER  */
#line 1381 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                                                                       {(yyval.non_uniform_sampler) = true;}
#line 3936 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 182: /* Load3dInstruction: Predicate LOAD_3D_OP PixelNullMaskEnableOpt SAMPLER_CHANNEL ExecSize VecSrcOperand_G_I_IMM SamplerAddrOperand RawOperand RawOperand RawOperandArray  */
#line 1391 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
   {
       const bool success = pBuilder->create3DLoadInstruction(
           (yyvsp[-9].pred_reg), (yyvsp[-8].sample3DOp), (yyvsp[-7].pixel_null_mask), ChannelMask::createFromAPI((yyvsp[-6].s_channel)),
           (yyvsp[-5].emask_exec_size).emask, (yyvsp[-5].emask_exec_size).exec_size, (yyvsp[-4].genOperand).cisa_gen_opnd, (yyvsp[-3].sampler_base).base, (yyvsp[-3].sampler_base).offset,
           (yyvsp[-1].RawVar), (yyvsp[-2].RawVar), (unsigned int)(yyvsp[0].intval), rawOperandArray, CISAlineno);

    ABORT_ON_FAIL(success);
   }
#line 3949 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 183: /* Gather43dInstruction: Predicate SAMPLE4_3D_OP PixelNullMaskEnableOpt SAMPLER_CHANNEL ExecSize VecSrcOperand_G_I_IMM SamplerAddrOperand SamplerAddrOperand RawOperand RawOperand RawOperandArray  */
#line 1408 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
   {
       const bool success = pBuilder->createSample4Instruction(
          (yyvsp[-10].pred_reg), (yyvsp[-9].sample3DOp), (yyvsp[-8].pixel_null_mask), ChannelMask::createFromAPI((yyvsp[-7].s_channel)), (yyvsp[-6].emask_exec_size).emask, (yyvsp[-6].emask_exec_size).exec_size,
          (yyvsp[-5].genOperand).cisa_gen_opnd, (yyvsp[-4].sampler_base).base, (yyvsp[-4].sampler_base).offset, (yyvsp[-3].sampler_base).base, (yyvsp[-3].sampler_base).offset,
           (yyvsp[-1].RawVar), (yyvsp[-2].RawVar),
          (unsigned int)(yyvsp[0].intval), rawOperandArray, CISAlineno);

    ABORT_ON_FAIL(success);
   }
#line 3963 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 184: /* PixelNullMaskEnableOpt: %empty  */
#line 1419 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                               {(yyval.pixel_null_mask) = false;}
#line 3969 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 185: /* PixelNullMaskEnableOpt: PIXEL_NULL_MASK  */
#line 1419 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                                                               {(yyval.pixel_null_mask) = true;}
#line 3975 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 186: /* ResInfo3dInstruction: RESINFO_OP_3D SAMPLER_CHANNEL ExecSize SamplerAddrOperand RawOperand RawOperand  */
#line 1423 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
   {
        ABORT_ON_FAIL(pBuilder->CISA_create_info_3d_instruction(
            VISA_3D_RESINFO, (yyvsp[-3].emask_exec_size).emask, (yyvsp[-3].emask_exec_size).exec_size,
            ChannelMask::createFromAPI((yyvsp[-4].s_channel)), (yyvsp[-2].sampler_base).base, (yyvsp[-2].sampler_base).offset, (yyvsp[-1].RawVar), (yyvsp[0].RawVar), CISAlineno));
   }
#line 3985 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 187: /* SampleInfo3dInstruction: SAMPLEINFO_OP_3D SAMPLER_CHANNEL ExecSize SamplerAddrOperand RawOperand  */
#line 1431 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
   {
        ABORT_ON_FAIL(pBuilder->CISA_create_info_3d_instruction(
            VISA_3D_SAMPLEINFO, (yyvsp[-2].emask_exec_size).emask, (yyvsp[-2].emask_exec_size).exec_size,
            ChannelMask::createFromAPI((yyvsp[-3].s_channel)), (yyvsp[-1].sampler_base).base, (yyvsp[-1].sampler_base).offset, NULL, (yyvsp[0].RawVar), CISAlineno));
   }
#line 3995 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 188: /* RTWriteOperands: %empty  */
#line 1439 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
    }
#line 4002 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 189: /* RTWriteOperands: RTWriteOperands VecSrcOperand_G_IMM  */
#line 1442 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        RTRWOperandsVec.push_back((yyvsp[0].genOperand).cisa_gen_opnd);
    }
#line 4010 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 190: /* RTWriteOperands: RTWriteOperands RawOperand  */
#line 1446 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        RTRWOperandsVec.push_back((yyvsp[0].RawVar));
    }
#line 4018 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 191: /* RTWriteInstruction: Predicate RTWRITE_OP_3D RTWriteModeOpt ExecSize Var RTWriteOperands  */
#line 1454 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
   {
       bool result = pBuilder->CISA_create_rtwrite_3d_instruction(
           (yyvsp[-5].pred_reg), (yyvsp[-3].string), (yyvsp[-2].emask_exec_size).emask, (unsigned int)(yyvsp[-2].emask_exec_size).exec_size, (yyvsp[-1].string),
           RTRWOperandsVec, CISAlineno);
       RTRWOperandsVec.clear();
       if (!result)
           YYABORT; // already reported
   }
#line 4031 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 192: /* RTWriteModeOpt: %empty  */
#line 1464 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                       {(yyval.string) = 0;}
#line 4037 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 194: /* URBWriteInstruction: Predicate URBWRITE_OP_3D ExecSize DEC_LIT DEC_LIT RawOperand RawOperand RawOperand RawOperand  */
#line 1469 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        pBuilder->CISA_create_urb_write_3d_instruction(
            (yyvsp[-8].pred_reg), (yyvsp[-6].emask_exec_size).emask, (unsigned int)(yyvsp[-6].emask_exec_size).exec_size, (unsigned int)(yyvsp[-5].intval), (unsigned int)(yyvsp[-4].intval),
            (yyvsp[-3].RawVar), (yyvsp[-2].RawVar), (yyvsp[-1].RawVar), (yyvsp[0].RawVar), CISAlineno);
    }
#line 4047 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 195: /* AVSInstruction: AVS_OP SAMPLER_CHANNEL Var Var VecSrcOperand_G_I_IMM VecSrcOperand_G_I_IMM VecSrcOperand_G_I_IMM VecSrcOperand_G_I_IMM VecSrcOperand_G_I_IMM VecSrcOperand_G_I_IMM VecSrcOperand_G_I_IMM CNTRL VecSrcOperand_G_I_IMM EXECMODE VecSrcOperand_G_I_IMM RawOperand  */
#line 1477 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        pBuilder->CISA_create_avs_instruction(
            ChannelMask::createFromAPI((yyvsp[-14].s_channel)), (yyvsp[-13].string), (yyvsp[-12].string),
            (yyvsp[-11].genOperand).cisa_gen_opnd, (yyvsp[-10].genOperand).cisa_gen_opnd, (yyvsp[-9].genOperand).cisa_gen_opnd, (yyvsp[-8].genOperand).cisa_gen_opnd,
            (yyvsp[-7].genOperand).cisa_gen_opnd, (yyvsp[-6].genOperand).cisa_gen_opnd, (yyvsp[-5].genOperand).cisa_gen_opnd, (yyvsp[-4].cntrl), (yyvsp[-3].genOperand).cisa_gen_opnd,
            (yyvsp[-2].execMode), (yyvsp[-1].genOperand).cisa_gen_opnd, (yyvsp[0].RawVar), CISAlineno);
    }
#line 4059 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 196: /* VMEInstruction: VME_IME_OP VMEOpndIME Var RawOperand RawOperand RawOperand RawOperand RawOperand RawOperand  */
#line 1489 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
   {
       //     1 - OP
       //     2 - StreamMode, SearchCtrl
       //     3 - Surface
       //     4 - UNIInput
       //     5 - IMEInput
       //     6 - ref0
       //     7 - ref1
       //     8 - CostCenter
       //     9 - Output
        ABORT_ON_FAIL(pBuilder->CISA_create_vme_ime_instruction(
            (yyvsp[-8].opcode), (yyvsp[-7].vmeOpndIvb).streamMode, (yyvsp[-7].vmeOpndIvb).searchCtrl, (yyvsp[-5].RawVar), (yyvsp[-4].RawVar), (yyvsp[-6].string), (yyvsp[-3].RawVar), (yyvsp[-2].RawVar), (yyvsp[-1].RawVar), (yyvsp[0].RawVar), CISAlineno));
   }
#line 4077 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 197: /* VMEInstruction: VME_SIC_OP Var RawOperand RawOperand RawOperand  */
#line 1505 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
   {
        ABORT_ON_FAIL(pBuilder->CISA_create_vme_sic_instruction((yyvsp[-4].opcode), (yyvsp[-2].RawVar), (yyvsp[-1].RawVar), (yyvsp[-3].string), (yyvsp[0].RawVar), CISAlineno));
   }
#line 4085 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 198: /* VMEInstruction: VME_FBR_OP VMEOpndFBR Var RawOperand RawOperand RawOperand  */
#line 1511 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
   {
        //    1 - OP
        //    2 - FBRMdMode, FBRSubMbShape, FBRSubPredMode
        //    3 - surface
        //    4 - UNIInput
        //    5 - FBRInput
        //    6 - output
        ABORT_ON_FAIL(pBuilder->CISA_create_vme_fbr_instruction((yyvsp[-5].opcode), (yyvsp[-2].RawVar), (yyvsp[-1].RawVar), (yyvsp[-3].string),
            (yyvsp[-4].vmeOpndFbr).cisa_fbrMbMode_opnd, (yyvsp[-4].vmeOpndFbr).cisa_fbrSubMbShape_opnd, (yyvsp[-4].vmeOpndFbr).cisa_fbrSubPredMode_opnd, (yyvsp[0].RawVar), CISAlineno));
    }
#line 4100 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 199: /* OwordInstruction: OWORD_OP OwordModifier ExecSize Var VecSrcOperand_G_I_IMM RawOperand  */
#line 1524 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        ABORT_ON_FAIL(
            pBuilder->CISA_create_oword_instruction((yyvsp[-5].opcode), (yyvsp[-4].oword_mod), (yyvsp[-3].emask_exec_size).exec_size, (yyvsp[-2].string), (yyvsp[-1].genOperand).cisa_gen_opnd, (yyvsp[0].RawVar), CISAlineno));
    }
#line 4109 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 200: /* SvmInstruction: SVM_OP SVM_ALIGNED ExecSize VecSrcOperand_G_I_IMM RawOperand  */
#line 1532 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        pBuilder->CISA_create_svm_block_instruction((SVMSubOpcode)(yyvsp[-4].opcode),
(yyvsp[-2].emask_exec_size).exec_size, false, (yyvsp[-1].genOperand).cisa_gen_opnd, (yyvsp[0].RawVar), CISAlineno);
    }
#line 4118 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 201: /* SvmInstruction: SVM_OP SVM_UNALIGNED ExecSize VecSrcOperand_G_I_IMM RawOperand  */
#line 1539 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        pBuilder->CISA_create_svm_block_instruction((SVMSubOpcode)(yyvsp[-4].opcode),
(yyvsp[-2].emask_exec_size).exec_size, true, (yyvsp[-1].genOperand).cisa_gen_opnd, (yyvsp[0].RawVar), CISAlineno);
    }
#line 4127 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 202: /* SvmInstruction: SVM_OP ExecSize VecSrcOperand_G_I_IMM RawOperand  */
#line 1547 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        pBuilder->CISA_create_svm_block_instruction((SVMSubOpcode)(yyvsp[-3].opcode),
(yyvsp[-2].emask_exec_size).exec_size, true, (yyvsp[-1].genOperand).cisa_gen_opnd, (yyvsp[0].RawVar), CISAlineno);
    }
#line 4136 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 203: /* SvmInstruction: Predicate SVM_SCATTER_OP DOT DEC_LIT DOT DEC_LIT ExecSize RawOperand RawOperand  */
#line 1553 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        pBuilder->CISA_create_svm_scatter_instruction((yyvsp[-8].pred_reg), (SVMSubOpcode)(yyvsp[-7].opcode), (yyvsp[-2].emask_exec_size).emask, (yyvsp[-2].emask_exec_size).exec_size,
            (unsigned int)(yyvsp[-5].intval), (unsigned int)(yyvsp[-3].intval), (yyvsp[-1].RawVar), (yyvsp[0].RawVar), CISAlineno);
    }
#line 4145 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 204: /* SvmInstruction: Predicate SVM_ATOMIC_OP ATOMIC_SUB_OP AtomicBitwidthOpt ExecSize RawOperand RawOperand RawOperand RawOperand  */
#line 1559 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        pBuilder->CISA_create_svm_atomic_instruction((yyvsp[-8].pred_reg), (yyvsp[-4].emask_exec_size).emask, (yyvsp[-4].emask_exec_size).exec_size, (yyvsp[-6].atomic_op), (unsigned short)(yyvsp[-5].intval),
            (yyvsp[-3].RawVar), (yyvsp[-1].RawVar), (yyvsp[0].RawVar), (yyvsp[-2].RawVar), CISAlineno);
    }
#line 4154 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 205: /* SvmInstruction: Predicate SVM_GATHER4SCALED_OP SAMPLER_CHANNEL ExecSize VecSrcOperand_G_I_IMM RawOperand RawOperand  */
#line 1565 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        pBuilder->CISA_create_svm_gather4_scaled((yyvsp[-6].pred_reg), (yyvsp[-3].emask_exec_size).emask, (yyvsp[-3].emask_exec_size).exec_size, ChannelMask::createFromAPI((yyvsp[-4].s_channel)),
            (yyvsp[-2].genOperand).cisa_gen_opnd, (yyvsp[-1].RawVar), (yyvsp[0].RawVar), CISAlineno);
    }
#line 4163 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 206: /* SvmInstruction: Predicate SVM_SCATTER4SCALED_OP SAMPLER_CHANNEL ExecSize VecSrcOperand_G_I_IMM RawOperand RawOperand  */
#line 1571 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        pBuilder->CISA_create_svm_scatter4_scaled((yyvsp[-6].pred_reg), (yyvsp[-3].emask_exec_size).emask, (yyvsp[-3].emask_exec_size).exec_size, ChannelMask::createFromAPI((yyvsp[-4].s_channel)),
            (yyvsp[-2].genOperand).cisa_gen_opnd, (yyvsp[-1].RawVar), (yyvsp[0].RawVar), CISAlineno);
    }
#line 4172 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 207: /* AtomicBitwidthOpt: %empty  */
#line 1577 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
             {(yyval.intval) = 32;}
#line 4178 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 208: /* AtomicBitwidthOpt: DOT DEC_LIT  */
#line 1578 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                  {
        MUST_HOLD((yyvsp[0].intval) == 16 || (yyvsp[0].intval) == 32 || (yyvsp[0].intval) == 64, "only supports 16 or 64");
        (yyval.intval) = (yyvsp[0].intval);
    }
#line 4187 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 221: /* LscUntypedLoad: Predicate LSC_LOAD_MNEMONIC LSC_SFID_UNTYPED_TOKEN LscCacheOpts ExecSize LscDataOperand LscUntypedAddrOperand  */
#line 1633 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        (yyvsp[-2].emask_exec_size).exec_size =
            lscCheckExecSize(pBuilder, (yyvsp[-4].lsc_sfid), (yyvsp[-5].lsc_subOpcode), (yyvsp[-1].lsc_data_operand).shape.order, (yyvsp[-2].emask_exec_size).exec_size);
        pBuilder->CISA_create_lsc_untyped_inst(
            (yyvsp[-6].pred_reg),  // predicate
            (yyvsp[-5].lsc_subOpcode),  // subop
            (yyvsp[-4].lsc_sfid),  // sfid
            (yyvsp[-3].lsc_caching_opts),  // caching settings
            Get_VISA_Exec_Size_From_Raw_Size((yyvsp[-2].emask_exec_size).exec_size),
            (yyvsp[-2].emask_exec_size).emask,
            (yyvsp[0].lsc_addr_operand).addr,     // address
            (yyvsp[-1].lsc_data_operand).shape,    // data
            (yyvsp[0].lsc_addr_operand).surface,  // surface
            (yyvsp[0].lsc_addr_operand).surfaceIndex, // surface index
            (yyvsp[-1].lsc_data_operand).reg,      // dst
            (yyvsp[0].lsc_addr_operand).regs[0],  // src0
            nullptr,     // src1
            nullptr,     // src2
            CISAlineno);
    }
#line 4212 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 222: /* LscUntypedStridedLoad: Predicate LSC_LOAD_STRIDED_MNEMONIC LSC_SFID_UNTYPED_TOKEN LscCacheOpts ExecSize LscDataOperand LscUntypedStridedAddrOperand  */
#line 1665 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        (yyvsp[-2].emask_exec_size).exec_size =
            lscCheckExecSize(pBuilder, (yyvsp[-4].lsc_sfid), (yyvsp[-5].lsc_subOpcode), (yyvsp[-1].lsc_data_operand).shape.order, (yyvsp[-2].emask_exec_size).exec_size);
        pBuilder->CISA_create_lsc_untyped_strided_inst(
            (yyvsp[-6].pred_reg),  // predicate
            (yyvsp[-5].lsc_subOpcode),  // subop
            (yyvsp[-4].lsc_sfid),  // sfid
            (yyvsp[-3].lsc_caching_opts),  // caching settings
            Get_VISA_Exec_Size_From_Raw_Size((yyvsp[-2].emask_exec_size).exec_size),
            (yyvsp[-2].emask_exec_size).emask,
            (yyvsp[0].lsc_addr_operand).addr,     // address
            (yyvsp[-1].lsc_data_operand).shape,    // data
            (yyvsp[0].lsc_addr_operand).surface,  // surface
            (yyvsp[0].lsc_addr_operand).surfaceIndex, // surface index
            (yyvsp[-1].lsc_data_operand).reg,      // dst
            (yyvsp[0].lsc_addr_operand).regs[0],  // src0 base
            (yyvsp[0].lsc_addr_operand).regs[1],  // src0 stride
            nullptr,     // src1
            CISAlineno);
    }
#line 4237 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 223: /* LscUntypedBlock2dLoad: Predicate LSC_LOAD_BLOCK2D_MNEMONIC LSC_SFID_UNTYPED_TOKEN LscCacheOpts ExecSize LscDataOperand2D LscUntypedBlock2dAddrOperand  */
#line 1695 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        (yyvsp[-2].emask_exec_size).exec_size =
            lscCheckExecSize(pBuilder, (yyvsp[-4].lsc_sfid), (yyvsp[-5].lsc_subOpcode), (yyvsp[-1].lsc_data_operand2d).shape2D.order, (yyvsp[-2].emask_exec_size).exec_size);
        pBuilder->CISA_create_lsc_untyped_block2d_inst(
            (yyvsp[-6].pred_reg),  // predicate
            (yyvsp[-5].lsc_subOpcode),  // subop
            (yyvsp[-4].lsc_sfid),  // sfid
            (yyvsp[-3].lsc_caching_opts),  // caching settings
            Get_VISA_Exec_Size_From_Raw_Size((yyvsp[-2].emask_exec_size).exec_size),
            (yyvsp[-2].emask_exec_size).emask,
            (yyvsp[-1].lsc_data_operand2d).shape2D,  // data shape
            (yyvsp[-1].lsc_data_operand2d).reg,      // dst
            (yyvsp[0].lsc_block2d_addr_operand).regs,     // src0 surface info / addrs
            nullptr,     // src1
            (yyvsp[0].lsc_block2d_addr_operand).immOffsets[0],
            (yyvsp[0].lsc_block2d_addr_operand).immOffsets[1],
            CISAlineno);
    }
#line 4260 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 224: /* LscUntypedStore: Predicate LSC_STORE_MNEMONIC LSC_SFID_UNTYPED_TOKEN LscCacheOpts ExecSize LscUntypedAddrOperand LscDataOperand  */
#line 1723 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        (yyvsp[-2].emask_exec_size).exec_size =
            lscCheckExecSize(pBuilder, (yyvsp[-4].lsc_sfid), (yyvsp[-5].lsc_subOpcode), (yyvsp[0].lsc_data_operand).shape.order, (yyvsp[-2].emask_exec_size).exec_size);
        pBuilder->CISA_create_lsc_untyped_inst(
            (yyvsp[-6].pred_reg),  // predicate
            (yyvsp[-5].lsc_subOpcode),  // subop
            (yyvsp[-4].lsc_sfid),  // SFID
            (yyvsp[-3].lsc_caching_opts),  // caching settings
            Get_VISA_Exec_Size_From_Raw_Size((yyvsp[-2].emask_exec_size).exec_size),
            (yyvsp[-2].emask_exec_size).emask,
            (yyvsp[-1].lsc_addr_operand).addr,     // address
            (yyvsp[0].lsc_data_operand).shape,    // data
            (yyvsp[-1].lsc_addr_operand).surface,  // surface
            (yyvsp[-1].lsc_addr_operand).surfaceIndex, // surface index
            nullptr,     // dst
            (yyvsp[-1].lsc_addr_operand).regs[0],  // src0
            (yyvsp[0].lsc_data_operand).reg,      // src1
            nullptr,     // src2
            CISAlineno);
    }
#line 4285 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 225: /* LscUntypedStridedStore: Predicate LSC_STORE_STRIDED_MNEMONIC LSC_SFID_UNTYPED_TOKEN LscCacheOpts ExecSize LscUntypedStridedAddrOperand LscDataOperand  */
#line 1749 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        (yyvsp[-2].emask_exec_size).exec_size =
            lscCheckExecSize(pBuilder, (yyvsp[-4].lsc_sfid), (yyvsp[-5].lsc_subOpcode), (yyvsp[0].lsc_data_operand).shape.order, (yyvsp[-2].emask_exec_size).exec_size);
        pBuilder->CISA_create_lsc_untyped_strided_inst(
            (yyvsp[-6].pred_reg),  // predicate
            (yyvsp[-5].lsc_subOpcode),  // subop
            (yyvsp[-4].lsc_sfid),  // SFID
            (yyvsp[-3].lsc_caching_opts),  // caching settings
            Get_VISA_Exec_Size_From_Raw_Size((yyvsp[-2].emask_exec_size).exec_size),
            (yyvsp[-2].emask_exec_size).emask,
            (yyvsp[-1].lsc_addr_operand).addr,     // address
            (yyvsp[0].lsc_data_operand).shape,    // data
            (yyvsp[-1].lsc_addr_operand).surface,  // surface
            (yyvsp[-1].lsc_addr_operand).surfaceIndex, // surface index
            nullptr,     // dst
            (yyvsp[-1].lsc_addr_operand).regs[0],  // src0 base
            (yyvsp[-1].lsc_addr_operand).regs[1],  // src0 stride
            (yyvsp[0].lsc_data_operand).reg,      // src1
            CISAlineno);
    }
#line 4310 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 226: /* LscUntypedBlock2dStore: Predicate LSC_STORE_BLOCK2D_MNEMONIC LSC_SFID_UNTYPED_TOKEN LscCacheOpts ExecSize LscUntypedBlock2dAddrOperand LscDataOperand2D  */
#line 1777 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        (yyvsp[-2].emask_exec_size).exec_size =
            lscCheckExecSize(pBuilder, (yyvsp[-4].lsc_sfid), (yyvsp[-5].lsc_subOpcode), (yyvsp[0].lsc_data_operand2d).shape2D.order, (yyvsp[-2].emask_exec_size).exec_size);
        pBuilder->CISA_create_lsc_untyped_block2d_inst(
            (yyvsp[-6].pred_reg),  // predicate
            (yyvsp[-5].lsc_subOpcode),  // subop
            (yyvsp[-4].lsc_sfid),  // sfid
            (yyvsp[-3].lsc_caching_opts),  // caching settings
            Get_VISA_Exec_Size_From_Raw_Size((yyvsp[-2].emask_exec_size).exec_size),
            (yyvsp[-2].emask_exec_size).emask,
            (yyvsp[0].lsc_data_operand2d).shape2D,  // data2d
            nullptr,     // dst
            (yyvsp[-1].lsc_block2d_addr_operand).regs,     // src0 addrs
            (yyvsp[0].lsc_data_operand2d).reg,      // src1
            (yyvsp[-1].lsc_block2d_addr_operand).immOffsets[0],
            (yyvsp[-1].lsc_block2d_addr_operand).immOffsets[1],
            CISAlineno);
    }
#line 4333 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 227: /* LscUntypedAtomic: Predicate LSC_ATOMIC_MNEMONIC LSC_SFID_UNTYPED_TOKEN LscCacheOpts ExecSize LscDataOperand LscUntypedAddrOperand LscPayloadReg LscPayloadReg  */
#line 1806 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        (yyvsp[-4].emask_exec_size).exec_size =
            lscCheckExecSize(pBuilder, (yyvsp[-6].lsc_sfid), (yyvsp[-7].lsc_subOpcode), (yyvsp[-3].lsc_data_operand).shape.order, (yyvsp[-4].emask_exec_size).exec_size);
        pBuilder->CISA_create_lsc_untyped_inst(
            (yyvsp[-8].pred_reg),  // predicate
            (yyvsp[-7].lsc_subOpcode),                // op
            (yyvsp[-6].lsc_sfid),                // sfid
            (yyvsp[-5].lsc_caching_opts),                // caching settings
            Get_VISA_Exec_Size_From_Raw_Size((yyvsp[-4].emask_exec_size).exec_size),
            (yyvsp[-4].emask_exec_size).emask,
            (yyvsp[-2].lsc_addr_operand).addr,         // address info
            (yyvsp[-3].lsc_data_operand).shape,        // data type
            (yyvsp[-2].lsc_addr_operand).surface,      // surface array base
            (yyvsp[-2].lsc_addr_operand).surfaceIndex, // surface index
            (yyvsp[-3].lsc_data_operand).reg,          // dst data
            (yyvsp[-2].lsc_addr_operand).regs[0],      // src0 addr
            (yyvsp[-1].RawVar),              // src1 data
            (yyvsp[0].RawVar),              // src2 data (for icas/fcas)
            CISAlineno);
    }
#line 4358 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 228: /* LscTypedLoad: Predicate LSC_LOAD_MNEMONIC LSC_SFID_TYPED_TOKEN LscCacheOpts ExecSize LscDataOperand LscTypedAddrOperandWithOffsets  */
#line 1840 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        if ((yyvsp[-5].lsc_subOpcode) != LSC_LOAD_QUAD) {
            PARSE_ERROR("unsupported load operation for .tgm");
        }
        (yyvsp[-2].emask_exec_size).exec_size =
            lscCheckExecSize(pBuilder, (yyvsp[-4].lsc_sfid), (yyvsp[-5].lsc_subOpcode), (yyvsp[-1].lsc_data_operand).shape.order, (yyvsp[-2].emask_exec_size).exec_size);
        pBuilder->CISA_create_lsc_typed_inst(
            (yyvsp[-6].pred_reg),  // predicate
            (yyvsp[-5].lsc_subOpcode),  // subop
            (yyvsp[-4].lsc_sfid),  // sfid
            (yyvsp[-3].lsc_caching_opts),  // caching settings
            Get_VISA_Exec_Size_From_Raw_Size((yyvsp[-2].emask_exec_size).exec_size),
            (yyvsp[-2].emask_exec_size).emask,
            (yyvsp[0].lsc_typed_operand).addr.type,      // address type
            (yyvsp[0].lsc_typed_operand).addr.size,      // address size
            (yyvsp[-1].lsc_data_operand).shape,          // data
            (yyvsp[0].lsc_typed_operand).surface,        // surface
            (yyvsp[0].lsc_typed_operand).surfaceIndex,   // surface index
            (yyvsp[-1].lsc_data_operand).reg,            // dst
            (yyvsp[0].lsc_typed_operand).regs[0],        // src0_u
            (yyvsp[0].lsc_typed_operand).uvrOffsets[0],  // u offset
            (yyvsp[0].lsc_typed_operand).regs[1],        // src0_v
            (yyvsp[0].lsc_typed_operand).uvrOffsets[1],  // v offset
            (yyvsp[0].lsc_typed_operand).regs[2],        // src0_r
            (yyvsp[0].lsc_typed_operand).uvrOffsets[2],  // r offset
            (yyvsp[0].lsc_typed_operand).regs[3],        // src0_lod
            nullptr,           // src1 data
            nullptr,           // src2 data
            CISAlineno);
    }
#line 4393 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 229: /* LscTypedStore: Predicate LSC_STORE_MNEMONIC LSC_SFID_TYPED_TOKEN LscCacheOpts ExecSize LscTypedAddrOperandWithOffsets LscDataOperand  */
#line 1884 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        if ((yyvsp[-5].lsc_subOpcode) != LSC_STORE_QUAD) {
            PARSE_ERROR("unsupported store operation for .tgm");
        }
        (yyvsp[-2].emask_exec_size).exec_size =
            lscCheckExecSize(pBuilder, (yyvsp[-4].lsc_sfid), (yyvsp[-5].lsc_subOpcode), (yyvsp[0].lsc_data_operand).shape.order, (yyvsp[-2].emask_exec_size).exec_size);
        pBuilder->CISA_create_lsc_typed_inst(
            (yyvsp[-6].pred_reg),  // predicate
            (yyvsp[-5].lsc_subOpcode),  // subop
            (yyvsp[-4].lsc_sfid),  // sfid
            (yyvsp[-3].lsc_caching_opts),  // caching settings
            Get_VISA_Exec_Size_From_Raw_Size((yyvsp[-2].emask_exec_size).exec_size),
            (yyvsp[-2].emask_exec_size).emask,
            (yyvsp[-1].lsc_typed_operand).addr.type,     // address model
            (yyvsp[-1].lsc_typed_operand).addr.size,     // address size
            (yyvsp[0].lsc_data_operand).shape,         // data size
            (yyvsp[-1].lsc_typed_operand).surface,       // surface
            (yyvsp[-1].lsc_typed_operand).surfaceIndex,  // surface index
            nullptr,          // dst
            (yyvsp[-1].lsc_typed_operand).regs[0],       // src0_u
            (yyvsp[-1].lsc_typed_operand).uvrOffsets[0], // u offset
            (yyvsp[-1].lsc_typed_operand).regs[1],       // src0_v
            (yyvsp[-1].lsc_typed_operand).uvrOffsets[1], // v offset
            (yyvsp[-1].lsc_typed_operand).regs[2],       // src0-r
            (yyvsp[-1].lsc_typed_operand).uvrOffsets[2], // r offset
            (yyvsp[-1].lsc_typed_operand).regs[3],       // src0_lod
            (yyvsp[0].lsc_data_operand).reg,           // stored data
            nullptr,          // src2
            CISAlineno);
    }
#line 4428 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 230: /* LscTypedAtomic: Predicate LSC_ATOMIC_MNEMONIC LSC_SFID_TYPED_TOKEN LscCacheOpts ExecSize LscDataOperand LscTypedAddrOperandWithOffsets LscPayloadReg LscPayloadReg  */
#line 1929 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        (yyvsp[-4].emask_exec_size).exec_size =
            lscCheckExecSize(pBuilder, (yyvsp[-6].lsc_sfid), (yyvsp[-7].lsc_subOpcode), (yyvsp[-3].lsc_data_operand).shape.order, (yyvsp[-4].emask_exec_size).exec_size);
        pBuilder->CISA_create_lsc_typed_inst(
            (yyvsp[-8].pred_reg),  // predicate
            (yyvsp[-7].lsc_subOpcode),  // subop
            (yyvsp[-6].lsc_sfid),  // sfid
            (yyvsp[-5].lsc_caching_opts),  // caching settings
            Get_VISA_Exec_Size_From_Raw_Size((yyvsp[-4].emask_exec_size).exec_size),
            (yyvsp[-4].emask_exec_size).emask,
            (yyvsp[-2].lsc_typed_operand).addr.type, // address model
            (yyvsp[-2].lsc_typed_operand).addr.size,  // address size
            (yyvsp[-3].lsc_data_operand).shape,    // data type
            (yyvsp[-2].lsc_typed_operand).surface,  // surface
            (yyvsp[-2].lsc_typed_operand).surfaceIndex, // surface index
            (yyvsp[-3].lsc_data_operand).reg,      // dst data
            (yyvsp[-2].lsc_typed_operand).regs[0],  // src0 addrs u
            (yyvsp[-2].lsc_typed_operand).uvrOffsets[0], // u offset
            (yyvsp[-2].lsc_typed_operand).regs[1],  // src0 addrs v
            (yyvsp[-2].lsc_typed_operand).uvrOffsets[1], // v offset
            (yyvsp[-2].lsc_typed_operand).regs[2],  // src0 addrs r
            (yyvsp[-2].lsc_typed_operand).uvrOffsets[2], // r offset
            (yyvsp[-2].lsc_typed_operand).regs[3],  // src0 addrs lod
            (yyvsp[-1].RawVar),          // src1 data
            (yyvsp[0].RawVar),          // src2 data
            CISAlineno);
    }
#line 4460 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 231: /* LscTypedReadStateInfo: Predicate LSC_READ_STATE_INFO_MNEMONIC LSC_SFID_TYPED_TOKEN LscPayloadReg LscAddrModelStateful LBRACK LscPayloadNonNullReg RBRACK  */
#line 1965 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
   {
        LSC_CACHE_OPTS caching {LSC_CACHING_DEFAULT,LSC_CACHING_DEFAULT};
        LSC_DATA_SHAPE dataShape {LSC_DATA_SIZE_32b,LSC_DATA_ORDER_TRANSPOSE};
        dataShape.elems = LSC_DATA_ELEMS_16;
        pBuilder->CISA_create_lsc_typed_inst(
            (yyvsp[-7].pred_reg),              // predicate
            (yyvsp[-6].lsc_subOpcode),              // subop
            (yyvsp[-5].lsc_sfid),              // sfid
            caching,         // no caching settings
            EXEC_SIZE_1,
            vISA_EMASK_M1_NM,
            (yyvsp[-3].lsc_addr_model).type,           // address type
            LSC_ADDR_SIZE_32b, // address size
            dataShape,         // data type
            (yyvsp[-3].lsc_addr_model).surface,        // surface
            (yyvsp[-3].lsc_addr_model).surfaceIndex,   // SS_IDX
            (yyvsp[-4].RawVar),                // dst data
            (yyvsp[-1].RawVar),                // src0 coords (u, v, r, lod) SIMD1 are packed in
            0,                 // no uvr-offsets
            nullptr,           // no other coords
            0,                 // no uvr-offsets
            nullptr,           // no other coords
            0,                 // no uvr-offsets
            nullptr,           // no other coords
            nullptr,           // no src1 data
            nullptr,           // no src2 data
            CISAlineno);
   }
#line 4493 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 232: /* LscFence: LSC_FENCE_MNEMONIC LscSfid LSC_FENCE_OP_TYPE LSC_FENCE_SCOPE  */
#line 2002 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        pBuilder->CISA_create_lsc_fence((yyvsp[-2].lsc_sfid), (yyvsp[-1].lsc_fence_op), (yyvsp[0].lsc_scope), CISAlineno);
    }
#line 4501 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 235: /* LscCacheOpts: %empty  */
#line 2009 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                                    {(yyval.lsc_caching_opts) = pBuilder->CISA_create_caching_opts(CISAlineno);}
#line 4507 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 236: /* LscCacheOpts: LSC_CACHING_OPT LSC_CACHING_OPT  */
#line 2010 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                                    {(yyval.lsc_caching_opts) = pBuilder->CISA_create_caching_opts((yyvsp[-1].lsc_caching_opt),(yyvsp[0].lsc_caching_opt), CISAlineno);}
#line 4513 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 237: /* LscUntypedAddrOperand: LscAddrModelOpt LBRACK LscAddrImmScaleOpt LscPayloadNonNullReg LscAddrImmOffsetOpt RBRACK LSC_ADDR_SIZE_TK  */
#line 2017 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        (yyval.lsc_addr_operand) = {(yyvsp[-6].lsc_addr_model).surface, (yyvsp[-6].lsc_addr_model).surfaceIndex, {(yyvsp[-3].RawVar)}, {(yyvsp[-6].lsc_addr_model).type, (int)(yyvsp[-4].intval), (int)(yyvsp[-2].intval), (yyvsp[0].lsc_addr_size)}};
    }
#line 4521 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 238: /* LscUntypedStridedAddrOperand: LscAddrModelOpt LBRACK LscAddrImmScaleOpt LscPayloadNonNullReg LscAddrImmOffsetOpt COMMA LscVectorOpRegOrImm32 RBRACK LSC_ADDR_SIZE_TK  */
#line 2026 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        (yyval.lsc_addr_operand) = {(yyvsp[-8].lsc_addr_model).surface, (yyvsp[-8].lsc_addr_model).surfaceIndex, {(yyvsp[-5].RawVar), (yyvsp[-2].lsc_addr_surface_ident)}, {(yyvsp[-8].lsc_addr_model).type, (int)(yyvsp[-6].intval), (int)(yyvsp[-4].intval), (yyvsp[0].lsc_addr_size)}};
    }
#line 4529 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 239: /* LscUntypedStridedAddrOperand: LscUntypedAddrOperand  */
#line 2029 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                            {
        (yyval.lsc_addr_operand) = (yyvsp[0].lsc_addr_operand);
        (yyval.lsc_addr_operand).regs[1] = nullptr;
    }
#line 4538 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 240: /* LscUntypedBlock2dAddrOperand: LSC_AM_FLAT LBRACK LscVectorOpReg COMMA LscVectorOpRegOrImm32 COMMA LscVectorOpRegOrImm32 COMMA LscVectorOpRegOrImm32 COMMA LscVectorOpReg LscAddrImmOffsetOpt COMMA LscVectorOpReg LscAddrImmOffsetOpt RBRACK  */
#line 2053 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        (yyval.lsc_block2d_addr_operand) = {nullptr,0,{(yyvsp[-13].lsc_addr_surface_ident),(yyvsp[-11].lsc_addr_surface_ident),(yyvsp[-9].lsc_addr_surface_ident),(yyvsp[-7].lsc_addr_surface_ident),(yyvsp[-5].lsc_addr_surface_ident),(yyvsp[-2].lsc_addr_surface_ident)},{(int)(yyvsp[-4].intval), (int)(yyvsp[-1].intval)},{LSC_ADDR_TYPE_FLAT,1,0,LSC_ADDR_SIZE_64b}};
    }
#line 4546 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 241: /* LscUntypedBlock2dAddrOperand: LSC_AM_FLAT LBRACK LscVectorOpReg COMMA LscVectorOpRegOrImm32 COMMA LscVectorOpRegOrImm32 COMMA LscVectorOpRegOrImm32 COMMA LscVectorOpImm32 COMMA LscVectorOpImm32 RBRACK  */
#line 2073 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        (yyval.lsc_block2d_addr_operand) = {nullptr,0,{(yyvsp[-11].lsc_addr_surface_ident),(yyvsp[-9].lsc_addr_surface_ident),(yyvsp[-7].lsc_addr_surface_ident),(yyvsp[-5].lsc_addr_surface_ident),(yyvsp[-3].lsc_addr_surface_ident),(yyvsp[-1].lsc_addr_surface_ident)},{0, 0},{LSC_ADDR_TYPE_FLAT,1,0,LSC_ADDR_SIZE_64b}};
    }
#line 4554 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 242: /* LscUntypedBlock2dAddrOperand: LSC_AM_FLAT LBRACK LscVectorOpReg PLUS LPAREN IntExpUnr COMMA IntExpUnr RPAREN RBRACK  */
#line 2081 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        (yyval.lsc_block2d_addr_operand) = {nullptr,0,{(yyvsp[-7].lsc_addr_surface_ident),nullptr,nullptr,nullptr,nullptr,nullptr},{(int)(yyvsp[-4].intval),(int)(yyvsp[-2].intval)},{LSC_ADDR_TYPE_FLAT,1,0,LSC_ADDR_SIZE_64b}};
    }
#line 4562 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 243: /* LscTypedAddrWithOffsetOperand: LscPayloadNonNullReg  */
#line 2086 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        (yyval.lsc_typed_addr_operand) = {(yyvsp[0].RawVar), 0};
    }
#line 4570 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 244: /* LscTypedAddrWithOffsetOperand: LscPayloadNonNullReg PLUS IntExpMul  */
#line 2089 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                                          {
        (yyval.lsc_typed_addr_operand) = {(yyvsp[-2].RawVar), (int)(yyvsp[0].intval)};
    }
#line 4578 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 245: /* LscTypedAddrWithOffsetOperand: LscPayloadNonNullReg MINUS IntExpMul  */
#line 2093 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        (yyval.lsc_typed_addr_operand) = {(yyvsp[-2].RawVar), (int)-(yyvsp[0].intval)};
    }
#line 4586 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 246: /* LscTypedAddrWithOffsetOperandList: LscTypedAddrWithOffsetOperand  */
#line 2097 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                                    {
        (yyval.lsc_typed_addr_operand_list) = {{(yyvsp[0].lsc_typed_addr_operand).reg}, {(yyvsp[0].lsc_typed_addr_operand).offset, 0, 0}};
      }
#line 4594 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 247: /* LscTypedAddrWithOffsetOperandList: LscTypedAddrWithOffsetOperand COMMA LscTypedAddrWithOffsetOperand  */
#line 2102 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
      {
        (yyval.lsc_typed_addr_operand_list) = {{(yyvsp[-2].lsc_typed_addr_operand).reg,(yyvsp[0].lsc_typed_addr_operand).reg}, {(yyvsp[-2].lsc_typed_addr_operand).offset, (yyvsp[0].lsc_typed_addr_operand).offset, 0}};
      }
#line 4602 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 248: /* LscTypedAddrWithOffsetOperandList: LscTypedAddrWithOffsetOperand COMMA LscTypedAddrWithOffsetOperand COMMA LscTypedAddrWithOffsetOperand  */
#line 2108 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        (yyval.lsc_typed_addr_operand_list) = {{(yyvsp[-4].lsc_typed_addr_operand).reg,(yyvsp[-2].lsc_typed_addr_operand).reg,(yyvsp[0].lsc_typed_addr_operand).reg}, {(yyvsp[-4].lsc_typed_addr_operand).offset, (yyvsp[-2].lsc_typed_addr_operand).offset, (yyvsp[0].lsc_typed_addr_operand).offset}};
    }
#line 4610 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 249: /* LscTypedAddrWithOffsetOperandList: LscTypedAddrWithOffsetOperand COMMA LscTypedAddrWithOffsetOperand COMMA LscTypedAddrWithOffsetOperand COMMA LscPayloadNonNullReg  */
#line 2115 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        (yyval.lsc_typed_addr_operand_list) = {{(yyvsp[-6].lsc_typed_addr_operand).reg,(yyvsp[-4].lsc_typed_addr_operand).reg,(yyvsp[-2].lsc_typed_addr_operand).reg,(yyvsp[0].RawVar)}, {(yyvsp[-6].lsc_typed_addr_operand).offset, (yyvsp[-4].lsc_typed_addr_operand).offset, (yyvsp[-2].lsc_typed_addr_operand).offset}};
    }
#line 4618 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 250: /* LscTypedAddrOperandWithOffsets: LscAddrModelStateful LBRACK LscTypedAddrWithOffsetOperandList RBRACK LSC_ADDR_SIZE_TK  */
#line 2121 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        (yyval.lsc_typed_operand) = {(yyvsp[-4].lsc_addr_model).surface, (yyvsp[-4].lsc_addr_model).surfaceIndex,
               {(yyvsp[-2].lsc_typed_addr_operand_list).regs[0], (yyvsp[-2].lsc_typed_addr_operand_list).regs[1], (yyvsp[-2].lsc_typed_addr_operand_list).regs[2],(yyvsp[-2].lsc_typed_addr_operand_list).regs[3]},
               {(yyvsp[-2].lsc_typed_addr_operand_list).uvrOffsets[0], (yyvsp[-2].lsc_typed_addr_operand_list).uvrOffsets[1], (yyvsp[-2].lsc_typed_addr_operand_list).uvrOffsets[2]},
               {(yyvsp[-4].lsc_addr_model).type, 1, 0, (yyvsp[0].lsc_addr_size)}};
    }
#line 4629 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 251: /* LscAddrImmOffsetOpt: %empty  */
#line 2132 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                     {(yyval.intval) =   0;}
#line 4635 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 252: /* LscAddrImmOffsetOpt: PLUS IntExpAdd  */
#line 2133 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                     {(yyval.intval) =  (yyvsp[0].intval);}
#line 4641 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 253: /* LscAddrImmOffsetOpt: MINUS IntExpMul  */
#line 2134 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                     {(yyval.intval) = -(yyvsp[0].intval);}
#line 4647 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 254: /* LscAddrImmScaleOpt: %empty  */
#line 2139 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                     {(yyval.intval) = 1;}
#line 4653 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 255: /* LscAddrImmScaleOpt: IntExpPrim TIMES  */
#line 2140 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                     {(yyval.intval) = (yyvsp[-1].intval);}
#line 4659 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 256: /* LscAddrModelOpt: %empty  */
#line 2143 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                 {(yyval.lsc_addr_model) = {LSC_ADDR_TYPE_FLAT, nullptr, 0};}
#line 4665 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 257: /* LscAddrModelOpt: LSC_AM_FLAT  */
#line 2144 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                 {(yyval.lsc_addr_model) = {LSC_ADDR_TYPE_FLAT, nullptr, 0};}
#line 4671 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 258: /* LscAddrModelOpt: LSC_AM_ARG  */
#line 2145 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                 {(yyval.lsc_addr_model) = {LSC_ADDR_TYPE_ARG, nullptr, 0};}
#line 4677 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 260: /* LscAddrModelStateful: LSC_AM_BSS LPAREN LscVectorOpRegOrImm32 RPAREN  */
#line 2150 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                                                     {
      (yyval.lsc_addr_model) = {LSC_ADDR_TYPE_BSS,(yyvsp[-1].lsc_addr_surface_ident), 0};
    }
#line 4685 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 261: /* LscAddrModelStateful: LSC_AM_BSS LPAREN LscVectorOpRegOrImm32 COMMA IntExp RPAREN  */
#line 2153 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                                                                  {
      (yyval.lsc_addr_model) = {LSC_ADDR_TYPE_BSS, (yyvsp[-3].lsc_addr_surface_ident), (int)(yyvsp[-1].intval)};
    }
#line 4693 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 262: /* LscAddrModelStateful: LSC_AM_SS LPAREN LscVectorOpRegOrImm32 RPAREN  */
#line 2156 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                                                     {
      (yyval.lsc_addr_model) = {LSC_ADDR_TYPE_SS,(yyvsp[-1].lsc_addr_surface_ident), 0};
    }
#line 4701 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 263: /* LscAddrModelStateful: LSC_AM_SS LPAREN LscVectorOpRegOrImm32 COMMA IntExp RPAREN  */
#line 2159 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                                                                  {
      (yyval.lsc_addr_model) = {LSC_ADDR_TYPE_SS,(yyvsp[-3].lsc_addr_surface_ident), (int)(yyvsp[-1].intval)};
    }
#line 4709 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 264: /* LscAddrModelStateful: LSC_AM_BTI LPAREN LscVectorOpRegOrImm32 RPAREN  */
#line 2162 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                                                     {
      (yyval.lsc_addr_model) = {LSC_ADDR_TYPE_BTI,(yyvsp[-1].lsc_addr_surface_ident), 0};
    }
#line 4717 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 265: /* LscAddrModelStateful: LSC_AM_BTI LPAREN LscVectorOpRegOrImm32 COMMA IntExp RPAREN  */
#line 2165 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                                                                  {
      (yyval.lsc_addr_model) = {LSC_ADDR_TYPE_BTI,(yyvsp[-3].lsc_addr_surface_ident), (int)(yyvsp[-1].intval)};
    }
#line 4725 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 268: /* LscVectorOpImm32: IntExp  */
#line 2174 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
           {
        (yyval.lsc_addr_surface_ident) = pBuilder->CISA_create_immed((yyvsp[0].intval), ISA_TYPE_UD, CISAlineno);
    }
#line 4733 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 269: /* LscVectorOpReg: Var  */
#line 2184 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
        {
        ABORT_ON_FAIL((yyval.lsc_addr_surface_ident) = pBuilder->CISA_create_gen_src_operand(
            (yyvsp[0].string),
            0, 1, 0, // region
            0, 0, // row and col offset
            MODIFIER_NONE, CISAlineno));
    }
#line 4745 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 270: /* LscVectorOpReg: Var DOT DEC_LIT  */
#line 2192 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                    {
        ABORT_ON_FAIL((yyval.lsc_addr_surface_ident) = pBuilder->CISA_create_gen_src_operand(
            (yyvsp[-2].string),
            0, 1, 0, // region
            0, (unsigned char)(yyvsp[0].intval), // row and col offset
            MODIFIER_NONE, CISAlineno));
    }
#line 4757 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 271: /* LscVectorOpReg: Var LPAREN IntExp COMMA IntExp RPAREN  */
#line 2200 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                                          {
        MUST_HOLD((yyvsp[-3].intval) <= 255 || (yyvsp[-3].intval) >= 0, "row is out of bounds");
        MUST_HOLD((yyvsp[-1].intval) <= 255 || (yyvsp[-1].intval) >= 0, "col is out of bounds");
        (yyval.lsc_addr_surface_ident) = pBuilder->CISA_create_gen_src_operand(
            (yyvsp[-5].string),
            0, 1, 0,
            (unsigned char)(yyvsp[-3].intval), (unsigned char)(yyvsp[-1].intval), // row and col offset
            MODIFIER_NONE, CISAlineno);
        if ((yyval.lsc_addr_surface_ident) == nullptr) {
            PARSE_ERROR("cannot find surface variable");
        }
    }
#line 4774 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 272: /* LscDataOperand: LscPayloadReg LSC_DATA_SHAPE_TK  */
#line 2214 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                                     {
        (yyval.lsc_data_operand) = {(yyvsp[-1].RawVar),(yyvsp[0].lsc_data_shape)};
    }
#line 4782 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 273: /* LscDataOperand: LscPayloadReg LSC_DATA_SHAPE_TK_CHMASK  */
#line 2218 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                                            {
        (yyval.lsc_data_operand) = {(yyvsp[-1].RawVar),(yyvsp[0].lsc_data_shape)};
    }
#line 4790 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 274: /* LscDataOperand2D: LscPayloadReg LSC_DATA_SHAPE_TK_BLOCK2D  */
#line 2224 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                                            {
        (yyval.lsc_data_operand2d) = {(yyvsp[-1].RawVar),(yyvsp[0].lsc_data_shape2d)};
    }
#line 4798 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 276: /* LscPayloadReg: Var  */
#line 2232 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
        {
        ABORT_ON_FAIL((yyval.RawVar) = pBuilder->CISA_create_RAW_operand((yyvsp[0].string), 0, CISAlineno));
    }
#line 4806 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 278: /* LscPayloadNonNullReg: VarNonNull  */
#line 2239 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
               {
        ABORT_ON_FAIL((yyval.RawVar) = pBuilder->CISA_create_RAW_operand((yyvsp[0].string), 0, CISAlineno));
    }
#line 4814 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 282: /* LscTypedBlock2dLoad: Predicate LSC_LOAD_BLOCK2D_MNEMONIC LSC_SFID_TYPED_TOKEN LscCacheOpts LscDataOperandTyped2D LscTypedBlock2dAddrOperand  */
#line 2263 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        pBuilder->CISA_create_lsc_typed_block2d_inst(
            (yyvsp[-4].lsc_subOpcode),  // subop
            (yyvsp[-2].lsc_caching_opts),  // caching settings
            (yyvsp[0].lsc_block2d_addr_operand).addr.type, // address model
            (yyvsp[-1].lsc_data_operand_typed2d).shape_typed2d,  // data shape
            (yyvsp[0].lsc_block2d_addr_operand).surface,  //surface
            (yyvsp[0].lsc_block2d_addr_operand).surfaceIndex, // surface index
            (yyvsp[-1].lsc_data_operand_typed2d).reg,      // dst
            (yyvsp[0].lsc_block2d_addr_operand).regs[0],     // src0 addrs(block start offset x)
            (yyvsp[0].lsc_block2d_addr_operand).regs[1],     // src0 addrs(block start offset y)
            (yyvsp[0].lsc_block2d_addr_operand).immOffsets[0], // x immediate offset
            (yyvsp[0].lsc_block2d_addr_operand).immOffsets[1], // y immediate offset
            nullptr,     // src1
            CISAlineno);
   }
#line 4835 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 283: /* LscTypedBlock2dStore: Predicate LSC_STORE_BLOCK2D_MNEMONIC LSC_SFID_TYPED_TOKEN LscCacheOpts LscTypedBlock2dAddrOperand LscDataOperandTyped2D  */
#line 2292 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        pBuilder->CISA_create_lsc_typed_block2d_inst(
            (yyvsp[-4].lsc_subOpcode),  // subop
            (yyvsp[-2].lsc_caching_opts),  // caching settings
            (yyvsp[-1].lsc_block2d_addr_operand).addr.type, // address model
            (yyvsp[0].lsc_data_operand_typed2d).shape_typed2d,  // data shape
            (yyvsp[-1].lsc_block2d_addr_operand).surface,  //surface
            (yyvsp[-1].lsc_block2d_addr_operand).surfaceIndex,
            nullptr,     // dst
            (yyvsp[-1].lsc_block2d_addr_operand).regs[0],     // src0 addrs(block start offset x)
            (yyvsp[-1].lsc_block2d_addr_operand).regs[1],     // src0 addrs(block start offset y)
            (yyvsp[-1].lsc_block2d_addr_operand).immOffsets[0], // x immediate offset
            (yyvsp[-1].lsc_block2d_addr_operand).immOffsets[1], // y immediate offset
            (yyvsp[0].lsc_data_operand_typed2d).reg,      // src1
            CISAlineno);
    }
#line 4856 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 284: /* LscTypedBlock2dAddrOperand: LscAddrModelStateful LBRACK LscVectorOpImm32 COMMA LscVectorOpImm32 RBRACK  */
#line 2318 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        (yyval.lsc_block2d_addr_operand) = {(yyvsp[-5].lsc_addr_model).surface, 0, {(yyvsp[-3].lsc_addr_surface_ident),(yyvsp[-1].lsc_addr_surface_ident)},{0,0},{(yyvsp[-5].lsc_addr_model).type,1,0,LSC_ADDR_SIZE_64b}};
    }
#line 4864 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 285: /* LscTypedBlock2dAddrOperand: LscAddrModelStateful LBRACK LscVectorOpReg LscAddrImmOffsetOpt COMMA LscVectorOpReg LscAddrImmOffsetOpt RBRACK  */
#line 2328 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        (yyval.lsc_block2d_addr_operand) = {(yyvsp[-7].lsc_addr_model).surface, (yyvsp[-7].lsc_addr_model).surfaceIndex, {(yyvsp[-5].lsc_addr_surface_ident), (yyvsp[-2].lsc_addr_surface_ident)}, {(int)(yyvsp[-4].intval), (int)(yyvsp[-1].intval)}, {(yyvsp[-7].lsc_addr_model).type, 1, 0, LSC_ADDR_SIZE_64b}};
    }
#line 4872 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 286: /* LscDataOperandTyped2D: LscPayloadReg LSC_DATA_SHAPE_TK_TYPED_BLOCK2D  */
#line 2334 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                                                  {
        (yyval.lsc_data_operand_typed2d) = {(yyvsp[-1].RawVar),(yyvsp[0].lsc_data_shape_typed2d)};
    }
#line 4880 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 287: /* LscUntypedApndCtrAtomic: Predicate LSC_ATOMIC_MNEMONIC LSC_SFID_UNTYPED_TOKEN LscCacheOpts ExecSize LscDataOperand LscAddrModelStateful LscDataOperand  */
#line 2346 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        (yyvsp[-3].emask_exec_size).exec_size =
            lscCheckExecSize(pBuilder, (yyvsp[-5].lsc_sfid), (yyvsp[-6].lsc_subOpcode), (yyvsp[-2].lsc_data_operand).shape.order, (yyvsp[-3].emask_exec_size).exec_size);
        pBuilder->CISA_create_lsc_untyped_append_counter_atomic_inst(
            (yyvsp[-6].lsc_subOpcode),          // op
            (yyvsp[-7].pred_reg),          // predicate
            Get_VISA_Exec_Size_From_Raw_Size((yyvsp[-3].emask_exec_size).exec_size),
            (yyvsp[-3].emask_exec_size).emask,    // execution mask
            (yyvsp[-4].lsc_caching_opts),          // caching settings
            (yyvsp[-1].lsc_addr_model).type,     // address type
            (yyvsp[-2].lsc_data_operand).shape,    // data shape
            (yyvsp[-1].lsc_addr_model).surface,  // surface
            (yyvsp[-1].lsc_addr_model).surfaceIndex,
            (yyvsp[-2].lsc_data_operand).reg,      // dst data
            (yyvsp[0].lsc_data_operand).reg,      // src1 data
            CISAlineno);
    }
#line 4902 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 288: /* SwitchLabels: %empty  */
#line 2366 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
    }
#line 4909 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 289: /* SwitchLabels: COMMA SwitchLabels  */
#line 2369 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
    }
#line 4916 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 290: /* SwitchLabels: IDENT SwitchLabels  */
#line 2372 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        // parse rule means we see last label first
        switchLabels.push_front((yyvsp[-1].string));
    }
#line 4925 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 291: /* BranchInstruction: Predicate BRANCH_OP ExecSize IdentOrStringLit  */
#line 2379 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        pBuilder->CISA_create_branch_instruction((yyvsp[-3].pred_reg), (yyvsp[-2].opcode), (yyvsp[-1].emask_exec_size).emask, (yyvsp[-1].emask_exec_size).exec_size, (yyvsp[0].string), false, CISAlineno);
    }
#line 4933 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 292: /* BranchInstruction: Predicate CALL_OP ExecSize IdentOrStringLit  */
#line 2383 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        pBuilder->CISA_create_branch_instruction((yyvsp[-3].pred_reg), (yyvsp[-2].cisa_call).opcode, (yyvsp[-1].emask_exec_size).emask, (yyvsp[-1].emask_exec_size).exec_size, (yyvsp[0].string), (yyvsp[-2].cisa_call).is_fccall, CISAlineno);
    }
#line 4941 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 293: /* BranchInstruction: Predicate RET_OP ExecSize  */
#line 2387 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        pBuilder->CISA_Create_Ret((yyvsp[-2].pred_reg), (yyvsp[-1].opcode), (yyvsp[0].emask_exec_size).emask, (yyvsp[0].emask_exec_size).exec_size, CISAlineno);
    }
#line 4949 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 294: /* BranchInstruction: SWITCHJMP_OP ExecSize VecSrcOperand_G_I_IMM LPAREN SwitchLabels RPAREN  */
#line 2391 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        pBuilder->CISA_create_switch_instruction((yyvsp[-5].opcode), (yyvsp[-4].emask_exec_size).exec_size, (yyvsp[-3].genOperand).cisa_gen_opnd, switchLabels, CISAlineno);
        switchLabels.clear();
    }
#line 4958 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 295: /* BranchInstruction: Predicate FCALL ExecSize IDENT DEC_LIT DEC_LIT  */
#line 2397 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        pBuilder->CISA_create_fcall_instruction((yyvsp[-5].pred_reg), (yyvsp[-4].opcode), (yyvsp[-3].emask_exec_size).emask, (yyvsp[-3].emask_exec_size).exec_size, (yyvsp[-2].string), (unsigned)(yyvsp[-1].intval), (unsigned)(yyvsp[0].intval), CISAlineno);
    }
#line 4966 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 296: /* BranchInstruction: Predicate IFCALL ExecSize VecSrcOperand_G_I_IMM DEC_LIT DEC_LIT  */
#line 2402 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        pBuilder->CISA_create_ifcall_instruction(
        (yyvsp[-5].pred_reg), (yyvsp[-3].emask_exec_size).emask, (yyvsp[-3].emask_exec_size).exec_size, false,
        (yyvsp[-2].genOperand).cisa_gen_opnd, (unsigned)(yyvsp[-1].intval), (unsigned)(yyvsp[0].intval), CISAlineno);
    }
#line 4976 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 297: /* BranchInstruction: Predicate IFCALL UNIFORM ExecSize VecSrcOperand_G_I_IMM DEC_LIT DEC_LIT  */
#line 2409 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        pBuilder->CISA_create_ifcall_instruction(
        (yyvsp[-6].pred_reg), (yyvsp[-3].emask_exec_size).emask, (yyvsp[-3].emask_exec_size).exec_size, true,
        (yyvsp[-2].genOperand).cisa_gen_opnd, (unsigned)(yyvsp[-1].intval), (unsigned)(yyvsp[0].intval), CISAlineno);
    }
#line 4986 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 298: /* BranchInstruction: FADDR IdentOrStringLit VecDstOperand_G_I  */
#line 2416 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        pBuilder->CISA_create_faddr_instruction((yyvsp[-1].string), (yyvsp[0].genOperand).cisa_gen_opnd, CISAlineno);
    }
#line 4994 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 299: /* FILE: FILE_OP STRING_LIT  */
#line 2421 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        pBuilder->CISA_create_FILE_instruction((yyvsp[-1].opcode), (yyvsp[0].string), CISAlineno);
    }
#line 5002 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 300: /* LOC: LOC_OP DEC_LIT  */
#line 2426 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        pBuilder->CISA_create_LOC_instruction((yyvsp[-1].opcode), (unsigned)(yyvsp[0].intval), CISAlineno);
    }
#line 5010 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 301: /* RawSendInstruction: Predicate RAW_SEND_STRING ExecSize HEX_LIT DEC_LIT DEC_LIT VecSrcOperand_G_IMM RawOperand RawOperand  */
#line 2432 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        pBuilder->CISA_create_raw_send_instruction(ISA_RAW_SEND, false, (yyvsp[-6].emask_exec_size).emask, (yyvsp[-6].emask_exec_size).exec_size, (yyvsp[-8].pred_reg),
            (unsigned)(yyvsp[-5].intval), (unsigned char)(yyvsp[-4].intval), (unsigned char)(yyvsp[-3].intval), (yyvsp[-2].genOperand).cisa_gen_opnd, (yyvsp[-1].RawVar), (yyvsp[0].RawVar), CISAlineno);
    }
#line 5019 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 302: /* RawSendInstruction: Predicate RAW_SENDC_STRING ExecSize HEX_LIT DEC_LIT DEC_LIT VecSrcOperand_G_IMM RawOperand RawOperand  */
#line 2439 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        pBuilder->CISA_create_raw_send_instruction(ISA_RAW_SEND, true, (yyvsp[-6].emask_exec_size).emask, (yyvsp[-6].emask_exec_size).exec_size, (yyvsp[-8].pred_reg),
            (unsigned)(yyvsp[-5].intval), (unsigned char)(yyvsp[-4].intval), (unsigned char)(yyvsp[-3].intval), (yyvsp[-2].genOperand).cisa_gen_opnd, (yyvsp[-1].RawVar), (yyvsp[0].RawVar), CISAlineno);
    }
#line 5028 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 303: /* LifetimeStartInst: LIFETIME_START_OP IDENT  */
#line 2446 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        ABORT_ON_FAIL(pBuilder->CISA_create_lifetime_inst((unsigned char)0, (yyvsp[0].string), CISAlineno));
    }
#line 5036 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 304: /* LifetimeEndInst: LIFETIME_END_OP IDENT  */
#line 2452 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        ABORT_ON_FAIL(pBuilder->CISA_create_lifetime_inst((unsigned char)1, (yyvsp[0].string), CISAlineno));
    }
#line 5044 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 305: /* RawSendsInstruction: Predicate RAW_SENDS_STRING ElemNum ElemNum ElemNum ElemNum ExecSize VecSrcOperand_G_IMM VecSrcOperand_G_IMM RawOperand RawOperand RawOperand  */
#line 2458 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        pBuilder->CISA_create_raw_sends_instruction(
            ISA_RAW_SENDS, false, false, (yyvsp[-5].emask_exec_size).emask, (yyvsp[-5].emask_exec_size).exec_size, (yyvsp[-11].pred_reg), (yyvsp[-4].genOperand).cisa_gen_opnd,
            (unsigned char)(yyvsp[-9].intval), (unsigned char)(yyvsp[-8].intval), (unsigned char)(yyvsp[-7].intval), (unsigned char)(yyvsp[-6].intval),
            (yyvsp[-3].genOperand).cisa_gen_opnd, (yyvsp[-2].RawVar), (yyvsp[-1].RawVar), (yyvsp[0].RawVar), CISAlineno);
    }
#line 5055 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 306: /* RawSendsInstruction: Predicate RAW_SENDS_EOT_STRING ElemNum ElemNum ElemNum ElemNum ExecSize VecSrcOperand_G_IMM VecSrcOperand_G_IMM RawOperand RawOperand RawOperand  */
#line 2466 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        pBuilder->CISA_create_raw_sends_instruction(
            ISA_RAW_SENDS, false, true, (yyvsp[-5].emask_exec_size).emask, (yyvsp[-5].emask_exec_size).exec_size, (yyvsp[-11].pred_reg), (yyvsp[-4].genOperand).cisa_gen_opnd,
            (unsigned char)(yyvsp[-9].intval), (unsigned char)(yyvsp[-8].intval), (unsigned char)(yyvsp[-7].intval), (unsigned char)(yyvsp[-6].intval),
            (yyvsp[-3].genOperand).cisa_gen_opnd, (yyvsp[-2].RawVar), (yyvsp[-1].RawVar), (yyvsp[0].RawVar), CISAlineno);
    }
#line 5066 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 307: /* RawSendsInstruction: Predicate RAW_SENDSC_STRING ElemNum ElemNum ElemNum ExecSize VecSrcOperand_G_IMM VecSrcOperand_G_IMM RawOperand RawOperand RawOperand  */
#line 2474 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        pBuilder->CISA_create_raw_sends_instruction(
            ISA_RAW_SENDS, true, false, (yyvsp[-5].emask_exec_size).emask, (yyvsp[-5].emask_exec_size).exec_size, (yyvsp[-10].pred_reg), (yyvsp[-4].genOperand).cisa_gen_opnd,
            0, (unsigned char)(yyvsp[-8].intval), (unsigned char)(yyvsp[-7].intval), (unsigned char)(yyvsp[-6].intval),
            (yyvsp[-3].genOperand).cisa_gen_opnd, (yyvsp[-2].RawVar), (yyvsp[-1].RawVar), (yyvsp[0].RawVar), CISAlineno);
    }
#line 5077 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 308: /* RawSendsInstruction: Predicate RAW_SENDSC_EOT_STRING ElemNum ElemNum ElemNum ExecSize VecSrcOperand_G_IMM VecSrcOperand_G_IMM RawOperand RawOperand RawOperand  */
#line 2482 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        pBuilder->CISA_create_raw_sends_instruction(
            ISA_RAW_SENDS, true, true, (yyvsp[-5].emask_exec_size).emask, (yyvsp[-5].emask_exec_size).exec_size, (yyvsp[-10].pred_reg), (yyvsp[-4].genOperand).cisa_gen_opnd,
            0, (unsigned char)(yyvsp[-8].intval), (unsigned char)(yyvsp[-7].intval), (unsigned char)(yyvsp[-6].intval),
            (yyvsp[-3].genOperand).cisa_gen_opnd, (yyvsp[-2].RawVar), (yyvsp[-1].RawVar), (yyvsp[0].RawVar), CISAlineno);
    }
#line 5088 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 309: /* NullaryInstruction: CACHE_FLUSH_OP  */
#line 2492 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        pBuilder->CISA_create_NO_OPND_instruction((yyvsp[0].opcode), CISAlineno);
    }
#line 5096 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 310: /* NullaryInstruction: WAIT_OP VecSrcOperand_G_IMM  */
#line 2497 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        pBuilder->CISA_create_wait_instruction((yyvsp[0].genOperand).cisa_gen_opnd, CISAlineno);
    }
#line 5104 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 311: /* NullaryInstruction: YIELD_OP  */
#line 2502 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        pBuilder->CISA_create_yield_instruction((yyvsp[0].opcode), CISAlineno);
    }
#line 5112 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 312: /* NullaryInstruction: FENCE_GLOBAL_OP  */
#line 2507 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        pBuilder->CISA_create_fence_instruction((yyvsp[0].opcode), 0x0, CISAlineno);
    }
#line 5120 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 313: /* NullaryInstruction: FENCE_GLOBAL_OP FENCE_OPTIONS  */
#line 2512 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        pBuilder->CISA_create_fence_instruction((yyvsp[-1].opcode), (yyvsp[0].fence_options), CISAlineno);
    }
#line 5128 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 314: /* NullaryInstruction: FENCE_LOCAL_OP  */
#line 2517 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        pBuilder->CISA_create_fence_instruction((yyvsp[0].opcode), 0x20, CISAlineno);
    }
#line 5136 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 315: /* NullaryInstruction: FENCE_LOCAL_OP FENCE_OPTIONS  */
#line 2522 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        pBuilder->CISA_create_fence_instruction((yyvsp[-1].opcode), (yyvsp[0].fence_options) | 0x20, CISAlineno);
    }
#line 5144 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 316: /* NullaryInstruction: FENCE_SW_OP  */
#line 2527 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        pBuilder->CISA_create_fence_instruction((yyvsp[0].opcode), 0x80, CISAlineno);
    }
#line 5152 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 317: /* OwordModifier: %empty  */
#line 2531 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                      {(yyval.oword_mod) = false;}
#line 5158 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 319: /* Predicate: %empty  */
#line 2538 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        (yyval.pred_reg) = NULL;
    }
#line 5166 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 320: /* Predicate: LPAREN PredSign PredVar PredCtrlOpt RPAREN  */
#line 2543 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        (yyval.pred_reg) = pBuilder->CISA_create_predicate_operand((yyvsp[-2].vISADecl), (yyvsp[-3].pred_sign), (yyvsp[-1].pred_ctrl), CISAlineno);
    }
#line 5174 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 321: /* PredSign: %empty  */
#line 2547 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                 {(yyval.pred_sign) = PredState_NO_INVERSE;}
#line 5180 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 322: /* PredSign: BANG  */
#line 2547 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                                                     {(yyval.pred_sign) = PredState_INVERSE;}
#line 5186 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 323: /* PredCtrlOpt: %empty  */
#line 2549 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                    {(yyval.pred_ctrl) = PRED_CTRL_NON;}
#line 5192 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 325: /* SatModOpt: %empty  */
#line 2552 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                  {(yyval.sat) = false;}
#line 5198 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 326: /* SatModOpt: SAT  */
#line 2552 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                                      {(yyval.sat) = true;}
#line 5204 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 327: /* SrcModifier: SRCMOD_NEG  */
#line 2555 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                    {(yyval.src_mod).mod = MODIFIER_NEG;}
#line 5210 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 328: /* SrcModifier: SRCMOD_ABS  */
#line 2556 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                    {(yyval.src_mod).mod = MODIFIER_ABS;}
#line 5216 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 329: /* SrcModifier: SRCMOD_NEGABS  */
#line 2557 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                    {(yyval.src_mod).mod = MODIFIER_NEG_ABS;}
#line 5222 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 330: /* SrcModifier: SRCMOD_NOT  */
#line 2558 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                    {(yyval.src_mod).mod = MODIFIER_NOT;}
#line 5228 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 331: /* ConditionalModifier: %empty  */
#line 2560 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                            {(yyval.cond_mod) = ISA_CMP_UNDEF;}
#line 5234 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 333: /* VecDstOperand_A: DstAddrOperand  */
#line 2565 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                                   {(yyval.genOperand) = (yyvsp[0].genOperand); (yyval.genOperand).type = OPERAND_ADDRESS;}
#line 5240 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 334: /* VecDstOperand_G: DstGeneralOperand  */
#line 2566 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                                   {(yyval.genOperand) = (yyvsp[0].genOperand); (yyval.genOperand).type = OPERAND_GENERAL;}
#line 5246 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 335: /* VecDstOperand_G_I: DstGeneralOperand  */
#line 2568 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                           {(yyval.genOperand) = (yyvsp[0].genOperand); (yyval.genOperand).type = OPERAND_GENERAL;}
#line 5252 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 336: /* VecDstOperand_G_I: DstIndirectOperand  */
#line 2569 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                           {(yyval.genOperand) = (yyvsp[0].genOperand); (yyval.genOperand).type = OPERAND_INDIRECT;}
#line 5258 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 338: /* VecSrcOperand_G_I_IMM_A_AO: SrcAddrOfOperand  */
#line 2574 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                           {(yyval.genOperand) = (yyvsp[0].genOperand); (yyval.genOperand).type = OPERAND_ADDRESSOF;}
#line 5264 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 340: /* VecSrcOperand_G_I_IMM_A: SrcAddrOperand  */
#line 2578 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                           {(yyval.genOperand) = (yyvsp[0].genOperand); (yyval.genOperand).type = OPERAND_ADDRESS;}
#line 5270 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 342: /* VecSrcOperand_G_I_IMM: SrcIndirectOperand  */
#line 2582 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                           {(yyval.genOperand) = (yyvsp[0].genOperand); (yyval.genOperand).type = OPERAND_INDIRECT;}
#line 5276 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 343: /* VecSrcOperand_G_I_IMM: SrcImmOperand  */
#line 2583 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                           {(yyval.genOperand) = (yyvsp[0].genOperand); (yyval.genOperand).type = OPERAND_IMMEDIATE;}
#line 5282 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 345: /* VecSrcOperand_G_IMM: SrcImmOperand  */
#line 2587 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                          {(yyval.genOperand) = (yyvsp[0].genOperand); (yyval.genOperand).type = OPERAND_IMMEDIATE;}
#line 5288 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 347: /* VecSrcOperand_G_IMM_AO: SrcImmOperand  */
#line 2591 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                          {(yyval.genOperand) = (yyvsp[0].genOperand); (yyval.genOperand).type = OPERAND_IMMEDIATE;}
#line 5294 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 348: /* VecSrcOperand_G_IMM_AO: SrcAddrOfOperand  */
#line 2592 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                          {(yyval.genOperand) = (yyvsp[0].genOperand); (yyval.genOperand).type = OPERAND_ADDRESSOF;}
#line 5300 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 350: /* VecSrcOperand_G_A: SrcAddrOperand  */
#line 2596 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                          {(yyval.genOperand) = (yyvsp[0].genOperand); (yyval.genOperand).type = OPERAND_ADDRESS;}
#line 5306 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 352: /* VecSrcOperand_G_A_AO: SrcAddrOfOperand  */
#line 2600 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                          {(yyval.genOperand) = (yyvsp[0].genOperand); (yyval.genOperand).type = OPERAND_ADDRESS;}
#line 5312 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 353: /* VecSrcOperand_G: SrcGeneralOperand  */
#line 2602 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                                   {(yyval.genOperand) = (yyvsp[0].genOperand); (yyval.genOperand).type = OPERAND_GENERAL;}
#line 5318 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 354: /* VecSrcOpndSimple: Var TwoDimOffset  */
#line 2605 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        // simple vector operand with no modifier that has an
        // implicit src region = <1,1,0>
        (yyval.genOperand).type = OPERAND_GENERAL;
        ABORT_ON_FAIL((yyval.genOperand).cisa_gen_opnd = pBuilder->CISA_create_gen_src_operand(
            (yyvsp[-1].string), 1, 1, 0, (yyvsp[0].offset).row, (yyvsp[0].offset).elem, MODIFIER_NONE, CISAlineno));
    }
#line 5330 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 355: /* VMEOpndIME: LPAREN DEC_LIT COMMA DEC_LIT RPAREN  */
#line 2615 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        (yyval.vmeOpndIvb).streamMode = (unsigned char)(yyvsp[-3].intval);
        (yyval.vmeOpndIvb).searchCtrl = (unsigned char)(yyvsp[-1].intval);
    }
#line 5339 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 356: /* VMEOpndFBR: LPAREN VecSrcOperand_G_I_IMM COMMA VecSrcOperand_G_I_IMM COMMA VecSrcOperand_G_I_IMM RPAREN  */
#line 2622 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        (yyval.vmeOpndFbr).cisa_fbrMbMode_opnd = (yyvsp[-5].genOperand).cisa_gen_opnd;
        (yyval.vmeOpndFbr).cisa_fbrSubMbShape_opnd = (yyvsp[-3].genOperand).cisa_gen_opnd;
        (yyval.vmeOpndFbr).cisa_fbrSubPredMode_opnd = (yyvsp[-1].genOperand).cisa_gen_opnd;
    }
#line 5349 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 357: /* SrcStateOperand: Var LPAREN IntExp RPAREN  */
#line 2630 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        MUST_HOLD((yyvsp[-1].intval) < 0x100, "offset out of bounds");
        (yyval.StateVar).offset = (unsigned char)(yyvsp[-1].intval);
        ABORT_ON_FAIL((yyval.StateVar).cisa_gen_opnd = pBuilder->CISA_create_state_operand((yyvsp[-3].string), (unsigned char)(yyvsp[-1].intval), CISAlineno, false));
    }
#line 5359 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 358: /* DstStateOperand: Var LPAREN IntExp RPAREN  */
#line 2638 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        MUST_HOLD((yyvsp[-1].intval) < 0x100, "offset out of bounds");
        (yyval.StateVar).offset = (unsigned char)(yyvsp[-1].intval);
        ABORT_ON_FAIL((yyval.StateVar).cisa_gen_opnd = pBuilder->CISA_create_state_operand((yyvsp[-3].string), (unsigned char)(yyvsp[-1].intval), CISAlineno, true));
    }
#line 5369 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 360: /* RawOperand: BUILTIN_NULL DOT DEC_LIT  */
#line 2669 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        MUST_HOLD((yyvsp[0].intval) == 0, "%null must have 0 as offset");
        (yyval.RawVar) = pBuilder->CISA_create_RAW_NULL_operand(CISAlineno); // can't fail
    }
#line 5378 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 361: /* RawOperandNonNull: VarNonNull RawOperandOffsetSuffix  */
#line 2676 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        ABORT_ON_FAIL((yyval.RawVar) = pBuilder->CISA_create_RAW_operand((yyvsp[-1].string), (unsigned short)(yyvsp[0].intval), CISAlineno));
    }
#line 5386 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 362: /* RawOperandOffsetSuffix: DOT DEC_LIT  */
#line 2687 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                {
        MUST_HOLD((yyvsp[0].intval) <= 0x10000, "offset out of bounds");
        (yyval.intval) = (yyvsp[0].intval);
    }
#line 5395 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 363: /* RawOperandOffsetSuffix: DOT LPAREN IntExp RPAREN  */
#line 2692 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                             {
        MUST_HOLD((yyvsp[-1].intval) <= 0x10000, "offset out of bounds");
        (yyval.intval) = (yyvsp[-1].intval);
    }
#line 5404 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 364: /* RawOperandArray: %empty  */
#line 2700 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        (yyval.intval) = 0;
    }
#line 5412 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 365: /* RawOperandArray: RawOperandArray RawOperand  */
#line 2705 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        rawOperandArray[(yyvsp[-1].intval)++] = (VISA_RawOpnd*)(yyvsp[0].RawVar);
        (yyval.intval) = (yyvsp[-1].intval);
    }
#line 5421 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 366: /* DstAddrOperand: AddrVarAccessWithWidth  */
#line 2713 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        ABORT_ON_FAIL((yyval.genOperand).cisa_gen_opnd =
          pBuilder->CISA_set_address_operand(
            (yyvsp[0].regAccess).cisa_decl, (yyvsp[0].regAccess).elem, (yyvsp[0].regAccess).row, true, CISAlineno));
    }
#line 5431 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 367: /* DstGeneralOperand: Var TwoDimOffset DstRegion  */
#line 2721 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        ABORT_ON_FAIL((yyval.genOperand).cisa_gen_opnd = pBuilder->CISA_dst_general_operand(
            (yyvsp[-2].string), (yyvsp[-1].offset).row, (yyvsp[-1].offset).elem, (unsigned short)(yyvsp[0].intval), CISAlineno));
    }
#line 5440 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 368: /* DstGeneralOperand: Var DstRegion  */
#line 2726 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                  {
        ABORT_ON_FAIL((yyval.genOperand).cisa_gen_opnd = pBuilder->CISA_dst_general_operand(
            (yyvsp[-1].string), 0, 0, (unsigned short)(yyvsp[0].intval), CISAlineno));
    }
#line 5449 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 369: /* DstIndirectOperand: IndirectVarAccess DstRegion DataType  */
#line 2732 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        ABORT_ON_FAIL((yyval.genOperand).cisa_gen_opnd = pBuilder->CISA_create_indirect_dst(
            (yyvsp[-2].regAccess).cisa_decl, MODIFIER_NONE, (yyvsp[-2].regAccess).row, (yyvsp[-2].regAccess).elem, (yyvsp[-2].regAccess).immOff, (unsigned short)(yyvsp[-1].intval), (yyvsp[0].type), CISAlineno));
    }
#line 5458 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 370: /* SrcAddrOfOperand: AddrOfVar  */
#line 2753 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
              {
         (yyval.genOperand).cisa_gen_opnd = pBuilder->CISA_set_address_expression((yyvsp[0].regAccess).cisa_decl, 0, CISAlineno);
    }
#line 5466 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 371: /* SrcAddrOfOperand: AddrOfVar LBRACK IntExp RBRACK  */
#line 2757 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                                   {
         MUST_HOLD((short)(yyvsp[-1].intval) == (yyvsp[-1].intval), "variable address offset is too large");
         (yyval.genOperand).cisa_gen_opnd = pBuilder->CISA_set_address_expression((yyvsp[-3].regAccess).cisa_decl, (short)(yyvsp[-1].intval), CISAlineno);
    }
#line 5475 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 372: /* AddrOfVar: AMP Var  */
#line 2763 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
            {
        // Both GENERAL_VAR and SURFACE_VAR are addressable
        (yyval.regAccess).cisa_decl = pBuilder->CISA_find_decl((yyvsp[0].string));
        if ((yyval.regAccess).cisa_decl == nullptr)
            PARSE_ERROR("unbound variable");
        (yyval.regAccess).row = 0;
        (yyval.regAccess).elem = 0;
    }
#line 5488 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 373: /* SrcAddrOperand: AddrVarAccessWithWidth  */
#line 2774 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        ABORT_ON_FAIL((yyval.genOperand).cisa_gen_opnd =
            pBuilder->CISA_set_address_operand(
                (yyvsp[0].regAccess).cisa_decl, (yyvsp[0].regAccess).elem, (yyvsp[0].regAccess).row, false, CISAlineno));
    }
#line 5498 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 374: /* SrcGeneralOperand: Var TwoDimOffset SrcRegionDirect  */
#line 2782 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        ABORT_ON_FAIL((yyval.genOperand).cisa_gen_opnd =
            pBuilder->CISA_create_gen_src_operand(
                (yyvsp[-2].string), (yyvsp[0].cisa_region).v_stride, (yyvsp[0].cisa_region).width, (yyvsp[0].cisa_region).h_stride, (yyvsp[-1].offset).row, (yyvsp[-1].offset).elem, MODIFIER_NONE, CISAlineno));
    }
#line 5508 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 375: /* SrcGeneralOperand: SrcModifier Var TwoDimOffset SrcRegionDirect  */
#line 2789 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        ABORT_ON_FAIL((yyval.genOperand).cisa_gen_opnd =
            pBuilder->CISA_create_gen_src_operand(
                (yyvsp[-2].string), (yyvsp[0].cisa_region).v_stride, (yyvsp[0].cisa_region).width, (yyvsp[0].cisa_region).h_stride, (yyvsp[-1].offset).row, (yyvsp[-1].offset).elem, (yyvsp[-3].src_mod).mod, CISAlineno));
    }
#line 5518 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 376: /* SrcImmOperand: IntExpUnr DataTypeIntOrVector  */
#line 2799 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        (yyval.genOperand).cisa_gen_opnd = pBuilder->CISA_create_immed((yyvsp[-1].intval), (yyvsp[0].type), CISAlineno);
    }
#line 5526 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 377: /* SrcImmOperand: HEX_LIT HFTYPE  */
#line 2804 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                     {
        MUST_HOLD((yyvsp[-1].intval) < 0x10000, "literal too large for half float");
        (yyval.genOperand).cisa_gen_opnd = pBuilder->CISA_create_immed(
            (unsigned short)(yyvsp[-1].intval), ISA_TYPE_HF, CISAlineno);
    }
#line 5536 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 378: /* SrcImmOperand: FloatLit  */
#line 2812 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        (yyval.genOperand).cisa_gen_opnd = pBuilder->CISA_create_float_immed((yyvsp[0].fltval), ISA_TYPE_F, CISAlineno);
    }
#line 5544 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 379: /* SrcImmOperand: MINUS FloatLit  */
#line 2815 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                     {
        (yyval.genOperand).cisa_gen_opnd = pBuilder->CISA_create_float_immed(-(yyvsp[0].fltval), ISA_TYPE_F, CISAlineno);
    }
#line 5552 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 380: /* SrcImmOperand: DoubleFloatLit  */
#line 2821 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        (yyval.genOperand).cisa_gen_opnd = pBuilder->CISA_create_float_immed((yyvsp[0].fltval), ISA_TYPE_DF, CISAlineno);
    }
#line 5560 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 381: /* SrcImmOperand: MINUS DoubleFloatLit  */
#line 2825 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        (yyval.genOperand).cisa_gen_opnd = pBuilder->CISA_create_float_immed(-(yyvsp[0].fltval), ISA_TYPE_DF, CISAlineno);
    }
#line 5568 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 383: /* FloatLit: DEC_LIT FTYPE  */
#line 2832 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
   {
        // "1:f" means 1.4e-45
        int number = (int)(yyvsp[-1].intval);
        float *fp = (float *)&number;
        (yyval.fltval) = *fp;
   }
#line 5579 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 384: /* FloatLit: HEX_LIT FTYPE  */
#line 2839 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
   {
        int number = (int)(yyvsp[-1].intval);
        float *fp = (float *)&number;
        (yyval.fltval) = *fp;
   }
#line 5589 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 386: /* DoubleFloatLit: DEC_LIT DFTYPE  */
#line 2847 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                    {
        // "1:df" means 5e-324
        int64_t number = (yyvsp[-1].intval);
        double *fp = (double *)&number;
        (yyval.fltval) = *fp;
   }
#line 5600 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 387: /* DoubleFloatLit: HEX_LIT DFTYPE  */
#line 2853 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                    {
        // to support 0x7ff0000000000000:df
        int64_t number = (yyvsp[-1].intval);
        double *fp = (double *)&number;
        (yyval.fltval) = *fp;
   }
#line 5611 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 388: /* SrcIndirectOperand: IndirectVarAccess SrcRegionIndirect DataType  */
#line 2864 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        ABORT_ON_FAIL((yyval.genOperand).cisa_gen_opnd =
            pBuilder->CISA_create_indirect(
                (yyvsp[-2].regAccess).cisa_decl, MODIFIER_NONE, (yyvsp[-2].regAccess).row, (yyvsp[-2].regAccess).elem, (yyvsp[-2].regAccess).immOff,
                (yyvsp[-1].cisa_region).v_stride, (yyvsp[-1].cisa_region).width, (yyvsp[-1].cisa_region).h_stride, (yyvsp[0].type), CISAlineno));
    }
#line 5622 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 389: /* SrcIndirectOperand: SrcModifier IndirectVarAccess SrcRegionIndirect DataType  */
#line 2872 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        ABORT_ON_FAIL((yyval.genOperand).cisa_gen_opnd =
            pBuilder->CISA_create_indirect(
                (yyvsp[-2].regAccess).cisa_decl, (yyvsp[-3].src_mod).mod, (yyvsp[-2].regAccess).row, (yyvsp[-2].regAccess).elem, (yyvsp[-2].regAccess).immOff,
                (yyvsp[-1].cisa_region).v_stride, (yyvsp[-1].cisa_region).width, (yyvsp[-1].cisa_region).h_stride, (yyvsp[0].type), CISAlineno));
    }
#line 5633 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 390: /* DstRegion: LANGLE IntExpNRA RANGLE  */
#line 2881 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        MUST_HOLD(((yyvsp[-1].intval) == 0 || (yyvsp[-1].intval) == 1 || (yyvsp[-1].intval) == 2 || (yyvsp[-1].intval) == 4),
             "Dst HorzStride must be 0, 1, 2, or 4");
        (yyval.intval) = (yyvsp[-1].intval);
    }
#line 5643 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 391: /* SrcRegionDirect: LANGLE IntExp SEMI IntExp COMMA IntExpNRA RANGLE  */
#line 2899 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        MUST_HOLD(((yyvsp[-5].intval) == 0 || (yyvsp[-5].intval) == 1 || (yyvsp[-5].intval) == 2 || (yyvsp[-5].intval) == 4 || (yyvsp[-5].intval) == 8 || (yyvsp[-5].intval) == 16 || (yyvsp[-5].intval) == 32),
                 "Src Region VertStride must be 0, 1, 2, 4, 8, 16, or 32");
        MUST_HOLD(((yyvsp[-3].intval) == 0 || (yyvsp[-3].intval) == 1 || (yyvsp[-3].intval) == 2 || (yyvsp[-3].intval) == 4 || (yyvsp[-3].intval) == 8 || (yyvsp[-3].intval) == 16),
                 "Src Region Width must be 0, 1, 2, 4, 8 or 16");
        MUST_HOLD(((yyvsp[-1].intval) == 0 || (yyvsp[-1].intval) == 1 || (yyvsp[-1].intval) == 2 || (yyvsp[-1].intval) == 4),
                 "Src Region HorzStride must be 0, 1, 2, or 4");
        (yyval.cisa_region).v_stride = (unsigned)(yyvsp[-5].intval);
        (yyval.cisa_region).width = (unsigned)(yyvsp[-3].intval);
        (yyval.cisa_region).h_stride = (unsigned)(yyvsp[-1].intval);
    }
#line 5659 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 393: /* SrcRegionIndirect: LANGLE IntExp COMMA DEC_LIT RANGLE  */
#line 2916 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        MUST_HOLD(((yyvsp[-3].intval) == 0 || (yyvsp[-3].intval) == 1 || (yyvsp[-3].intval) == 2 || (yyvsp[-3].intval) == 4 || (yyvsp[-3].intval) == 8 || (yyvsp[-3].intval) == 16),
                 "Width must be 0, 1, 2, 4, 8 or 16");
        MUST_HOLD(((yyvsp[-1].intval) == 0 || (yyvsp[-1].intval) == 1 || (yyvsp[-1].intval) == 2 || (yyvsp[-1].intval) == 4),
                 "HorzStride must be 0, 1, 2, or 4");
        (yyval.cisa_region).v_stride = -1;
        (yyval.cisa_region).width = (unsigned)(yyvsp[-3].intval);
        (yyval.cisa_region).h_stride = (unsigned)(yyvsp[-1].intval);
    }
#line 5673 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 394: /* SrcRegionIndirect: LANGLE IntExpNRA RANGLE  */
#line 2927 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        MUST_HOLD(((yyvsp[-1].intval) == 0 || (yyvsp[-1].intval) == 1 || (yyvsp[-1].intval) == 2 || (yyvsp[-1].intval) == 4),
             "HorzStride must be 0, 1, 2, or 4");
        (yyval.cisa_region).v_stride = -1;
        (yyval.cisa_region).width = -1;
        (yyval.cisa_region).h_stride = (unsigned)(yyvsp[-1].intval);
    }
#line 5685 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 395: /* IndirectVarAccess: IND_LBRACK AddrVarAccess COMMA IntExp RBRACK  */
#line 2937 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                                                 {
        (yyval.regAccess) = (yyvsp[-3].regAccess);
        (yyval.regAccess).immOff = (int)(yyvsp[-1].intval);
    }
#line 5694 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 396: /* IndirectVarAccess: IND_LBRACK AddrVarAccess RBRACK  */
#line 2942 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                                                 {
          (yyval.regAccess) = (yyvsp[-1].regAccess);
          (yyval.regAccess).immOff = 0;
    }
#line 5703 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 397: /* TwoDimOffset: LPAREN IntExp COMMA IntExp RPAREN  */
#line 2947 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                                                {
        MUST_HOLD((yyvsp[-3].intval) >= 0, "row (register) offset must be positive");
        (yyval.offset).row = (int)(yyvsp[-3].intval);
        MUST_HOLD((yyvsp[-1].intval) >= 0 && (yyvsp[-1].intval) <= 0xFFFF, "sub-register offset out of bounds");
        (yyval.offset).elem = (int)(yyvsp[-1].intval);
    }
#line 5714 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 398: /* PredVar: Var  */
#line 2955 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
        {
        (yyval.vISADecl) = pBuilder->CISA_find_decl((yyvsp[0].string));
        if ((yyval.vISADecl) == nullptr)
            PARSE_ERROR((yyvsp[0].string), ": undefined predicate variable");
        if ((yyval.vISADecl)->type != PREDICATE_VAR)
            PARSE_ERROR((yyvsp[0].string), ": not a predicate variable");
    }
#line 5726 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 399: /* AddrVarAccess: Var LPAREN IntExp RPAREN  */
#line 2964 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                             {
        (yyval.regAccess).cisa_decl = pBuilder->CISA_find_decl((yyvsp[-3].string));
        if ((yyval.regAccess).cisa_decl == nullptr) {
            PARSE_ERROR((yyvsp[-3].string), ": unbound variable");
        } else if ((yyval.regAccess).cisa_decl->type != ADDRESS_VAR) {
            PARSE_ERROR((yyvsp[-3].string), ": not an address variable");
        }
        (yyval.regAccess).row = 1;
        (yyval.regAccess).elem = (int)(yyvsp[-1].intval);
    }
#line 5741 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 400: /* AddrVarAccessWithWidth: Var LPAREN IntExp RPAREN LANGLE IntExpNRA RANGLE  */
#line 2976 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                                                     {
        (yyval.regAccess).cisa_decl = pBuilder->CISA_find_decl((yyvsp[-6].string));
        if ((yyval.regAccess).cisa_decl == nullptr) {
            PARSE_ERROR((yyvsp[-6].string), ": unbound variable");
        } else if ((yyval.regAccess).cisa_decl->type != ADDRESS_VAR) {
            PARSE_ERROR((yyvsp[-6].string), ": not an address variable");
        }
        (yyval.regAccess).row = (int)(yyvsp[-1].intval);
        (yyval.regAccess).elem = (int)(yyvsp[-4].intval);
    }
#line 5756 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 401: /* SIMDMode: %empty  */
#line 2990 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
           {(yyval.intval) = 0;}
#line 5762 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 402: /* SIMDMode: LPAREN DEC_LIT RPAREN  */
#line 2993 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
       MUST_HOLD(((yyvsp[-1].intval) == 8 || (yyvsp[-1].intval) == 16 || (yyvsp[-1].intval) == 32),
                 "SIMD mode can only be 8, 16, or 32");
       (yyval.intval) = (yyvsp[-1].intval);
    }
#line 5772 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 403: /* ElemNum: DOT DEC_LIT  */
#line 3004 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        (yyval.intval) = (yyvsp[0].intval);
    }
#line 5780 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 404: /* ExecSize: LPAREN ExecSizeInt RPAREN  */
#line 3016 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        (yyval.emask_exec_size).emask = vISA_EMASK_M1;
        (yyval.emask_exec_size).exec_size = (int)(yyvsp[-1].intval);
    }
#line 5789 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 405: /* ExecSize: LPAREN Var COMMA ExecSizeInt RPAREN  */
#line 3022 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        if (!ParseEMask((yyvsp[-3].string), (yyval.emask_exec_size).emask)) {
            PARSE_ERROR("invalid execution offset info");
        }
        (yyval.emask_exec_size).exec_size = (int)(yyvsp[-1].intval);
    }
#line 5800 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 406: /* ExecSizeInt: DEC_LIT  */
#line 3030 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
    {
        if ((yyvsp[0].intval) != 1 && (yyvsp[0].intval) != 2 && (yyvsp[0].intval) != 4 && (yyvsp[0].intval) != 8 && (yyvsp[0].intval) != 16 && (yyvsp[0].intval) != 32) {
            PARSE_ERROR("invalid execution size");
        }
        (yyval.intval) = (unsigned short)(yyvsp[0].intval);
    }
#line 5811 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 412: /* IntExpCond: IntExpAND QUESTION IntExpAND COLON IntExpCond  */
#line 3044 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                                                    {(yyval.intval) = (yyvsp[-4].intval) ? (yyvsp[-2].intval) : (yyvsp[0].intval);}
#line 5817 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 414: /* IntExpAND: IntExpAND AMP IntExpXOR  */
#line 3047 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                               {(yyval.intval) = (yyvsp[-2].intval) & (yyvsp[0].intval);}
#line 5823 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 416: /* IntExpXOR: IntExpXOR CIRC IntExpOR  */
#line 3050 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                               {(yyval.intval) = (yyvsp[-2].intval) ^ (yyvsp[0].intval);}
#line 5829 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 418: /* IntExpOR: IntExpOR PIPE IntExpCmp  */
#line 3053 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                                {(yyval.intval) = (yyvsp[-2].intval) | (yyvsp[0].intval);}
#line 5835 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 420: /* IntExpCmp: IntExpRel EQ IntExpRel  */
#line 3056 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                               {(yyval.intval) = (yyvsp[-2].intval) == (yyvsp[0].intval);}
#line 5841 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 421: /* IntExpCmp: IntExpRel NEQ IntExpRel  */
#line 3057 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                               {(yyval.intval) = (yyvsp[-2].intval) != (yyvsp[0].intval);}
#line 5847 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 423: /* IntExpRel: IntExpNRA LANGLE IntExpNRA  */
#line 3060 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                                 {(yyval.intval) = (yyvsp[-2].intval) < (yyvsp[0].intval);}
#line 5853 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 424: /* IntExpRel: IntExpNRA RANGLE IntExpNRA  */
#line 3061 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                                 {(yyval.intval) = (yyvsp[-2].intval) > (yyvsp[0].intval);}
#line 5859 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 425: /* IntExpRel: IntExpNRA LEQ IntExpNRA  */
#line 3062 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                                 {(yyval.intval) = (yyvsp[-2].intval) <= (yyvsp[0].intval);}
#line 5865 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 426: /* IntExpRel: IntExpNRA GEQ IntExpNRA  */
#line 3063 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                                 {(yyval.intval) = (yyvsp[-2].intval) >= (yyvsp[0].intval);}
#line 5871 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 429: /* IntExpShift: IntExpAdd SHL IntExpAdd  */
#line 3086 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                               {(yyval.intval) = (yyvsp[-2].intval) << (yyvsp[0].intval);}
#line 5877 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 430: /* IntExpShift: IntExpAdd SHRS IntExpAdd  */
#line 3087 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                               {(yyval.intval) = (int64_t)(yyvsp[-2].intval) >> (int)(yyvsp[0].intval);}
#line 5883 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 431: /* IntExpShift: IntExpAdd SHRZ IntExpAdd  */
#line 3088 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                               {(yyval.intval) = (int64_t)((uint64_t)(yyvsp[-2].intval) >> (uint64_t)(yyvsp[0].intval));}
#line 5889 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 433: /* IntExpAdd: IntExpAdd PLUS IntExpMul  */
#line 3091 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                                {(yyval.intval) = (yyvsp[-2].intval) + (yyvsp[0].intval);}
#line 5895 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 434: /* IntExpAdd: IntExpAdd MINUS IntExpMul  */
#line 3092 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                                {(yyval.intval) = (yyvsp[-2].intval) - (yyvsp[0].intval);}
#line 5901 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 436: /* IntExpMul: IntExpMul TIMES IntExpUnr  */
#line 3095 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                                {(yyval.intval) = (yyvsp[-2].intval) * (yyvsp[0].intval);}
#line 5907 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 437: /* IntExpMul: IntExpMul SLASH IntExpUnr  */
#line 3096 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                                {
            if ((yyvsp[0].intval) == 0)
                PARSE_ERROR("division by 0");
            (yyval.intval) = (yyvsp[-2].intval) / (yyvsp[0].intval);
        }
#line 5917 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 438: /* IntExpMul: IntExpMul PERCENT IntExpUnr  */
#line 3101 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                                  {
            if ((yyvsp[0].intval) == 0)
                PARSE_ERROR("division by 0");
            (yyval.intval) = (yyvsp[-2].intval) % (yyvsp[0].intval);
        }
#line 5927 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 440: /* IntExpUnr: MINUS IntExpUnr  */
#line 3108 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                      {(yyval.intval) = -(yyvsp[0].intval);}
#line 5933 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 441: /* IntExpUnr: TILDE IntExpUnr  */
#line 3109 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                      {(yyval.intval) = ~(yyvsp[0].intval);}
#line 5939 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 442: /* IntExpUnr: BANG IntExpUnr  */
#line 3110 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                      {(yyval.intval) = !((yyvsp[0].intval));}
#line 5945 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 446: /* IntExpPrim: LPAREN IntExp RPAREN  */
#line 3118 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                           {(yyval.intval) = (yyvsp[-1].intval);}
#line 5951 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 447: /* IntExpPrim: BUILTIN_SIZEOF IDENT  */
#line 3122 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                           {
        (yyval.intval) = 0;
        ABORT_ON_FAIL(pBuilder->CISA_eval_sizeof_decl(CISAlineno, (yyvsp[0].string), (yyval.intval)));
    }
#line 5960 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 448: /* IntExpPrim: BUILTIN_SIZEOF LPAREN IDENT RPAREN  */
#line 3126 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                                         {
        // TODO: %AlignOf(...), %Max(..)
        (yyval.intval) = 0;
        ABORT_ON_FAIL(pBuilder->CISA_eval_sizeof_decl(CISAlineno, (yyvsp[-1].string), (yyval.intval)));
    }
#line 5970 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;

  case 449: /* IntExpPrim: BUILTIN_DISPATCH_SIMD_SIZE  */
#line 3132 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"
                                 {
        // e.g. %DispatchSimdSize
        // N.B. %sizeof happens above
        (yyval.intval) = 0;
        ABORT_ON_FAIL(pBuilder->CISA_lookup_builtin_constant(CISAlineno, "%DispatchSimd", (yyval.intval)));
    }
#line 5981 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"
    break;


#line 5985 "/home/harshit9745/SFXFolder/Workspace-Code/build/intel-graphics-compiler/IGC/visa/CISA.tab.cpp"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (pBuilder, yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, pBuilder);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, pBuilder);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (pBuilder, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, pBuilder);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, pBuilder);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 3151 "/home/harshit9745/SFXFolder/Workspace-Code/igc/visa/CISA.y"

///////////////////////////////////////////////////////////////////////////////
//                                                                           //
//                        Utility Functions                                  //
//                                                                           //
///////////////////////////////////////////////////////////////////////////////

void CISAerror(CISA_IR_Builder* pBuilder, char const *s)
{
    pBuilder->RecordParseError(CISAlineno, s);
}

static bool streq(const char *sym0, const char *sym1)
{
  return strcmp(sym0, sym1) == 0;
}

static bool ParseAlign(CISA_IR_Builder* pBuilder, const char *sym, VISA_Align &value)
{
    if (strcmp(sym, "byte") == 0) {
        value = ALIGN_BYTE;
    } else if (strcmp(sym, "word") == 0) {
        value = ALIGN_WORD;
    } else if (strcmp(sym, "dword") == 0) {
        value = ALIGN_DWORD;
    } else if (strcmp(sym, "qword") == 0) {
        value = ALIGN_QWORD;
    } else if (strcmp(sym, "oword") == 0) {
        value = ALIGN_OWORD;
    } else if (strcmp(sym, "GRF") == 0) {
        value = ALIGN_GRF;
    } else if (strcmp(sym, "GRFx2") == 0 || strcmp(sym, "2GRF") == 0) {
        value = ALIGN_2_GRF;
    } else if (strcmp(sym, "hword") == 0) {
        value = ALIGN_HWORD;
    } else if (strcmp(sym, "wordx32") == 0) {
        value = ALIGN_32WORD;
    } else if (strcmp(sym, "wordx64") == 0) {
        value = ALIGN_64WORD;
    } else {
        value = ALIGN_UNDEF;
        return false;
    }
    return true;
}


static VISA_Align AlignBytesToVisaAlignment(int bytes)
{
    VISA_Align val = ALIGN_UNDEF;
    switch (bytes) {
    case 1:   val = ALIGN_BYTE; break;
    case 2:   val = ALIGN_WORD; break;
    case 4:   val = ALIGN_DWORD; break;
    case 8:   val = ALIGN_QWORD; break;
    case 16:  val = ALIGN_OWORD; break;
    case 32:  val = ALIGN_HWORD; break;
    case 64:  val = ALIGN_32WORD; break;
    case 128: val = ALIGN_64WORD; break;
    default:  val = ALIGN_UNDEF; break;
    }
    return val;
}



static bool ParseEMask(
    const char* sym,
    VISA_EMask_Ctrl &emask)
{
    if (strcmp(sym, "NoMask") == 0) {
        emask = vISA_EMASK_M1_NM;
        return true;
    }
    for (int i = 0; i < vISA_NUM_EMASK +1; i++)
    {
        if (!strcmp(emask_str[i], sym))
        {
            emask = (VISA_EMask_Ctrl)i;
            return true;
        }
    }

    emask = vISA_NUM_EMASK;
    return false;
}

static int lscCheckExecSize(
    CISA_IR_Builder* pBuilder,
    LSC_SFID sfid,
    LSC_OP op,
    LSC_DATA_ORDER data_order,
    int exec_size)
{
    int is_vector_op =
        op != LSC_LOAD_BLOCK2D &&
        op != LSC_STORE_BLOCK2D;
        // other ops like LSC_LOAD_SURFACE_INFO may be SIMD1
    if (op == LSC_READ_STATE_INFO) {
        exec_size = 1;
    } else if (data_order == LSC_DATA_ORDER_NONTRANSPOSE && is_vector_op) {
        if (exec_size == UNDEFINED_EXEC_SIZE) {
            if (pBuilder->getPlatform() == Xe_DG2) // for DG2 typed is 8, untyped is 16
                exec_size = sfid == LSC_TGM ? 8 : 16;
            else if (pBuilder->getPlatform() >= Xe_PVC) // on PVC typed is 16, untyped is 32
                exec_size = sfid == LSC_TGM ? 16 : 32;
            else
                exec_size = 32; // the world is finally sane
        }
    } else {
        // block and transpose get SIMD by default
        if (exec_size == UNDEFINED_EXEC_SIZE) {
           exec_size = 1; // transpose is implicitly 1 if needed
        }
    }
    return exec_size;
}
