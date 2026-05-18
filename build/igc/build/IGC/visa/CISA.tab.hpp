/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_CISA_HOME_HARSHIT9745_WORKSPACE_CODE_BUILD_IGC_BUILD_IGC_VISA_CISA_TAB_HPP_INCLUDED
# define YY_CISA_HOME_HARSHIT9745_WORKSPACE_CODE_BUILD_IGC_BUILD_IGC_VISA_CISA_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int CISAdebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ALIGN_KEYWORD = 258,           /* ALIGN_KEYWORD  */
    ATOMIC_SUB_OP = 259,           /* ATOMIC_SUB_OP  */
    DIRECTIVE_DECL = 260,          /* DIRECTIVE_DECL  */
    DIRECTIVE_FUNC = 261,          /* DIRECTIVE_FUNC  */
    DIRECTIVE_FUNCDECL = 262,      /* DIRECTIVE_FUNCDECL  */
    DIRECTIVE_GLOBAL_FUNC = 263,   /* DIRECTIVE_GLOBAL_FUNC  */
    DIRECTIVE_IMPLICIT = 264,      /* DIRECTIVE_IMPLICIT  */
    DIRECTIVE_INPUT = 265,         /* DIRECTIVE_INPUT  */
    DIRECTIVE_KERNEL = 266,        /* DIRECTIVE_KERNEL  */
    DIRECTIVE_KERNEL_ATTR = 267,   /* DIRECTIVE_KERNEL_ATTR  */
    DIRECTIVE_VERSION = 268,       /* DIRECTIVE_VERSION  */
    ALIAS_EQ = 269,                /* ALIAS_EQ  */
    ALIGN_EQ = 270,                /* ALIGN_EQ  */
    ATTR_EQ = 271,                 /* ATTR_EQ  */
    OFFSET_EQ = 272,               /* OFFSET_EQ  */
    NUM_ELTS_EQ = 273,             /* NUM_ELTS_EQ  */
    V_NAME_EQ = 274,               /* V_NAME_EQ  */
    SIZE_EQ = 275,                 /* SIZE_EQ  */
    V_TYPE_EQ_G = 276,             /* V_TYPE_EQ_G  */
    V_TYPE_EQ_P = 277,             /* V_TYPE_EQ_P  */
    V_TYPE_EQ_A = 278,             /* V_TYPE_EQ_A  */
    V_TYPE_EQ_S = 279,             /* V_TYPE_EQ_S  */
    V_TYPE_EQ_T = 280,             /* V_TYPE_EQ_T  */
    CPS = 281,                     /* CPS  */
    NON_UNIFORM_SAMPLER = 282,     /* NON_UNIFORM_SAMPLER  */
    PIXEL_NULL_MASK = 283,         /* PIXEL_NULL_MASK  */
    RAW_SEND_STRING = 284,         /* RAW_SEND_STRING  */
    RAW_SENDC_STRING = 285,        /* RAW_SENDC_STRING  */
    RAW_SENDS_STRING = 286,        /* RAW_SENDS_STRING  */
    RAW_SENDS_EOT_STRING = 287,    /* RAW_SENDS_EOT_STRING  */
    RAW_SENDSC_STRING = 288,       /* RAW_SENDSC_STRING  */
    RAW_SENDSC_EOT_STRING = 289,   /* RAW_SENDSC_EOT_STRING  */
    SAT = 290,                     /* SAT  */
    SRCMOD_ABS = 291,              /* SRCMOD_ABS  */
    SRCMOD_NEG = 292,              /* SRCMOD_NEG  */
    SRCMOD_NEGABS = 293,           /* SRCMOD_NEGABS  */
    SRCMOD_NOT = 294,              /* SRCMOD_NOT  */
    BFN_OP = 295,                  /* BFN_OP  */
    DPAS_OP = 296,                 /* DPAS_OP  */
    SVM_ALIGNED = 297,             /* SVM_ALIGNED  */
    SVM_UNALIGNED = 298,           /* SVM_UNALIGNED  */
    NBARRIER_SIGNAL = 299,         /* NBARRIER_SIGNAL  */
    NBARRIER_WAIT = 300,           /* NBARRIER_WAIT  */
    ITYPE = 301,                   /* ITYPE  */
    DECL_DATA_TYPE = 302,          /* DECL_DATA_TYPE  */
    DFTYPE = 303,                  /* DFTYPE  */
    FTYPE = 304,                   /* FTYPE  */
    HFTYPE = 305,                  /* HFTYPE  */
    BFTYPE = 306,                  /* BFTYPE  */
    VTYPE = 307,                   /* VTYPE  */
    COND_MOD = 308,                /* COND_MOD  */
    LANGLE = 309,                  /* LANGLE  */
    RANGLE = 310,                  /* RANGLE  */
    LBRACK = 311,                  /* LBRACK  */
    RBRACK = 312,                  /* RBRACK  */
    IND_LBRACK = 313,              /* IND_LBRACK  */
    LPAREN = 314,                  /* LPAREN  */
    RPAREN = 315,                  /* RPAREN  */
    LBRACE = 316,                  /* LBRACE  */
    RBRACE = 317,                  /* RBRACE  */
    DOT = 318,                     /* DOT  */
    COMMA = 319,                   /* COMMA  */
    SEMI = 320,                    /* SEMI  */
    COLON = 321,                   /* COLON  */
    SLASH = 322,                   /* SLASH  */
    PERCENT = 323,                 /* PERCENT  */
    EQUALS = 324,                  /* EQUALS  */
    PLUS = 325,                    /* PLUS  */
    MINUS = 326,                   /* MINUS  */
    TIMES = 327,                   /* TIMES  */
    AMP = 328,                     /* AMP  */
    CIRC = 329,                    /* CIRC  */
    PIPE = 330,                    /* PIPE  */
    TILDE = 331,                   /* TILDE  */
    BANG = 332,                    /* BANG  */
    QUESTION = 333,                /* QUESTION  */
    LEQ = 334,                     /* LEQ  */
    GEQ = 335,                     /* GEQ  */
    EQ = 336,                      /* EQ  */
    NEQ = 337,                     /* NEQ  */
    SHL = 338,                     /* SHL  */
    SHRS = 339,                    /* SHRS  */
    SHRZ = 340,                    /* SHRZ  */
    LABEL = 341,                   /* LABEL  */
    IDENT = 342,                   /* IDENT  */
    BUILTIN_NULL = 343,            /* BUILTIN_NULL  */
    BUILTIN = 344,                 /* BUILTIN  */
    STRING_LIT = 345,              /* STRING_LIT  */
    NEWLINE = 346,                 /* NEWLINE  */
    UNIFORM = 347,                 /* UNIFORM  */
    RTWRITE_OPTION = 348,          /* RTWRITE_OPTION  */
    MEDIA_MODE = 349,              /* MEDIA_MODE  */
    OWORD_MODIFIER = 350,          /* OWORD_MODIFIER  */
    SAMPLER_CHANNEL = 351,         /* SAMPLER_CHANNEL  */
    CHANNEL_OUTPUT = 352,          /* CHANNEL_OUTPUT  */
    EXECMODE = 353,                /* EXECMODE  */
    CNTRL = 354,                   /* CNTRL  */
    FENCE_OPTIONS = 355,           /* FENCE_OPTIONS  */
    ADDR_ADD_OP = 356,             /* ADDR_ADD_OP  */
    UNARY_LOGIC_OP = 357,          /* UNARY_LOGIC_OP  */
    BINARY_LOGIC_OP = 358,         /* BINARY_LOGIC_OP  */
    TERNARY_LOGIC_OP = 359,        /* TERNARY_LOGIC_OP  */
    QUATERNARY_LOGIC_OP = 360,     /* QUATERNARY_LOGIC_OP  */
    SEL_OP = 361,                  /* SEL_OP  */
    MIN_OP = 362,                  /* MIN_OP  */
    MAX_OP = 363,                  /* MAX_OP  */
    ANTI_TRIG_OP = 364,            /* ANTI_TRIG_OP  */
    MATH2_OP = 365,                /* MATH2_OP  */
    MATH3_OP = 366,                /* MATH3_OP  */
    ARITH2_OP = 367,               /* ARITH2_OP  */
    ARITH3_OP = 368,               /* ARITH3_OP  */
    ARITH4_OP = 369,               /* ARITH4_OP  */
    ARITH4_OP2 = 370,              /* ARITH4_OP2  */
    CMP_OP = 371,                  /* CMP_OP  */
    SVM_OP = 372,                  /* SVM_OP  */
    SVM_SCATTER_OP = 373,          /* SVM_SCATTER_OP  */
    SVM_GATHER4SCALED_OP = 374,    /* SVM_GATHER4SCALED_OP  */
    SVM_SCATTER4SCALED_OP = 375,   /* SVM_SCATTER4SCALED_OP  */
    SVM_ATOMIC_OP = 376,           /* SVM_ATOMIC_OP  */
    OWORD_OP = 377,                /* OWORD_OP  */
    MEDIA_OP = 378,                /* MEDIA_OP  */
    SCATTER_OP = 379,              /* SCATTER_OP  */
    SCATTER_TYPED_OP = 380,        /* SCATTER_TYPED_OP  */
    SCATTER_SCALED_OP = 381,       /* SCATTER_SCALED_OP  */
    SCATTER4_SCALED_OP = 382,      /* SCATTER4_SCALED_OP  */
    BARRIER_OP = 383,              /* BARRIER_OP  */
    SBARRIER_SIGNAL = 384,         /* SBARRIER_SIGNAL  */
    SBARRIER_WAIT = 385,           /* SBARRIER_WAIT  */
    DWORD_ATOMIC_OP = 386,         /* DWORD_ATOMIC_OP  */
    TYPED_ATOMIC_OP = 387,         /* TYPED_ATOMIC_OP  */
    SAMPLE_OP = 388,               /* SAMPLE_OP  */
    SAMPLE_UNORM_OP = 389,         /* SAMPLE_UNORM_OP  */
    VME_IME_OP = 390,              /* VME_IME_OP  */
    VME_SIC_OP = 391,              /* VME_SIC_OP  */
    VME_FBR_OP = 392,              /* VME_FBR_OP  */
    BRANCH_OP = 393,               /* BRANCH_OP  */
    RET_OP = 394,                  /* RET_OP  */
    IFCALL = 395,                  /* IFCALL  */
    FCALL = 396,                   /* FCALL  */
    FADDR = 397,                   /* FADDR  */
    SWITCHJMP_OP = 398,            /* SWITCHJMP_OP  */
    MOVS_OP = 399,                 /* MOVS_OP  */
    SETP_OP = 400,                 /* SETP_OP  */
    MOV_OP = 401,                  /* MOV_OP  */
    FILE_OP = 402,                 /* FILE_OP  */
    LOC_OP = 403,                  /* LOC_OP  */
    CACHE_FLUSH_OP = 404,          /* CACHE_FLUSH_OP  */
    WAIT_OP = 405,                 /* WAIT_OP  */
    FENCE_GLOBAL_OP = 406,         /* FENCE_GLOBAL_OP  */
    FENCE_LOCAL_OP = 407,          /* FENCE_LOCAL_OP  */
    FENCE_SW_OP = 408,             /* FENCE_SW_OP  */
    YIELD_OP = 409,                /* YIELD_OP  */
    SAMPLE_3D_OP = 410,            /* SAMPLE_3D_OP  */
    LOAD_3D_OP = 411,              /* LOAD_3D_OP  */
    SAMPLE4_3D_OP = 412,           /* SAMPLE4_3D_OP  */
    RESINFO_OP_3D = 413,           /* RESINFO_OP_3D  */
    SAMPLEINFO_OP_3D = 414,        /* SAMPLEINFO_OP_3D  */
    RTWRITE_OP_3D = 415,           /* RTWRITE_OP_3D  */
    URBWRITE_OP_3D = 416,          /* URBWRITE_OP_3D  */
    LIFETIME_START_OP = 417,       /* LIFETIME_START_OP  */
    LIFETIME_END_OP = 418,         /* LIFETIME_END_OP  */
    AVS_OP = 419,                  /* AVS_OP  */
    BREAKPOINT_OP = 420,           /* BREAKPOINT_OP  */
    CALL_OP = 421,                 /* CALL_OP  */
    PRED_CNTL = 422,               /* PRED_CNTL  */
    F32_LIT = 423,                 /* F32_LIT  */
    F64_LIT = 424,                 /* F64_LIT  */
    DEC_LIT = 425,                 /* DEC_LIT  */
    HEX_LIT = 426,                 /* HEX_LIT  */
    BUILTIN_SIZEOF = 427,          /* BUILTIN_SIZEOF  */
    BUILTIN_DISPATCH_SIMD_SIZE = 428, /* BUILTIN_DISPATCH_SIMD_SIZE  */
    QW_SCATTER_OP = 429,           /* QW_SCATTER_OP  */
    LSC_CACHING_OPT = 430,         /* LSC_CACHING_OPT  */
    LSC_ADDR_SIZE_TK = 431,        /* LSC_ADDR_SIZE_TK  */
    LSC_DATA_SHAPE_TK = 432,       /* LSC_DATA_SHAPE_TK  */
    LSC_DATA_SHAPE_TK_CHMASK = 433, /* LSC_DATA_SHAPE_TK_CHMASK  */
    LSC_DATA_SHAPE_TK_BLOCK2D = 434, /* LSC_DATA_SHAPE_TK_BLOCK2D  */
    LSC_AM_FLAT = 435,             /* LSC_AM_FLAT  */
    LSC_AM_BTI = 436,              /* LSC_AM_BTI  */
    LSC_AM_BSS = 437,              /* LSC_AM_BSS  */
    LSC_AM_SS = 438,               /* LSC_AM_SS  */
    LSC_AM_ARG = 439,              /* LSC_AM_ARG  */
    LSC_FENCE_OP_TYPE = 440,       /* LSC_FENCE_OP_TYPE  */
    LSC_FENCE_SCOPE = 441,         /* LSC_FENCE_SCOPE  */
    LSC_SFID_UNTYPED_TOKEN = 442,  /* LSC_SFID_UNTYPED_TOKEN  */
    LSC_SFID_TYPED_TOKEN = 443,    /* LSC_SFID_TYPED_TOKEN  */
    LSC_LOAD_MNEMONIC = 444,       /* LSC_LOAD_MNEMONIC  */
    LSC_LOAD_STRIDED_MNEMONIC = 445, /* LSC_LOAD_STRIDED_MNEMONIC  */
    LSC_LOAD_BLOCK2D_MNEMONIC = 446, /* LSC_LOAD_BLOCK2D_MNEMONIC  */
    LSC_STORE_MNEMONIC = 447,      /* LSC_STORE_MNEMONIC  */
    LSC_STORE_STRIDED_MNEMONIC = 448, /* LSC_STORE_STRIDED_MNEMONIC  */
    LSC_STORE_BLOCK2D_MNEMONIC = 449, /* LSC_STORE_BLOCK2D_MNEMONIC  */
    LSC_ATOMIC_MNEMONIC = 450,     /* LSC_ATOMIC_MNEMONIC  */
    LSC_READ_STATE_INFO_MNEMONIC = 451, /* LSC_READ_STATE_INFO_MNEMONIC  */
    LSC_FENCE_MNEMONIC = 452,      /* LSC_FENCE_MNEMONIC  */
    FCVT_OP = 453,                 /* FCVT_OP  */
    LSC_DATA_SHAPE_TK_TYPED_BLOCK2D = 454 /* LSC_DATA_SHAPE_TK_TYPED_BLOCK2D  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 84 "CISA.y"

    int64_t                intval;
    double                 fltval;

    struct strlitbuf_struct {
        char      decoded[4096];
        size_t    len;
    } strlit;
    char *                 string;

    VISA_Type              type;
    ISA_Opcode             opcode;
    bool                   sat;

    VISA_Cond_Mod          cond_mod;

    VISA_opnd *            pred_reg;
    VISA_PREDICATE_STATE   pred_sign;
    VISA_PREDICATE_CONTROL pred_ctrl;

    // to tell call is fc_call or subroutine call
    struct call_sub_or_fc {
        ISA_Opcode opcode;
        bool       is_fccall;
    } cisa_call;

    struct {
        VISA_Modifier mod;
    } src_mod;

    struct {
        unsigned int v_stride;
        unsigned int h_stride;
        unsigned int width;
    } cisa_region;

    struct {
        int                row;
        int                elem;
    } offset;

    struct {
        Common_ISA_Operand_Class type;
        VISA_opnd * cisa_gen_opnd;
    } genOperand;

    struct {
        char * var_name;
        VISA_opnd * cisa_gen_opnd;
        unsigned char streamMode;
        unsigned char searchCtrl;
    } vmeOpndIvb;

    struct {
        VISA_opnd * cisa_fbrMbMode_opnd;
        VISA_opnd * cisa_fbrSubMbShape_opnd;
        VISA_opnd * cisa_fbrSubPredMode_opnd;
    } vmeOpndFbr;

    struct {
        int            row;
        int            elem;
        int            immOff;
        VISA_opnd *    cisa_gen_opnd;
        CISA_GEN_VAR * cisa_decl;
    } regAccess;

    struct {
        char *             aliasname;
        int                offset;
    } alias;

    VISA_opnd * RawVar;

    struct {
        unsigned char offset;
        VISA_opnd * cisa_gen_opnd;
    } StateVar;

    struct {
        VISA_EMask_Ctrl emask;
        int exec_size;
    } emask_exec_size;

    struct attr_gen_struct*  pattr_gen;

    struct dpas_info_struct {
        ISA_Opcode    opcode;
        GenPrecision  src2Precision;
        GenPrecision  src1Precision;
        uint8_t       depth;
        uint8_t       count;
    } dpas_info;

    struct bfn_op_struct {
        uint8_t func_ctrl;
    } bfn_info;

    ///////////////////////////////////////////////////////////////////////////
    // Support for LSC instructions
    LSC_OP                  lsc_subOpcode;
    ISA_Opcode              lsc_opcode;
    LSC_CACHE_OPTS          lsc_caching_opts;
    LSC_CACHE_OPT           lsc_caching_opt; // for lexer to parser
    LSC_FENCE_OP            lsc_fence_op;
    LSC_SCOPE               lsc_scope;
    LSC_SFID                lsc_sfid;

    struct {
        VISA_opnd              *reg;
        LSC_DATA_SHAPE          shape;
    } lsc_data_operand;
    LSC_DATA_SHAPE            lsc_data_shape;
    struct {
        VISA_opnd              *reg;
        LSC_DATA_SHAPE_BLOCK2D  shape2D;
    } lsc_data_operand2d;
    LSC_DATA_SHAPE_BLOCK2D    lsc_data_shape2d;

    struct {
        VISA_opnd               *surface;
        int                      surfaceIndex;
        // for UNTYPED
        //  simple:  regs[0] = reg addr
        //  strided: regs[0] = base; regs[1] = strided
        //  block2d: regs = {surfBase,surfWidth,surfHeight,surfPitch,surfX,surfY}
        //
        // for TYPED: {U, V, R, sample index/LOD}
        // for TYPED block2d: regs = {BlockStartX, BlockStartY}
        VISA_opnd               *regs[6];
        LSC_ADDR                 addr;
    } lsc_addr_operand;
    struct {
        VISA_opnd               *surface;
        int                      surfaceIndex;
        // for UNTYPED
        //  simple:  regs[0] = reg addr
        //  strided: regs[0] = base; regs[1] = strided
        //  block2d: regs = {surfBase,surfWidth,surfHeight,surfPitch,surfX,surfY}
        //
        // for TYPED: {U, V, R, sample index/LOD}
        // for TYPED block2d: regs = {BlockStartX, BlockStartY}
        VISA_opnd               *regs[6];
        int                      immOffsets[2];
        LSC_ADDR                 addr;
    } lsc_block2d_addr_operand;
    struct {
        VISA_opnd *reg;
        int offset;
    } lsc_typed_addr_operand;
    struct {
        VISA_opnd *regs[6];
        int uvrOffsets[3];
    } lsc_typed_addr_operand_list;
    struct {
        VISA_opnd              *surface;
        int                     surfaceIndex;
        VISA_opnd              *regs[6];
        int                     uvrOffsets[3];
        LSC_ADDR                addr;
    } lsc_typed_operand;
    LSC_ADDR_SIZE              lsc_addr_size;
    LSC_ADDR_TYPE              lsc_addr_type;
    VISA_opnd                 *lsc_addr_surface_ident; // vec. opnd imm or reg
    struct lsc_addr_model_struct {
        LSC_ADDR_TYPE          type;
        VISA_opnd             *surface; // can be imm or reg
        int                    surfaceIndex;
    } lsc_addr_model;
    struct sampler_base_struct {
        char                  *base;
        unsigned int          offset;
    } sampler_base;

    struct {
        VISA_opnd *reg;
        LSC_DATA_SHAPE_TYPED_BLOCK2D shape_typed2d;
    } lsc_data_operand_typed2d;
    LSC_DATA_SHAPE_TYPED_BLOCK2D lsc_data_shape_typed2d;

    // Align Support in Declaration
    VISA_Align             align;

    VISAAtomicOps          atomic_op;
    VISASampler3DSubOpCode sample3DOp;

    MEDIA_LD_mod           media_mode;
    bool                   oword_mod;
    VISAChannelMask        s_channel; // Cannot use ChannelMask here as it's a member of union where non-trivial constructor is not allowed.
    CHANNEL_OUTPUT_FORMAT  s_channel_output;
    VISA_EMask_Ctrl        emask;
    OutputFormatControl    cntrl;
    AVSExecMode            execMode;
    unsigned char          fence_options;

    // Pixel null mask for sampler instructions.
    bool                   pixel_null_mask;

    // CPS LOD compensation enable for 3d sample.
    bool                   cps;
    bool                   non_uniform_sampler;
    bool                   flag;

    CISA_GEN_VAR*          vISADecl;

#line 469 "/home/harshit9745/Workspace-Code/build/igc/build/IGC/visa/CISA.tab.hpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE CISAlval;


int CISAparse (CISA_IR_Builder* pBuilder);


#endif /* !YY_CISA_HOME_HARSHIT9745_WORKSPACE_CODE_BUILD_IGC_BUILD_IGC_VISA_CISA_TAB_HPP_INCLUDED  */
