// A Bison parser, made by GNU Bison 3.8.2.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015, 2018-2021 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.

// DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
// especially those whose name start with YY_ or yy_.  They are
// private implementation details that can be changed or removed.



// First part of user prologue.
#line 46 "/home/luizfelipe/ike/source/iked/conf.parse.yy"


#include <string>
#include "iked.h"
#include "conf.parse.hpp"


#line 49 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"


#include "conf.parse.hpp"

// Second part of user prologue.
#line 68 "/home/luizfelipe/ike/source/iked/conf.parse.yy"


#define YY_DECL                                     \
    yy::conf_parser::token_type                     \
    yylex( yy::conf_parser::semantic_type * yylval, \
    yy::conf_parser::location_type * yylloc,        \
    IKED & iked )

YY_DECL;

IDB_PEER *		peer;
IKE_PROPOSAL		proposal;
IDB_LIST_PH2ID *	idlist;
BDATA			fpass;


#line 72 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"



#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif


// Whether we are compiled with exception support.
#ifndef YY_EXCEPTIONS
# if defined __GNUC__ && !defined __EXCEPTIONS
#  define YY_EXCEPTIONS 0
# else
#  define YY_EXCEPTIONS 1
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (false)
# endif


// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << '\n';                       \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yy_stack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YY_USE (Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void> (0)
# define YY_STACK_PRINT()                static_cast<void> (0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

namespace yy {
#line 165 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"

  /// Build a parser object.
  conf_parser::conf_parser (IKED & iked_yyarg)
#if YYDEBUG
    : yydebug_ (false),
      yycdebug_ (&std::cerr),
#else
    :
#endif
      iked (iked_yyarg)
  {}

  conf_parser::~conf_parser ()
  {}

  conf_parser::syntax_error::~syntax_error () YY_NOEXCEPT YY_NOTHROW
  {}

  /*---------.
  | symbol.  |
  `---------*/

  // basic_symbol.
  template <typename Base>
  conf_parser::basic_symbol<Base>::basic_symbol (const basic_symbol& that)
    : Base (that)
    , value (that.value)
    , location (that.location)
  {}


  /// Constructor for valueless symbols.
  template <typename Base>
  conf_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, YY_MOVE_REF (location_type) l)
    : Base (t)
    , value ()
    , location (l)
  {}

  template <typename Base>
  conf_parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, YY_RVREF (value_type) v, YY_RVREF (location_type) l)
    : Base (t)
    , value (YY_MOVE (v))
    , location (YY_MOVE (l))
  {}


  template <typename Base>
  conf_parser::symbol_kind_type
  conf_parser::basic_symbol<Base>::type_get () const YY_NOEXCEPT
  {
    return this->kind ();
  }


  template <typename Base>
  bool
  conf_parser::basic_symbol<Base>::empty () const YY_NOEXCEPT
  {
    return this->kind () == symbol_kind::S_YYEMPTY;
  }

  template <typename Base>
  void
  conf_parser::basic_symbol<Base>::move (basic_symbol& s)
  {
    super_type::move (s);
    value = YY_MOVE (s.value);
    location = YY_MOVE (s.location);
  }

  // by_kind.
  conf_parser::by_kind::by_kind () YY_NOEXCEPT
    : kind_ (symbol_kind::S_YYEMPTY)
  {}

#if 201103L <= YY_CPLUSPLUS
  conf_parser::by_kind::by_kind (by_kind&& that) YY_NOEXCEPT
    : kind_ (that.kind_)
  {
    that.clear ();
  }
#endif

  conf_parser::by_kind::by_kind (const by_kind& that) YY_NOEXCEPT
    : kind_ (that.kind_)
  {}

  conf_parser::by_kind::by_kind (token_kind_type t) YY_NOEXCEPT
    : kind_ (yytranslate_ (t))
  {}



  void
  conf_parser::by_kind::clear () YY_NOEXCEPT
  {
    kind_ = symbol_kind::S_YYEMPTY;
  }

  void
  conf_parser::by_kind::move (by_kind& that)
  {
    kind_ = that.kind_;
    that.clear ();
  }

  conf_parser::symbol_kind_type
  conf_parser::by_kind::kind () const YY_NOEXCEPT
  {
    return kind_;
  }


  conf_parser::symbol_kind_type
  conf_parser::by_kind::type_get () const YY_NOEXCEPT
  {
    return this->kind ();
  }



  // by_state.
  conf_parser::by_state::by_state () YY_NOEXCEPT
    : state (empty_state)
  {}

  conf_parser::by_state::by_state (const by_state& that) YY_NOEXCEPT
    : state (that.state)
  {}

  void
  conf_parser::by_state::clear () YY_NOEXCEPT
  {
    state = empty_state;
  }

  void
  conf_parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  conf_parser::by_state::by_state (state_type s) YY_NOEXCEPT
    : state (s)
  {}

  conf_parser::symbol_kind_type
  conf_parser::by_state::kind () const YY_NOEXCEPT
  {
    if (state == empty_state)
      return symbol_kind::S_YYEMPTY;
    else
      return YY_CAST (symbol_kind_type, yystos_[+state]);
  }

  conf_parser::stack_symbol_type::stack_symbol_type ()
  {}

  conf_parser::stack_symbol_type::stack_symbol_type (YY_RVREF (stack_symbol_type) that)
    : super_type (YY_MOVE (that.state), YY_MOVE (that.value), YY_MOVE (that.location))
  {
#if 201103L <= YY_CPLUSPLUS
    // that is emptied.
    that.state = empty_state;
#endif
  }

  conf_parser::stack_symbol_type::stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) that)
    : super_type (s, YY_MOVE (that.value), YY_MOVE (that.location))
  {
    // that is emptied.
    that.kind_ = symbol_kind::S_YYEMPTY;
  }

#if YY_CPLUSPLUS < 201103L
  conf_parser::stack_symbol_type&
  conf_parser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
    value = that.value;
    location = that.location;
    return *this;
  }

  conf_parser::stack_symbol_type&
  conf_parser::stack_symbol_type::operator= (stack_symbol_type& that)
  {
    state = that.state;
    value = that.value;
    location = that.location;
    // that is emptied.
    that.state = empty_state;
    return *this;
  }
#endif

  template <typename Base>
  void
  conf_parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);

    // User destructor.
    switch (yysym.kind ())
    {
      case symbol_kind::S_QUOTED: // "quoted value"
#line 232 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
                    { delete (yysym.value.bval); }
#line 377 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
        break;

      case symbol_kind::S_LABEL: // "label value"
#line 233 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
                    { delete (yysym.value.bval); }
#line 383 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
        break;

      case symbol_kind::S_ADDRESS: // "address value"
#line 234 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
                    { delete (yysym.value.bval); }
#line 389 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
        break;

      case symbol_kind::S_NETWORK: // "network value"
#line 235 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
                    { delete (yysym.value.bval); }
#line 395 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
        break;

      default:
        break;
    }
  }

#if YYDEBUG
  template <typename Base>
  void
  conf_parser::yy_print_ (std::ostream& yyo, const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YY_USE (yyoutput);
    if (yysym.empty ())
      yyo << "empty symbol";
    else
      {
        symbol_kind_type yykind = yysym.kind ();
        yyo << (yykind < YYNTOKENS ? "token" : "nterm")
            << ' ' << yysym.name () << " ("
            << yysym.location << ": ";
        YY_USE (yykind);
        yyo << ')';
      }
  }
#endif

  void
  conf_parser::yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym)
  {
    if (m)
      YY_SYMBOL_PRINT (m, sym);
    yystack_.push (YY_MOVE (sym));
  }

  void
  conf_parser::yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym)
  {
#if 201103L <= YY_CPLUSPLUS
    yypush_ (m, stack_symbol_type (s, std::move (sym)));
#else
    stack_symbol_type ss (s, sym);
    yypush_ (m, ss);
#endif
  }

  void
  conf_parser::yypop_ (int n) YY_NOEXCEPT
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  conf_parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  conf_parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  conf_parser::debug_level_type
  conf_parser::debug_level () const
  {
    return yydebug_;
  }

  void
  conf_parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  conf_parser::state_type
  conf_parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - YYNTOKENS] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - YYNTOKENS];
  }

  bool
  conf_parser::yy_pact_value_is_default_ (int yyvalue) YY_NOEXCEPT
  {
    return yyvalue == yypact_ninf_;
  }

  bool
  conf_parser::yy_table_value_is_error_ (int yyvalue) YY_NOEXCEPT
  {
    return yyvalue == yytable_ninf_;
  }

  int
  conf_parser::operator() ()
  {
    return parse ();
  }

  int
  conf_parser::parse ()
  {
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

#if YY_EXCEPTIONS
    try
#endif // YY_EXCEPTIONS
      {
    YYCDEBUG << "Starting parse\n";


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, YY_MOVE (yyla));

  /*-----------------------------------------------.
  | yynewstate -- push a new symbol on the stack.  |
  `-----------------------------------------------*/
  yynewstate:
    YYCDEBUG << "Entering state " << int (yystack_[0].state) << '\n';
    YY_STACK_PRINT ();

    // Accept?
    if (yystack_[0].state == yyfinal_)
      YYACCEPT;

    goto yybackup;


  /*-----------.
  | yybackup.  |
  `-----------*/
  yybackup:
    // Try to take a decision without lookahead.
    yyn = yypact_[+yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token\n";
#if YY_EXCEPTIONS
        try
#endif // YY_EXCEPTIONS
          {
            yyla.kind_ = yytranslate_ (yylex (&yyla.value, &yyla.location, iked));
          }
#if YY_EXCEPTIONS
        catch (const syntax_error& yyexc)
          {
            YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
            error (yyexc);
            goto yyerrlab1;
          }
#endif // YY_EXCEPTIONS
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    if (yyla.kind () == symbol_kind::S_YYerror)
    {
      // The scanner already issued an error message, process directly
      // to error recovery.  But do not keep the error token as
      // lookahead, it is too special and may lead us to an endless
      // loop in error recovery. */
      yyla.kind_ = symbol_kind::S_YYUNDEF;
      goto yyerrlab1;
    }

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.kind ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.kind ())
      {
        goto yydefault;
      }

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", state_type (yyn), YY_MOVE (yyla));
    goto yynewstate;


  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[+yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;


  /*-----------------------------.
  | yyreduce -- do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_ (yystack_[yylen].state, yyr1_[yyn]);
      /* If YYLEN is nonzero, implement the default value of the
         action: '$$ = $1'.  Otherwise, use the top of the stack.

         Otherwise, the following line sets YYLHS.VALUE to garbage.
         This behavior is undocumented and Bison users should not rely
         upon it.  */
      if (yylen)
        yylhs.value = yystack_[yylen - 1].value;
      else
        yylhs.value = yystack_[0].value;

      // Default location.
      {
        stack_type::slice range (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, range, yylen);
        yyerror_range[1].location = yylhs.location;
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
#if YY_EXCEPTIONS
      try
#endif // YY_EXCEPTIONS
        {
          switch (yyn)
            {
  case 12: // $@1: %empty
#line 270 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		IKE_SADDR saddr;
		memset( &saddr, 0, sizeof( saddr ) );
		saddr.saddr4.sin_family = AF_INET;
		SET_SALEN( &saddr.saddr4, sizeof( sockaddr_in ) ); 
		saddr.saddr4.sin_port = htons( (yystack_[0].value.ival) );

		if( iked.socket_create( saddr, false ) != LIBIKE_OK )
			error( yylhs.location, std::string( "daemon network configuration failed\n" ) );
	}
#line 675 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 14: // $@2: %empty
#line 282 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		IKE_SADDR saddr;
		memset( &saddr, 0, sizeof( saddr ) );
		SET_SALEN( &saddr.saddr4, sizeof( sockaddr_in ) );
		saddr.saddr4.sin_family = AF_INET;
		saddr.saddr4.sin_addr.s_addr = inet_addr( (yystack_[1].value.bval)->text() );
		saddr.saddr4.sin_port = htons( (yystack_[0].value.ival) );

		if( iked.socket_create( saddr, false ) != LIBIKE_OK )
			error( yylhs.location, std::string( "daemon network configuration failed" ) );

		delete (yystack_[1].value.bval);
	}
#line 693 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 16: // $@3: %empty
#line 297 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
#ifdef OPT_NATT
		IKE_SADDR saddr;
		memset( &saddr, 0, sizeof( saddr ) );
		SET_SALEN( &saddr.saddr4, sizeof( sockaddr_in ) );
		saddr.saddr4.sin_family = AF_INET;
		saddr.saddr4.sin_port = htons( (yystack_[0].value.ival) );

		if( iked.socket_create( saddr, true ) != LIBIKE_OK )
			error( yylhs.location, std::string( "daemon network configuration failed" ) );
#else
		error( yylhs.location, std::string( "iked was compiled without NATT support" ) );
#endif
	}
#line 712 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 18: // $@4: %empty
#line 313 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
#ifdef OPT_NATT
		IKE_SADDR saddr;
		memset( &saddr, 0, sizeof( saddr ) );
		SET_SALEN( &saddr.saddr4, sizeof( sockaddr_in ) );
		saddr.saddr4.sin_family = AF_INET;
		saddr.saddr4.sin_addr.s_addr = inet_addr( (yystack_[1].value.bval)->text() );
		saddr.saddr4.sin_port = htons( (yystack_[0].value.ival) );

		if( iked.socket_create( saddr, true ) != LIBIKE_OK )
			error( yylhs.location, std::string( "daemon network configuration failed" ) );

		delete (yystack_[1].value.bval);
#else
		error( yylhs.location, std::string( "iked was compiled without NATT support" ) );
#endif
	}
#line 734 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 20: // $@5: %empty
#line 332 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		if( iked.path_log[ 0 ] == 0 )
		{
			snprintf( iked.path_log, MAX_PATH, "iked" );
			iked.logflags |= LOGFLAG_SYSTEM;
		}
	}
#line 746 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 22: // $@6: %empty
#line 341 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		if( iked.path_log[ 0 ] == 0 )
			snprintf( iked.path_log, MAX_PATH, "%s", (yystack_[0].value.bval)->text() );
		delete (yystack_[0].value.bval);
	}
#line 756 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 24: // $@7: %empty
#line 348 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		snprintf( iked.path_dhcp, MAX_PATH, "%s", (yystack_[0].value.bval)->text() );
		delete (yystack_[0].value.bval);
	}
#line 765 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 26: // $@8: %empty
#line 354 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		iked.level = LLOG_NONE;
	}
#line 773 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 28: // $@9: %empty
#line 359 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		iked.level = LLOG_ERROR;
	}
#line 781 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 30: // $@10: %empty
#line 364 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		iked.level = LLOG_INFO;
	}
#line 789 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 32: // $@11: %empty
#line 369 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		iked.level = LLOG_DEBUG;
	}
#line 797 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 34: // $@12: %empty
#line 374 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		iked.level = LLOG_LOUD;
	}
#line 805 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 36: // $@13: %empty
#line 379 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		iked.level = LLOG_DECODE;
	}
#line 813 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 38: // $@14: %empty
#line 384 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		snprintf( iked.path_decrypt, MAX_PATH, "%s", (yystack_[0].value.bval)->text() );
		iked.dump_decrypt = true;
		delete (yystack_[0].value.bval);
	}
#line 823 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 40: // $@15: %empty
#line 391 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		snprintf( iked.path_encrypt, MAX_PATH, "%s", (yystack_[0].value.bval)->text() );
		iked.dump_encrypt = true;
		delete (yystack_[0].value.bval);
	}
#line 833 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 42: // $@16: %empty
#line 398 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		iked.retry_delay = (yystack_[0].value.ival);
	}
#line 841 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 44: // $@17: %empty
#line 403 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		iked.retry_count = (yystack_[0].value.ival);
	}
#line 849 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 46: // $@18: %empty
#line 416 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		idlist = new IDB_LIST_PH2ID;
		if( idlist == NULL )
			error( yylhs.location, std::string( "unable to allocate idlist for netgroup" ) + (yystack_[0].value.bval)->text() );

		idlist->name.set( *(yystack_[0].value.bval) );
		iked.idb_list_netgrp.add_entry( idlist );
		delete (yystack_[0].value.bval);
	}
#line 863 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 50: // $@19: %empty
#line 433 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		char * pos = strchr( (yystack_[0].value.bval)->text(), '/' );
		*pos = '\0';

		IKE_PH2ID ph2id;
		memset( &ph2id, 0, sizeof( ph2id ) );
		ph2id.type = ISAKMP_ID_IPV4_ADDR_SUBNET;
		ph2id.addr1.s_addr = inet_addr( (yystack_[0].value.bval)->text() );
		ph2id.addr2.s_addr = 0;

		long bits = strtol( pos + 1, NULL, 10 );
		for( long i = 0; i < bits; i++ )
		{
			ph2id.addr2.s_addr >>= 1;
			ph2id.addr2.s_addr |= 0x80000000;
		}

		ph2id.addr2.s_addr = htonl( ph2id.addr2.s_addr );

		idlist->add( ph2id );
		delete (yystack_[0].value.bval);
	}
#line 890 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 52: // $@20: %empty
#line 465 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
#ifndef OPT_LDAP
		error( yylhs.location, std::string( "iked was compiled without ldap support" ) );
#endif
	}
#line 900 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 56: // $@21: %empty
#line 478 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
#ifdef OPT_LDAP
		if( ( (yystack_[0].value.ival) < 2 ) && ( (yystack_[0].value.ival) > 3 ) )
			error( yylhs.location, std::string( "ldap version must be 2 or 3" ) );

		iked.xauth_ldap.version = (yystack_[0].value.ival);
#endif
	}
#line 913 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 58: // $@22: %empty
#line 488 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
#ifdef OPT_LDAP
		iked.xauth_ldap.url.set( *(yystack_[0].value.bval) );
		delete (yystack_[0].value.bval);
#endif
	}
#line 924 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 60: // $@23: %empty
#line 496 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
#ifdef OPT_LDAP
		iked.xauth_ldap.base.set( *(yystack_[0].value.bval) );
		delete (yystack_[0].value.bval);
#endif
	}
#line 935 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 62: // $@24: %empty
#line 504 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
#ifdef OPT_LDAP
		iked.xauth_ldap.subtree = true;
#endif
	}
#line 945 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 64: // $@25: %empty
#line 511 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
#ifdef OPT_LDAP
		iked.xauth_ldap.subtree = false;
#endif
	}
#line 955 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 66: // $@26: %empty
#line 518 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
#ifdef OPT_LDAP
		iked.xauth_ldap.bind_dn.set( *(yystack_[0].value.bval) );
		delete (yystack_[0].value.bval);
#endif
	}
#line 966 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 68: // $@27: %empty
#line 526 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
#ifdef OPT_LDAP
		iked.xauth_ldap.bind_pw.set( *(yystack_[0].value.bval) );
		delete (yystack_[0].value.bval);
#endif
	}
#line 977 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 70: // $@28: %empty
#line 534 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
#ifdef OPT_LDAP
		iked.xauth_ldap.attr_user.set( *(yystack_[0].value.bval) );
		delete (yystack_[0].value.bval);
#endif
	}
#line 988 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 72: // $@29: %empty
#line 542 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
#ifdef OPT_LDAP
		iked.xauth_ldap.attr_group.set( *(yystack_[0].value.bval) );
		delete (yystack_[0].value.bval);
#endif
	}
#line 999 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 74: // $@30: %empty
#line 550 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
#ifdef OPT_LDAP
		iked.xauth_ldap.attr_member.set( *(yystack_[0].value.bval) );
		delete (yystack_[0].value.bval);
#endif
	}
#line 1010 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 79: // $@31: %empty
#line 573 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		iked.xconf_local.config.opts |= ( IPSEC_OPTS_ADDR | IPSEC_OPTS_MASK );

		char * pos = strchr( (yystack_[0].value.bval)->text(), '/' );
		*pos = '\0';

		in_addr base;
		base.s_addr = inet_addr( (yystack_[0].value.bval)->text() );
		long bits = strtol( pos + 1, NULL, 10 );

		iked.xconf_local.pool4_set( base, bits, 0 );
		delete (yystack_[0].value.bval);
	}
#line 1028 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 81: // $@32: %empty
#line 588 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		iked.xconf_local.config.opts |= ( IPSEC_OPTS_ADDR | IPSEC_OPTS_MASK );

		char * pos = strchr( (yystack_[1].value.bval)->text(), '/' );
		*pos = '\0';

		in_addr base;
		base.s_addr = inet_addr( (yystack_[1].value.bval)->text() );
		long bits = strtol( pos + 1, NULL, 10 );

		iked.xconf_local.pool4_set( base, bits, (yystack_[0].value.ival) );
		delete (yystack_[1].value.bval);
	}
#line 1046 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 83: // $@33: %empty
#line 603 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		iked.xconf_local.config.opts |= IPSEC_OPTS_DNSS;
	}
#line 1054 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 85: // $@34: %empty
#line 608 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		iked.xconf_local.config.opts |= IPSEC_OPTS_NBNS;
	}
#line 1062 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 87: // $@35: %empty
#line 613 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		iked.xconf_local.config.opts |= IPSEC_OPTS_DOMAIN;

		long len = (yystack_[0].value.bval)->size();
		if( len >= CONF_STRLEN )
			len = CONF_STRLEN - 1;

		memcpy( iked.xconf_local.config.nscfg.dnss_suffix, (yystack_[0].value.bval)->text(), len );
		iked.xconf_local.config.nscfg.dnss_suffix[ len ] = 0;
		delete (yystack_[0].value.bval);
	}
#line 1078 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 89: // $@36: %empty
#line 626 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		iked.xconf_local.config.opts |= IPSEC_OPTS_SPLITDNS;
	}
#line 1086 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 91: // $@37: %empty
#line 631 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		iked.xconf_local.config.opts |= IPSEC_OPTS_BANNER;

		FILE * fp = fopen( (yystack_[0].value.bval)->text(), "r" );
		if( fp == NULL )
			error( yylhs.location, std::string( "unable to load file " ) + (yystack_[0].value.bval)->text() );

		long size;
		char buff[ CONF_STRLEN ];
		while( ( size = fread( buff, 1, CONF_STRLEN, fp ) ) > 0 )
			iked.xconf_local.banner.add( buff, size );
		delete (yystack_[0].value.bval);
	}
#line 1104 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 93: // $@38: %empty
#line 646 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		iked.xconf_local.config.opts |= IPSEC_OPTS_PFS;
		iked.xconf_local.config.dhgr = (yystack_[0].value.ival);
	}
#line 1113 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 97: // xconf_local_dns_server: "address value"
#line 659 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		int count = iked.xconf_local.config.nscfg.dnss_count;
		if( count <= IPSEC_DNSS_MAX )
		{
			iked.xconf_local.config.nscfg.dnss_list[ count ].s_addr =
				inet_addr( (yystack_[0].value.bval)->text() );
			iked.xconf_local.config.nscfg.dnss_count++;
		}
		delete (yystack_[0].value.bval);
	}
#line 1128 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 100: // xconf_local_nbn_server: "address value"
#line 677 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		int count = iked.xconf_local.config.nscfg.nbns_count;
		if( count <= IPSEC_NBNS_MAX )
		{
			iked.xconf_local.config.nscfg.nbns_list[ count ].s_addr =
				inet_addr( (yystack_[0].value.bval)->text() );
			iked.xconf_local.config.nscfg.nbns_count++;
		}
		delete (yystack_[0].value.bval);
	}
#line 1143 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 103: // xconf_local_dns_name: "quoted value"
#line 695 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		iked.xconf_local.domains.add( *(yystack_[0].value.bval) );
		delete (yystack_[0].value.bval);
	}
#line 1152 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 104: // $@39: %empty
#line 709 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		//
		// new peer object
		//

		peer = new IDB_PEER( NULL );

		//
		// set peer default values
		//

		peer->contact = IPSEC_CONTACT_BOTH;
		peer->natt_rate = 30;
		peer->dpd_delay = 15;
		peer->dpd_retry = 5;
		peer->frag_ike_size = 520;
		peer->frag_esp_size = 520;
		peer->life_check = LTIME_CLAIM;
		SET_SALEN( &peer->saddr.saddr4, sizeof( sockaddr_in ) );
		peer->saddr.saddr4.sin_family = AF_INET;
		peer->saddr.saddr4.sin_port = htons( LIBIKE_IKE_PORT );
		peer->saddr.saddr4.sin_addr.s_addr = inet_addr( (yystack_[0].value.bval)->text() );

		peer->xauth_source = &iked.xauth_local;
		peer->xconf_source = &iked.xconf_local;
		peer->xconf_mode = CONFIG_MODE_PULL;

		delete (yystack_[0].value.bval);
	}
#line 1186 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 105: // peer_section: "peer section" "address value" $@39 "begin section" peer_lines "end section"
#line 739 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		peer->add( true );
		peer->dec( true );
	}
#line 1195 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 106: // $@40: %empty
#line 744 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		//
		// new peer object
		//

		peer = new IDB_PEER( NULL );

		//
		// set peer default values
		//

		peer->contact = IPSEC_CONTACT_BOTH;
		peer->natt_rate = 30;
		peer->dpd_delay = 15;
		peer->dpd_retry = 5;
		peer->frag_ike_size = 520;
		peer->frag_esp_size = 520;
		peer->life_check = LTIME_CLAIM;
		SET_SALEN( &peer->saddr.saddr4, sizeof( sockaddr_in ) );
		peer->saddr.saddr4.sin_family = AF_INET;
		peer->saddr.saddr4.sin_port = htons( (yystack_[0].value.ival) );
		peer->saddr.saddr4.sin_addr.s_addr = inet_addr( (yystack_[1].value.bval)->text() );

		peer->xauth_source = &iked.xauth_local;
		peer->xconf_source = &iked.xconf_local;
		peer->xconf_mode = CONFIG_MODE_PULL;

		delete (yystack_[1].value.bval);
	}
#line 1229 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 107: // peer_section: "peer section" "address value" "number value" $@40 "begin section" peer_lines "end section"
#line 774 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		peer->add( true );
		peer->dec( true );
	}
#line 1238 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 110: // $@41: %empty
#line 785 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		peer->contact = IPSEC_CONTACT_INIT;
	}
#line 1246 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 112: // $@42: %empty
#line 790 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		peer->contact = IPSEC_CONTACT_RESP;
	}
#line 1254 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 114: // $@43: %empty
#line 795 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		peer->exchange = ISAKMP_EXCH_IDENT_PROTECT;
	}
#line 1262 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 116: // $@44: %empty
#line 800 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		peer->exchange = ISAKMP_EXCH_AGGRESSIVE;
	}
#line 1270 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 118: // $@45: %empty
#line 805 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
#ifdef OPT_NATT
		peer->natt_mode = IPSEC_NATT_ENABLE;
#else
		error( yylhs.location, std::string( "iked was compiled without NATT support" ) );
#endif
	}
#line 1282 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 120: // $@46: %empty
#line 814 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
#ifdef OPT_NATT
		peer->natt_mode = IPSEC_NATT_DISABLE;
#else
		error( yylhs.location, std::string( "iked was compiled without NATT support" ) );
#endif
	}
#line 1294 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 122: // $@47: %empty
#line 823 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
#ifdef OPT_NATT
		peer->natt_mode = IPSEC_NATT_FORCE_RFC;
#else
		error( yylhs.location, std::string( "iked was compiled without NATT support" ) );
#endif
	}
#line 1306 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 124: // $@48: %empty
#line 832 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
#if defined( OPT_NATT ) && !defined( __APPLE )
		peer->natt_mode = IPSEC_NATT_FORCE_DRAFT;
#else
# ifndef __APPLE__
		error( yylhs.location, std::string( "iked was compiled without NATT support" ) );
# else
		error( yylhs.location, std::string( "your platform does not support NAT v00/01" ) );
# endif
#endif
	}
#line 1322 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 126: // $@49: %empty
#line 845 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
#ifdef OPT_NATT
		peer->natt_mode = IPSEC_NATT_FORCE_RFC;
#else
		error( yylhs.location, std::string( "iked was compiled without NATT support" ) );
#endif
	}
#line 1334 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 128: // $@50: %empty
#line 854 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
#ifdef OPT_NATT
		peer->natt_rate = (yystack_[0].value.ival);
#else
		error( yylhs.location, std::string( "iked was compiled without NATT support" ) );
#endif
	}
#line 1346 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 130: // $@51: %empty
#line 863 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		peer->dpd_mode = IPSEC_DPD_ENABLE;
	}
#line 1354 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 132: // $@52: %empty
#line 868 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		peer->dpd_mode = IPSEC_DPD_DISABLE;
	}
#line 1362 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 134: // $@53: %empty
#line 873 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		peer->dpd_mode = IPSEC_DPD_FORCE;
	}
#line 1370 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 136: // $@54: %empty
#line 878 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		peer->dpd_delay = (yystack_[0].value.ival);
	}
#line 1378 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 138: // $@55: %empty
#line 883 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		peer->dpd_retry = (yystack_[0].value.ival);
	}
#line 1386 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 140: // $@56: %empty
#line 888 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		peer->frag_ike_mode = IPSEC_FRAG_ENABLE;
	}
#line 1394 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 142: // $@57: %empty
#line 893 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		peer->frag_ike_mode = IPSEC_FRAG_DISABLE;
	}
#line 1402 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 144: // $@58: %empty
#line 898 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		peer->frag_ike_mode = IPSEC_FRAG_FORCE;
	}
#line 1410 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 146: // $@59: %empty
#line 903 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		peer->frag_ike_size = (yystack_[0].value.ival);
	}
#line 1418 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 148: // $@60: %empty
#line 908 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		peer->frag_esp_mode = IPSEC_FRAG_ENABLE;
	}
#line 1426 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 150: // $@61: %empty
#line 913 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		peer->frag_esp_mode = IPSEC_FRAG_DISABLE;
	}
#line 1434 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 152: // $@62: %empty
#line 918 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		peer->frag_esp_size = (yystack_[0].value.ival);
	}
#line 1442 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 154: // $@63: %empty
#line 923 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		peer->idtype_l = ISAKMP_ID_IPV4_ADDR;
	}
#line 1450 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 156: // $@64: %empty
#line 928 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		peer->idtype_l = ISAKMP_ID_IPV4_ADDR;
		peer->iddata_l.set( *(yystack_[0].value.bval) );
		delete (yystack_[0].value.bval);
	}
#line 1460 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 158: // $@65: %empty
#line 935 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		peer->idtype_l = ISAKMP_ID_FQDN;
		peer->iddata_l.set( (yystack_[0].value.bval)->buff(), (yystack_[0].value.bval)->size() - 1 );
		delete (yystack_[0].value.bval);
	}
#line 1470 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 160: // $@66: %empty
#line 942 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		peer->idtype_l = ISAKMP_ID_USER_FQDN;
		peer->iddata_l.set( (yystack_[0].value.bval)->buff(), (yystack_[0].value.bval)->size() - 1 );
		delete (yystack_[0].value.bval);
	}
#line 1480 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 162: // $@67: %empty
#line 949 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		peer->idtype_l = ISAKMP_ID_KEY_ID;
		peer->iddata_l.set( (yystack_[0].value.bval)->buff(), (yystack_[0].value.bval)->size() - 1 );
		delete (yystack_[0].value.bval);
	}
#line 1490 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 164: // $@68: %empty
#line 956 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		peer->idtype_l = ISAKMP_ID_ASN1_DN;
	}
#line 1498 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 166: // $@69: %empty
#line 961 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		peer->idtype_l = ISAKMP_ID_ASN1_DN;
		peer->iddata_l.set( *(yystack_[0].value.bval) );
		delete (yystack_[0].value.bval);
	}
#line 1508 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 168: // $@70: %empty
#line 968 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		peer->idtype_r = ISAKMP_ID_IPV4_ADDR;
	}
#line 1516 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 170: // $@71: %empty
#line 973 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		peer->idtype_r = ISAKMP_ID_IPV4_ADDR;
		peer->iddata_r.set( *(yystack_[0].value.bval) );
		delete (yystack_[0].value.bval);
	}
#line 1526 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 172: // $@72: %empty
#line 980 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		peer->idtype_r = ISAKMP_ID_FQDN;
		peer->iddata_r.set( (yystack_[0].value.bval)->buff(), (yystack_[0].value.bval)->size() - 1 );
		delete (yystack_[0].value.bval);
	}
#line 1536 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 174: // $@73: %empty
#line 987 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		peer->idtype_r = ISAKMP_ID_USER_FQDN;
		peer->iddata_r.set( (yystack_[0].value.bval)->buff(), (yystack_[0].value.bval)->size() - 1 );
		delete (yystack_[0].value.bval);
	}
#line 1546 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 176: // $@74: %empty
#line 994 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		peer->idtype_r = ISAKMP_ID_KEY_ID;
		peer->iddata_r.set( (yystack_[0].value.bval)->buff(), (yystack_[0].value.bval)->size() - 1 );
		delete (yystack_[0].value.bval);
	}
#line 1556 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 178: // $@75: %empty
#line 1001 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		peer->idtype_r = ISAKMP_ID_ASN1_DN;
	}
#line 1564 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 180: // $@76: %empty
#line 1006 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		peer->idtype_r = ISAKMP_ID_ASN1_DN;
		peer->iddata_r.set( *(yystack_[0].value.bval) );
		delete (yystack_[0].value.bval);
	}
#line 1574 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 182: // $@77: %empty
#line 1013 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		peer->psk.set( *(yystack_[0].value.bval) );
		delete (yystack_[0].value.bval);
	}
#line 1583 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 184: // $@78: %empty
#line 1019 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		fpass.del();

		if( iked.cert_load(
			peer->cert_r,
			(yystack_[0].value.bval)->text(),
			true,
			fpass ) != FILE_OK )
			error( yylhs.location, std::string( "unable to load file " ) + (yystack_[0].value.bval)->text() );
		delete (yystack_[0].value.bval);
	}
#line 1599 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 186: // $@79: %empty
#line 1032 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		fpass = *(yystack_[0].value.bval);

		if( iked.cert_load(
			peer->cert_r,
			(yystack_[1].value.bval)->text(),
			true,
			fpass ) != FILE_OK )
			error( yylhs.location, std::string( "unable to load file " ) + (yystack_[1].value.bval)->text() );

		delete (yystack_[1].value.bval);
		delete (yystack_[0].value.bval);
	}
#line 1617 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 188: // $@80: %empty
#line 1047 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		fpass.del();
		
		if( iked.cert_load(
			peer->cert_l,
			(yystack_[0].value.bval)->text(),
			false,
			fpass ) != FILE_OK )
			error( yylhs.location, std::string( "unable to load file " ) + (yystack_[0].value.bval)->text() );

		delete (yystack_[0].value.bval);
	}
#line 1634 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 190: // $@81: %empty
#line 1061 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		fpass = *(yystack_[0].value.bval);
		
		if( iked.cert_load(
			peer->cert_l,
			(yystack_[1].value.bval)->text(),
			false,
			fpass ) != FILE_OK )
			error( yylhs.location, std::string( "unable to load file " ) + (yystack_[1].value.bval)->text() );

		delete (yystack_[1].value.bval);
		delete (yystack_[0].value.bval);
	}
#line 1652 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 192: // $@82: %empty
#line 1076 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		fpass.del();
		
		if( iked.prvkey_rsa_load(
			peer->cert_k,
			(yystack_[0].value.bval)->text(),
			fpass ) != FILE_OK )
			error( yylhs.location, std::string( "unable to load file " ) + (yystack_[0].value.bval)->text() );

		delete (yystack_[0].value.bval);
	}
#line 1668 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 194: // $@83: %empty
#line 1089 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		fpass = *(yystack_[0].value.bval);
		
		if( iked.prvkey_rsa_load(
			peer->cert_k,
			(yystack_[1].value.bval)->text(),
			fpass ) != FILE_OK )
			error( yylhs.location, std::string( "unable to load file " ) + (yystack_[1].value.bval)->text() );

		delete (yystack_[1].value.bval);
		delete (yystack_[0].value.bval);
	}
#line 1685 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 196: // $@84: %empty
#line 1103 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		peer->life_check = LTIME_OBEY;
	}
#line 1693 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 198: // $@85: %empty
#line 1108 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		peer->life_check = LTIME_CLAIM;
	}
#line 1701 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 200: // $@86: %empty
#line 1113 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		peer->life_check = LTIME_STRICT;
	}
#line 1709 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 202: // $@87: %empty
#line 1118 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		peer->life_check = LTIME_EXACT;
	}
#line 1717 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 204: // $@88: %empty
#line 1123 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		peer->xauth_source = &iked.xauth_local;
	}
#line 1725 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 206: // $@89: %empty
#line 1128 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		peer->xauth_source = &iked.xauth_local;
		peer->xauth_group.set( *(yystack_[0].value.bval) );
		delete (yystack_[0].value.bval);
	}
#line 1735 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 208: // $@90: %empty
#line 1135 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
#ifdef OPT_LDAP
		if( !iked.xauth_ldap.url.size() )
			error( yylhs.location, std::string( "conf source is ldap but no url is defined" ) );

		peer->xauth_source = &iked.xauth_ldap;
#else
		error( yylhs.location, std::string( "iked was compiled without ldap support" ) );
#endif
	}
#line 1750 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 210: // $@91: %empty
#line 1147 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
#ifdef OPT_LDAP
		if( !iked.xauth_ldap.url.size() )
			error( yylhs.location, std::string( "conf source is ldap but no url is defined" ) );

		peer->xauth_source = &iked.xauth_ldap;
		peer->xauth_group.set( *(yystack_[0].value.bval) );
		delete (yystack_[0].value.bval);
#else
		error( yylhs.location, std::string( "iked was compiled without ldap support" ) );
#endif
	}
#line 1767 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 212: // $@92: %empty
#line 1161 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		peer->xconf_source = &iked.xconf_local;
		peer->xconf_mode = CONFIG_MODE_PULL;
	}
#line 1776 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 214: // $@93: %empty
#line 1167 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		peer->xconf_source = &iked.xconf_local;
		peer->xconf_mode = CONFIG_MODE_PULL;
	}
#line 1785 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 216: // $@94: %empty
#line 1173 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		peer->xconf_source = &iked.xconf_local;
		peer->xconf_mode = CONFIG_MODE_PUSH;
	}
#line 1794 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 218: // $@95: %empty
#line 1179 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		peer->plcy_mode = POLICY_MODE_DISABLE;
	}
#line 1802 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 220: // $@96: %empty
#line 1184 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		peer->plcy_mode = POLICY_MODE_COMPAT;
	}
#line 1810 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 222: // $@97: %empty
#line 1189 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		peer->plcy_mode = POLICY_MODE_CONFIG;
	}
#line 1818 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 225: // $@98: %empty
#line 1195 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		memset( &proposal, 0, sizeof( proposal ) );
		proposal.proto = ISAKMP_PROTO_ISAKMP;
		proposal.xform = ISAKMP_KEY_IKE;
		proposal.dhgr_id = IKE_GRP_GROUP2;
	}
#line 1829 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 226: // peer_line: "proposal section" "isakmp" $@98 "begin section" proposal_lines_isakmp "end section"
#line 1202 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		peer->proposals.add( &proposal, true );
	}
#line 1837 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 227: // $@99: %empty
#line 1206 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		memset( &proposal, 0, sizeof( proposal ) );
		proposal.proto = ISAKMP_PROTO_IPSEC_AH;
	}
#line 1846 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 228: // peer_line: "proposal section" "ah" $@99 "begin section" proposal_lines_ah "end section"
#line 1211 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		peer->proposals.add( &proposal, true );
	}
#line 1854 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 229: // $@100: %empty
#line 1215 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		memset( &proposal, 0, sizeof( proposal ) );
		proposal.proto = ISAKMP_PROTO_IPSEC_ESP;
	}
#line 1863 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 230: // peer_line: "proposal section" "esp" $@100 "begin section" proposal_lines_esp "end section"
#line 1220 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		peer->proposals.add( &proposal, true );
	}
#line 1871 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 231: // $@101: %empty
#line 1224 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		memset( &proposal, 0, sizeof( proposal ) );
		proposal.proto = ISAKMP_PROTO_IPCOMP;
	}
#line 1880 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 232: // peer_line: "proposal section" "ipcomp" $@101 "begin section" proposal_lines_ipcomp "end section"
#line 1229 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		peer->proposals.add( &proposal, true );
	}
#line 1888 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 235: // $@102: %empty
#line 1240 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		long index = 0;
		while( true )
		{
			idlist = static_cast<IDB_LIST_PH2ID*>( iked.idb_list_netgrp.get_entry( index++ ) );
			if( idlist == NULL )
				break;

			if( !strcmp( (yystack_[0].value.bval)->text(), idlist->name.text() ) )
				break; 
		}

		if( idlist == NULL )
			error( yylhs.location, std::string( "unknown netgroup " ) + (yystack_[0].value.bval)->text() );

		peer->netmaps.add( idlist, UNITY_SPLIT_INCLUDE, NULL );

		delete (yystack_[0].value.bval);
	}
#line 1912 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 237: // $@103: %empty
#line 1261 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		long index = 0;
		while( true )
		{
			idlist = static_cast<IDB_LIST_PH2ID*>( iked.idb_list_netgrp.get_entry( index++ ) );
			if( idlist == NULL )
				break;

			if( !strcmp( (yystack_[1].value.bval)->text(), idlist->name.text() ) )
				break; 
		}

		if( idlist == NULL )
			error( yylhs.location, std::string( "unknown netgroup " ) + (yystack_[1].value.bval)->text() );

		peer->netmaps.add( idlist, UNITY_SPLIT_INCLUDE, (yystack_[0].value.bval) );

		delete (yystack_[1].value.bval);
		delete (yystack_[0].value.bval);
	}
#line 1937 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 239: // $@104: %empty
#line 1283 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		long index = 0;
		while( true )
		{
			idlist = static_cast<IDB_LIST_PH2ID*>( iked.idb_list_netgrp.get_entry( index++ ) );
			if( idlist == NULL )
				break;

			if( !strcmp( (yystack_[0].value.bval)->text(), idlist->name.text() ) )
				break; 
		}

		if( idlist == NULL )
			error( yylhs.location, std::string( "unknown netgroup " ) + (yystack_[0].value.bval)->text() );

		peer->netmaps.add( idlist, UNITY_SPLIT_EXCLUDE, NULL );

		delete (yystack_[0].value.bval);
	}
#line 1961 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 241: // $@105: %empty
#line 1304 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		long index = 0;
		while( true )
		{
			idlist = static_cast<IDB_LIST_PH2ID*>( iked.idb_list_netgrp.get_entry( index++ ) );
			if( idlist == NULL )
				break;

			if( !strcmp( (yystack_[1].value.bval)->text(), idlist->name.text() ) )
				break; 
		}

		if( idlist == NULL )
			error( yylhs.location, std::string( "unknown netgroup " ) + (yystack_[1].value.bval)->text() );

		peer->netmaps.add( idlist, UNITY_SPLIT_EXCLUDE, (yystack_[0].value.bval) );

		delete (yystack_[1].value.bval);
		delete (yystack_[0].value.bval);
	}
#line 1986 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 245: // $@106: %empty
#line 1333 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		proposal.auth_id = HYBRID_AUTH_INIT_RSA;
	}
#line 1994 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 247: // $@107: %empty
#line 1338 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		proposal.auth_id = XAUTH_AUTH_INIT_RSA;
	}
#line 2002 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 249: // $@108: %empty
#line 1343 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		proposal.auth_id = XAUTH_AUTH_INIT_PSK;
	}
#line 2010 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 251: // $@109: %empty
#line 1348 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		proposal.auth_id = IKE_AUTH_SIG_RSA;
	}
#line 2018 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 253: // $@110: %empty
#line 1353 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		proposal.auth_id = IKE_AUTH_PRESHARED_KEY;
	}
#line 2026 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 255: // $@111: %empty
#line 1358 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		proposal.ciph_id = IKE_CIPHER_AES;
	}
#line 2034 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 257: // $@112: %empty
#line 1363 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		proposal.ciph_id = IKE_CIPHER_BLOWFISH;
	}
#line 2042 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 259: // $@113: %empty
#line 1368 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		proposal.ciph_id = IKE_CIPHER_3DES;
	}
#line 2050 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 261: // $@114: %empty
#line 1373 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		proposal.ciph_id = IKE_CIPHER_CAST;
	}
#line 2058 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 263: // $@115: %empty
#line 1378 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		proposal.ciph_id = IKE_CIPHER_DES;
	}
#line 2066 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 265: // $@116: %empty
#line 1383 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		proposal.ciph_kl = (yystack_[0].value.ival);
	}
#line 2074 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 267: // $@117: %empty
#line 1388 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		proposal.hash_id = IKE_HASH_MD5;
	}
#line 2082 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 269: // $@118: %empty
#line 1393 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		proposal.hash_id = IKE_HASH_SHA1;
	}
#line 2090 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 271: // $@119: %empty
#line 1398 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		proposal.hash_id = IKE_HASH_SHA2_256;
	}
#line 2098 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 273: // $@120: %empty
#line 1403 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		proposal.hash_id = IKE_HASH_SHA2_384;
	}
#line 2106 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 275: // $@121: %empty
#line 1408 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		proposal.hash_id = IKE_HASH_SHA2_512;
	}
#line 2114 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 277: // $@122: %empty
#line 1413 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		switch( (yystack_[0].value.ival) )
		{
			case 1:
				proposal.dhgr_id = IKE_GRP_GROUP1;
				break;

			case 2:
				proposal.dhgr_id = IKE_GRP_GROUP2;
				break;

			case 5:
				proposal.dhgr_id = IKE_GRP_GROUP5;
				break;

			case 14:
				proposal.dhgr_id = IKE_GRP_GROUP14;
				break;

			case 15:
				proposal.dhgr_id = IKE_GRP_GROUP15;
				break;

			case 16:
				proposal.dhgr_id = IKE_GRP_GROUP16;
				break;

			case 17:
				proposal.dhgr_id = IKE_GRP_GROUP17;
				break;

			case 18:
				proposal.dhgr_id = IKE_GRP_GROUP18;
				break;

			default:
				error( yylhs.location, std::string( "invalid dhgrp id" ) );
				break;
		}
	}
#line 2159 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 279: // $@123: %empty
#line 1455 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		proposal.life_sec = (yystack_[0].value.ival);
	}
#line 2167 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 281: // $@124: %empty
#line 1460 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		proposal.life_kbs = (yystack_[0].value.ival);
	}
#line 2175 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 285: // $@125: %empty
#line 1472 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		proposal.xform = ISAKMP_AH_MD5;
		proposal.hash_id = ISAKMP_AUTH_HMAC_MD5;
	}
#line 2184 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 287: // $@126: %empty
#line 1478 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		proposal.xform = ISAKMP_AH_SHA;
		proposal.hash_id = ISAKMP_AUTH_HMAC_SHA1;
	}
#line 2193 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 289: // $@127: %empty
#line 1484 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		proposal.xform = ISAKMP_AH_SHA256;
		proposal.hash_id = ISAKMP_AUTH_HMAC_SHA2_256;
	}
#line 2202 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 291: // $@128: %empty
#line 1490 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		proposal.xform = ISAKMP_AH_SHA384;
		proposal.hash_id = ISAKMP_AUTH_HMAC_SHA2_384;
	}
#line 2211 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 293: // $@129: %empty
#line 1496 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		proposal.xform = ISAKMP_AH_SHA512;
		proposal.hash_id = ISAKMP_AUTH_HMAC_SHA2_512;
	}
#line 2220 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 295: // $@130: %empty
#line 1502 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		switch( (yystack_[0].value.ival) )
		{
			case 1:
				proposal.dhgr_id = IKE_GRP_GROUP1;
				break;

			case 2:
				proposal.dhgr_id = IKE_GRP_GROUP2;
				break;

			case 5:
				proposal.dhgr_id = IKE_GRP_GROUP5;
				break;

			case 14:
				proposal.dhgr_id = IKE_GRP_GROUP14;
				break;

			case 15:
				proposal.dhgr_id = IKE_GRP_GROUP15;
				break;

			case 16:
				proposal.dhgr_id = IKE_GRP_GROUP16;
				break;

			case 17:
				proposal.dhgr_id = IKE_GRP_GROUP17;
				break;

			case 18:
				proposal.dhgr_id = IKE_GRP_GROUP18;
				break;

			default:
				error( yylhs.location, std::string( "invalid dhgrp id" ) );
				break;
		}
	}
#line 2265 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 297: // $@131: %empty
#line 1544 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		proposal.life_sec = (yystack_[0].value.ival);
	}
#line 2273 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 299: // $@132: %empty
#line 1549 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		proposal.life_kbs = (yystack_[0].value.ival);
	}
#line 2281 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 303: // $@133: %empty
#line 1561 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		proposal.xform = ISAKMP_ESP_AES;
	}
#line 2289 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 305: // $@134: %empty
#line 1566 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		proposal.xform = ISAKMP_ESP_BLOWFISH;
	}
#line 2297 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 307: // $@135: %empty
#line 1571 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		proposal.xform = ISAKMP_ESP_3DES;
	}
#line 2305 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 309: // $@136: %empty
#line 1576 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		proposal.xform = ISAKMP_ESP_CAST;
	}
#line 2313 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 311: // $@137: %empty
#line 1581 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		proposal.xform = ISAKMP_ESP_DES;
	}
#line 2321 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 313: // $@138: %empty
#line 1586 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		proposal.ciph_kl = (yystack_[0].value.ival);
	}
#line 2329 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 315: // $@139: %empty
#line 1591 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		proposal.hash_id = ISAKMP_AUTH_HMAC_MD5;
	}
#line 2337 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 317: // $@140: %empty
#line 1596 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		proposal.hash_id = ISAKMP_AUTH_HMAC_SHA1;
	}
#line 2345 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 319: // $@141: %empty
#line 1601 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		proposal.hash_id = ISAKMP_AUTH_HMAC_SHA2_256;
	}
#line 2353 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 321: // $@142: %empty
#line 1606 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		proposal.hash_id = ISAKMP_AUTH_HMAC_SHA2_384;
	}
#line 2361 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 323: // $@143: %empty
#line 1611 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		proposal.hash_id = ISAKMP_AUTH_HMAC_SHA2_512;
	}
#line 2369 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 325: // $@144: %empty
#line 1616 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		switch( (yystack_[0].value.ival) )
		{
			case 1:
				proposal.dhgr_id = IKE_GRP_GROUP1;
				break;

			case 2:
				proposal.dhgr_id = IKE_GRP_GROUP2;
				break;

			case 5:
				proposal.dhgr_id = IKE_GRP_GROUP5;
				break;

			case 14:
				proposal.dhgr_id = IKE_GRP_GROUP14;
				break;

			case 15:
				proposal.dhgr_id = IKE_GRP_GROUP15;
				break;

			case 16:
				proposal.dhgr_id = IKE_GRP_GROUP16;
				break;

			case 17:
				proposal.dhgr_id = IKE_GRP_GROUP17;
				break;

			case 18:
				proposal.dhgr_id = IKE_GRP_GROUP18;
				break;

			default:
				error( yylhs.location, std::string( "invalid dhgrp id" ) );
				break;
		}
	}
#line 2414 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 327: // $@145: %empty
#line 1658 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		proposal.life_sec = (yystack_[0].value.ival);
	}
#line 2422 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 329: // $@146: %empty
#line 1663 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		proposal.life_kbs = (yystack_[0].value.ival);
	}
#line 2430 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 333: // $@147: %empty
#line 1675 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		proposal.xform = ISAKMP_IPCOMP_DEFLATE;
	}
#line 2438 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 335: // $@148: %empty
#line 1680 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		proposal.xform = ISAKMP_IPCOMP_LZS;
	}
#line 2446 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 337: // $@149: %empty
#line 1685 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		proposal.life_sec = (yystack_[0].value.ival);
	}
#line 2454 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;

  case 339: // $@150: %empty
#line 1690 "/home/luizfelipe/ike/source/iked/conf.parse.yy"
        {
		proposal.life_kbs = (yystack_[0].value.ival);
	}
#line 2462 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"
    break;


#line 2466 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"

            default:
              break;
            }
        }
#if YY_EXCEPTIONS
      catch (const syntax_error& yyexc)
        {
          YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
          error (yyexc);
          YYERROR;
        }
#endif // YY_EXCEPTIONS
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, YY_MOVE (yylhs));
    }
    goto yynewstate;


  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        context yyctx (*this, yyla);
        std::string msg = yysyntax_error_ (yyctx);
        error (yyla.location, YY_MOVE (msg));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.kind () == symbol_kind::S_YYEOF)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:
    /* Pacify compilers when the user code never invokes YYERROR and
       the label yyerrorlab therefore never appears in user code.  */
    if (false)
      YYERROR;

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    YY_STACK_PRINT ();
    goto yyerrlab1;


  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    // Pop stack until we find a state that shifts the error token.
    for (;;)
      {
        yyn = yypact_[+yystack_[0].state];
        if (!yy_pact_value_is_default_ (yyn))
          {
            yyn += symbol_kind::S_YYerror;
            if (0 <= yyn && yyn <= yylast_
                && yycheck_[yyn] == symbol_kind::S_YYerror)
              {
                yyn = yytable_[yyn];
                if (0 < yyn)
                  break;
              }
          }

        // Pop the current state because it cannot handle the error token.
        if (yystack_.size () == 1)
          YYABORT;

        yyerror_range[1].location = yystack_[0].location;
        yy_destroy_ ("Error: popping", yystack_[0]);
        yypop_ ();
        YY_STACK_PRINT ();
      }
    {
      stack_symbol_type error_token;

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = state_type (yyn);
      yypush_ ("Shifting", YY_MOVE (error_token));
    }
    goto yynewstate;


  /*-------------------------------------.
  | yyacceptlab -- YYACCEPT comes here.  |
  `-------------------------------------*/
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;


  /*-----------------------------------.
  | yyabortlab -- YYABORT comes here.  |
  `-----------------------------------*/
  yyabortlab:
    yyresult = 1;
    goto yyreturn;


  /*-----------------------------------------------------.
  | yyreturn -- parsing is finished, return the result.  |
  `-----------------------------------------------------*/
  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    YY_STACK_PRINT ();
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
#if YY_EXCEPTIONS
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack\n";
        // Do not try to display the values of the reclaimed symbols,
        // as their printers might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
#endif // YY_EXCEPTIONS
  }

  void
  conf_parser::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what ());
  }

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  conf_parser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr;
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
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }

  std::string
  conf_parser::symbol_name (symbol_kind_type yysymbol)
  {
    return yytnamerr_ (yytname_[yysymbol]);
  }



  // conf_parser::context.
  conf_parser::context::context (const conf_parser& yyparser, const symbol_type& yyla)
    : yyparser_ (yyparser)
    , yyla_ (yyla)
  {}

  int
  conf_parser::context::expected_tokens (symbol_kind_type yyarg[], int yyargn) const
  {
    // Actual number of expected tokens
    int yycount = 0;

    const int yyn = yypact_[+yyparser_.yystack_[0].state];
    if (!yy_pact_value_is_default_ (yyn))
      {
        /* Start YYX at -YYN if negative to avoid negative indexes in
           YYCHECK.  In other words, skip the first -YYN actions for
           this state because they are default actions.  */
        const int yyxbegin = yyn < 0 ? -yyn : 0;
        // Stay within bounds of both yycheck and yytname.
        const int yychecklim = yylast_ - yyn + 1;
        const int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
        for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
          if (yycheck_[yyx + yyn] == yyx && yyx != symbol_kind::S_YYerror
              && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
            {
              if (!yyarg)
                ++yycount;
              else if (yycount == yyargn)
                return 0;
              else
                yyarg[yycount++] = YY_CAST (symbol_kind_type, yyx);
            }
      }

    if (yyarg && yycount == 0 && 0 < yyargn)
      yyarg[0] = symbol_kind::S_YYEMPTY;
    return yycount;
  }






  int
  conf_parser::yy_syntax_error_arguments_ (const context& yyctx,
                                                 symbol_kind_type yyarg[], int yyargn) const
  {
    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state merging
         (from LALR or IELR) and default reductions corrupt the expected
         token list.  However, the list is correct for canonical LR with
         one exception: it will still contain any token that will not be
         accepted due to an error action in a later state.
    */

    if (!yyctx.lookahead ().empty ())
      {
        if (yyarg)
          yyarg[0] = yyctx.token ();
        int yyn = yyctx.expected_tokens (yyarg ? yyarg + 1 : yyarg, yyargn - 1);
        return yyn + 1;
      }
    return 0;
  }

  // Generate an error message.
  std::string
  conf_parser::yysyntax_error_ (const context& yyctx) const
  {
    // Its maximum.
    enum { YYARGS_MAX = 5 };
    // Arguments of yyformat.
    symbol_kind_type yyarg[YYARGS_MAX];
    int yycount = yy_syntax_error_arguments_ (yyctx, yyarg, YYARGS_MAX);

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
      default: // Avoid compiler warnings.
        YYCASE_ (0, YY_("syntax error"));
        YYCASE_ (1, YY_("syntax error, unexpected %s"));
        YYCASE_ (2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_ (3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_ (4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_ (5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    std::ptrdiff_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += symbol_name (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const signed char conf_parser::yypact_ninf_ = -121;

  const signed char conf_parser::yytable_ninf_ = -1;

  const short
  conf_parser::yypact_[] =
  {
    -121,    38,  -121,    11,  -114,  -121,    46,   -92,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,    48,  -121,   -56,     2,
      87,  -121,   134,  -121,   108,  -121,    63,    98,   -15,   -47,
     -32,    39,     9,    44,  -121,  -121,     6,  -121,    41,  -121,
    -121,    47,  -121,    66,    73,  -121,   122,  -121,  -120,  -116,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,    -4,  -121,    90,    91,    93,    45,    96,
      97,    99,   100,   101,  -121,   103,    88,   102,  -121,   105,
    -121,  -121,  -121,    -2,  -121,   104,  -121,   107,   168,   205,
     214,   216,   217,   220,   229,   230,   231,   232,   233,   234,
     235,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,   236,  -121,   237,  -121,  -121,
     238,  -121,   239,  -121,   240,  -121,   241,   242,    81,  -121,
      33,    36,    15,   123,    26,   124,   126,    92,   127,   125,
     128,    86,   -10,    -7,   -55,   182,     8,   250,    60,  -121,
     251,  -121,   252,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,   150,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,   -51,    79,   143,
     144,   145,   146,  -121,  -121,  -121,  -121,   147,   148,    82,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,   271,
    -121,   272,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,   273,   274,   275,   276,   277,   278,
    -121,  -121,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   169,   172,   173,   174,
     175,   176,   177,   179,   180,   181,  -121,   183,   184,   185,
     298,   304,   308,   309,  -121,   310,  -121,   311,  -121,  -121,
     312,   313,   314,   315,     1,   320,   321,   322,   323,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,   324,   325,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,   326,  -121,  -121,  -121,   327,  -121,
    -121,   328,  -121,  -121,  -121,   329,  -121,   330,  -121,   331,
    -121,   332,  -121,   333,  -121,  -121,  -121,  -121,   334,  -121,
     335,  -121,   336,   337,  -121,  -121,  -121,  -121,  -121,   197,
     198,  -121,  -121,  -121,  -121,  -121,  -121,  -121,   338,  -121,
     339,   340,   341,  -121,   342,   343,  -121,   344,   345,   346,
    -121,   347,  -121,   348,  -121,   349,  -121,   350,  -121,  -121,
    -121,  -121,  -121,   200,   201,    -3,     3,     0,     5,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,   351,  -121,   352,  -121,    83,    77,   129,
      78,   243,   244,   245,  -121,  -121,    84,   246,   247,   248,
    -121,  -121,    94,   249,    95,   265,   266,   267,  -121,  -121,
      40,   268,   269,  -121,   353,  -121,   354,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   382,   383,   384,   385,   391,
     392,   393,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,   410,   411,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121
  };

  const short
  conf_parser::yydefact_[] =
  {
       2,     0,     1,     0,     0,    52,     0,     0,     3,     4,
       5,     6,     7,     8,    10,    46,     0,    77,   104,     0,
       0,    54,     0,   106,     0,     9,     0,     0,     0,     0,
       0,     0,     0,     0,    11,    48,     0,    76,     0,    95,
      98,     0,   101,     0,     0,    78,     0,   108,     0,     0,
      26,    28,    30,    32,    34,    36,    20,    22,    24,    40,
      38,    44,    42,     0,    53,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    55,    79,    83,    85,    87,    89,
      91,    93,   108,     0,    12,     0,    16,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    47,    50,    49,    56,    58,    60,    62,    64,    66,
      68,    70,    72,    74,    81,     0,    97,     0,    96,   100,
       0,    99,     0,   103,     0,   102,     0,     0,     0,   105,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   109,
       0,    14,     0,    18,    27,    29,    31,    33,    35,    37,
      21,    23,    25,    41,    39,    45,    43,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    80,
      84,    86,    88,    90,    92,    94,   107,   110,   112,   114,
     116,   118,   120,   122,   128,   130,   132,   134,   136,   138,
     140,   142,   144,   146,   148,   150,   152,     0,     0,     0,
       0,     0,     0,   196,   198,   200,   202,   204,   208,   212,
     218,   222,   220,   233,   225,   227,   229,   231,    13,     0,
      17,     0,    51,    57,    59,    61,    63,    65,    67,    69,
      71,    73,    75,    82,     0,     0,     0,     0,     0,     0,
     124,   126,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   154,     0,     0,   164,
       0,   168,     0,     0,   178,     0,   182,   184,   188,   192,
       0,     0,     0,     0,   206,     0,   210,     0,   214,   216,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    15,
      19,   111,   113,   115,   117,   119,   121,     0,     0,   123,
     129,   131,   133,   135,   137,   139,   141,   143,   145,   147,
     149,   151,   153,   156,     0,   158,   160,   166,     0,   162,
     170,     0,   172,   174,   180,     0,   176,     0,   186,     0,
     190,     0,   194,     0,   197,   199,   201,   203,     0,   205,
       0,   209,     0,     0,   213,   219,   223,   221,   224,     0,
       0,   234,   243,   283,   301,   331,   125,   127,     0,   155,
       0,     0,     0,   165,     0,     0,   169,     0,     0,     0,
     179,     0,   183,     0,   185,     0,   189,     0,   193,   207,
     211,   215,   217,   235,   239,     0,     0,     0,     0,   157,
     159,   161,   167,   163,   171,   173,   175,   181,   177,   187,
     191,   195,   237,     0,   241,     0,   226,     0,     0,     0,
       0,     0,     0,     0,   244,   228,     0,     0,     0,     0,
     284,   230,     0,     0,     0,     0,     0,     0,   302,   232,
       0,     0,     0,   332,     0,   236,     0,   240,   245,   247,
     249,   251,   253,   255,   257,   259,   261,   263,   265,   267,
     269,   271,   273,   275,   277,   279,   281,   285,   287,   289,
     291,   293,   295,   297,   299,   303,   305,   307,   309,   311,
     313,   315,   317,   319,   321,   323,   325,   327,   329,   333,
     335,   337,   339,   238,   242,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     246,   248,   250,   252,   254,   256,   258,   260,   262,   264,
     266,   268,   270,   272,   274,   276,   278,   280,   282,   286,
     288,   290,   292,   294,   296,   298,   300,   304,   306,   308,
     310,   312,   314,   316,   318,   320,   322,   324,   326,   328,
     330,   334,   336,   338,   340
  };

  const short
  conf_parser::yypgoto_[] =
  {
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,   364,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121
  };

  const short
  conf_parser::yydefgoto_[] =
  {
       0,     1,     8,     9,    19,    34,   150,   229,   152,   231,
      94,    95,    96,    88,    89,    90,    91,    92,    93,    98,
      97,   100,    99,    10,    20,    63,   103,   167,    11,    16,
      36,    74,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,    12,    22,    45,   115,   178,   117,   120,   122,
     124,   126,   127,    76,   118,    77,   121,    79,   125,    13,
      24,    46,    83,   149,   244,   245,   246,   247,   248,   249,
     252,   307,   308,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   324,   368,   370,   371,
     374,   328,   372,   331,   375,   377,   378,   381,   335,   379,
     337,   339,   383,   341,   385,   343,   387,   280,   281,   282,
     283,   285,   348,   287,   350,   290,   352,   353,   291,   293,
     292,   295,   296,   297,   298,   294,   361,   413,   444,   415,
     446,   395,   424,   495,   496,   497,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,   513,   396,   430,   514,   515,   516,   517,   518,   519,
     520,   521,   397,   438,   522,   523,   524,   525,   526,   527,
     528,   529,   530,   531,   532,   533,   534,   535,   398,   443,
     536,   537,   538,   539
  };

  const short
  conf_parser::yytable_[] =
  {
     101,   416,   129,    56,   431,   358,    25,   425,    84,   439,
      64,    85,    86,   217,    14,    87,    15,    26,   220,   266,
     267,   268,   269,   270,   191,   192,   193,    27,    28,    29,
      30,    31,    32,    33,   218,   195,   196,   197,     2,    18,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    17,
     130,    21,     3,   131,   107,   108,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   209,   210,   211,   212,
       4,     5,    23,   142,   213,   214,   215,   216,   143,    48,
      49,     6,    58,   144,   145,   186,   187,   188,   146,     7,
      35,   147,   189,   190,   148,   359,   360,    59,   417,   221,
     222,   200,   201,   202,   418,   419,   420,   432,   433,   421,
     434,    47,   435,   426,    57,   427,   440,    50,    51,    52,
      53,    54,    55,   422,   423,    82,   436,   437,   102,   428,
     429,   441,   442,   130,   204,   205,   131,    61,    37,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   271,
     272,   273,   274,   275,   207,   208,   142,   224,   225,   226,
     227,   143,   250,   251,   489,   490,   144,   145,    60,   288,
     289,   146,    62,    75,   147,   154,    78,   148,    38,    39,
      40,    41,    42,    43,    44,   448,   449,   450,   451,   452,
     453,   454,   455,   456,   457,    80,   459,   460,   461,   462,
     463,    81,   467,   468,   469,   470,   471,   475,   476,   477,
     478,   479,   155,   481,   482,   483,   484,   485,   104,   116,
     105,   156,   106,   157,   158,   109,   110,   159,   111,   112,
     113,   114,   151,   119,   123,   153,   160,   161,   162,   163,
     164,   165,   166,   179,   180,   181,   182,   183,   184,   185,
     219,   194,   198,   223,   199,   203,   206,   458,   228,   230,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   276,   277,   278,   279,   284,   286,   299,   300,
     301,   302,   303,   304,   305,   306,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   325,   326,   327,   329,   344,   332,   330,   333,   334,
     336,   345,   338,   340,   342,   346,   347,   349,   351,   354,
     355,   356,   357,   362,   363,   364,   365,   393,   394,   412,
     414,   366,   367,   369,   373,   376,   380,   382,   384,   386,
     388,   389,   390,   391,   392,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,   410,   411,   445,   447,
     493,   494,   540,   541,   542,   543,   544,   545,   546,   547,
     548,   464,   465,   466,   472,   473,   474,   480,   549,   550,
     551,   552,   553,   554,   555,   556,   557,   558,   559,   560,
     561,   562,   563,   486,   487,   488,   491,   492,   564,   565,
     566,   567,   568,   569,   570,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   584,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   128
  };

  const short
  conf_parser::yycheck_[] =
  {
       4,     4,     4,    18,     4,     4,     4,     4,   128,     4,
       4,   131,   128,    68,     3,   131,   130,    15,    10,    70,
      71,    72,    73,    74,     9,    10,    11,    25,    26,    27,
      28,    29,    30,    31,    89,     9,    10,    11,     0,   131,
      34,    35,    36,    37,    38,    39,    40,    41,    42,     3,
      52,     3,    14,    55,     9,    10,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    76,    77,    78,    79,
      32,    33,   128,    75,    81,    82,    83,    84,    80,    16,
      17,    43,   129,    85,    86,     4,    53,    54,    90,    51,
       3,    93,    56,    57,    96,    94,    95,   129,   101,    91,
      92,     9,    10,    11,   107,   108,   109,   107,   108,   112,
     110,     3,   112,   110,   129,   112,   111,    19,    20,    21,
      22,    23,    24,   126,   127,     3,   126,   127,   132,   126,
     127,   126,   127,    52,     9,    10,    55,   128,     4,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    70,
      71,    72,    73,    74,    68,    69,    75,    97,    98,    99,
     100,    80,    12,    13,   124,   125,    85,    86,   129,    87,
      88,    90,   128,   132,    93,     7,   129,    96,    44,    45,
      46,    47,    48,    49,    50,   102,   103,   104,   105,   106,
     113,   114,   115,   116,   117,   129,   118,   119,   120,   121,
     122,   128,   118,   119,   120,   121,   122,   113,   114,   115,
     116,   117,     7,   118,   119,   120,   121,   122,   128,   131,
     129,     7,   129,     7,     7,   129,   129,     7,   129,   129,
     129,   128,   128,   131,   129,   128,     7,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
      68,   128,   128,     3,   128,   128,   128,   128,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,   129,   129,   129,   129,   129,   129,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
     131,   129,   129,   129,   129,     7,   129,   131,   129,   129,
     129,     7,   129,   129,   129,     7,     7,     7,     7,     7,
       7,     7,     7,     3,     3,     3,     3,   130,   130,   129,
     129,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,   128,   128,   128,   128,   128,   128,   128,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,   128,   128,   128,   128,   128,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    82
  };

  const short
  conf_parser::yystos_[] =
  {
       0,   138,     0,    14,    32,    33,    43,    51,   139,   140,
     160,   165,   179,   196,     3,   130,   166,     3,   131,   141,
     161,     3,   180,   128,   197,     4,    15,    25,    26,    27,
      28,    29,    30,    31,   142,     3,   167,     4,    44,    45,
      46,    47,    48,    49,    50,   181,   198,     3,    16,    17,
      19,    20,    21,    22,    23,    24,    18,   129,   129,   129,
     129,   128,   128,   162,     4,    34,    35,    36,    37,    38,
      39,    40,    41,    42,   168,   132,   190,   192,   129,   194,
     129,   128,     3,   199,   128,   131,   128,   131,   150,   151,
     152,   153,   154,   155,   147,   148,   149,   157,   156,   159,
     158,     4,   132,   163,   128,   129,   129,     9,    10,   129,
     129,   129,   129,   129,   128,   182,   131,   184,   191,   131,
     185,   193,   186,   129,   187,   195,   188,   189,   199,     4,
      52,    55,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    75,    80,    85,    86,    90,    93,    96,   200,
     143,   128,   145,   128,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,   164,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   183,     7,
       7,     7,     7,     7,     7,     7,     4,    53,    54,    56,
      57,     9,    10,    11,   128,     9,    10,    11,   128,   128,
       9,    10,    11,   128,     9,    10,   128,    68,    69,    76,
      77,    78,    79,    81,    82,    83,    84,    68,    89,    68,
      10,    91,    92,     3,    97,    98,    99,   100,     7,   144,
       7,   146,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,   201,   202,   203,   204,   205,   206,
      12,    13,   207,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,    70,    71,    72,    73,
      74,    70,    71,    72,    73,    74,   129,   129,   129,   129,
     244,   245,   246,   247,   129,   248,   129,   250,    87,    88,
     252,   255,   257,   256,   262,   258,   259,   260,   261,     7,
       7,     7,     7,     7,     7,     7,     7,   208,   209,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,   131,   223,   129,   129,   129,   228,   129,
     131,   230,   129,   129,   129,   235,   129,   237,   129,   238,
     129,   240,   129,   242,     7,     7,     7,     7,   249,     7,
     251,     7,   253,   254,     7,     7,     7,     7,     4,    94,
      95,   263,     3,     3,     3,     3,     7,     7,   224,     7,
     225,   226,   229,     7,   227,   231,     7,   232,   233,   236,
       7,   234,     7,   239,     7,   241,     7,   243,     7,     7,
       7,     7,     7,   130,   130,   268,   289,   299,   315,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,   129,   264,   129,   266,     4,   101,   107,   108,
     109,   112,   126,   127,   269,     4,   110,   112,   126,   127,
     290,     4,   107,   108,   110,   112,   126,   127,   300,     4,
     111,   126,   127,   316,   265,     7,   267,     7,   102,   103,
     104,   105,   106,   113,   114,   115,   116,   117,   128,   118,
     119,   120,   121,   122,   128,   128,   128,   118,   119,   120,
     121,   122,   128,   128,   128,   113,   114,   115,   116,   117,
     128,   118,   119,   120,   121,   122,   128,   128,   128,   124,
     125,   128,   128,     7,     7,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   291,   292,   293,   294,   295,   296,
     297,   298,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   317,   318,   319,   320,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7
  };

  const short
  conf_parser::yyr1_[] =
  {
       0,   137,   138,   138,   139,   139,   139,   139,   139,   140,
     141,   141,   143,   142,   144,   142,   145,   142,   146,   142,
     147,   142,   148,   142,   149,   142,   150,   142,   151,   142,
     152,   142,   153,   142,   154,   142,   155,   142,   156,   142,
     157,   142,   158,   142,   159,   142,   161,   160,   162,   162,
     164,   163,   166,   165,   167,   167,   169,   168,   170,   168,
     171,   168,   172,   168,   173,   168,   174,   168,   175,   168,
     176,   168,   177,   168,   178,   168,   179,   180,   180,   182,
     181,   183,   181,   184,   181,   185,   181,   186,   181,   187,
     181,   188,   181,   189,   181,   190,   190,   191,   192,   192,
     193,   194,   194,   195,   197,   196,   198,   196,   199,   199,
     201,   200,   202,   200,   203,   200,   204,   200,   205,   200,
     206,   200,   207,   200,   208,   200,   209,   200,   210,   200,
     211,   200,   212,   200,   213,   200,   214,   200,   215,   200,
     216,   200,   217,   200,   218,   200,   219,   200,   220,   200,
     221,   200,   222,   200,   223,   200,   224,   200,   225,   200,
     226,   200,   227,   200,   228,   200,   229,   200,   230,   200,
     231,   200,   232,   200,   233,   200,   234,   200,   235,   200,
     236,   200,   237,   200,   238,   200,   239,   200,   240,   200,
     241,   200,   242,   200,   243,   200,   244,   200,   245,   200,
     246,   200,   247,   200,   248,   200,   249,   200,   250,   200,
     251,   200,   252,   200,   253,   200,   254,   200,   255,   200,
     256,   200,   257,   200,   200,   258,   200,   259,   200,   260,
     200,   261,   200,   262,   262,   264,   263,   265,   263,   266,
     263,   267,   263,   268,   268,   270,   269,   271,   269,   272,
     269,   273,   269,   274,   269,   275,   269,   276,   269,   277,
     269,   278,   269,   279,   269,   280,   269,   281,   269,   282,
     269,   283,   269,   284,   269,   285,   269,   286,   269,   287,
     269,   288,   269,   289,   289,   291,   290,   292,   290,   293,
     290,   294,   290,   295,   290,   296,   290,   297,   290,   298,
     290,   299,   299,   301,   300,   302,   300,   303,   300,   304,
     300,   305,   300,   306,   300,   307,   300,   308,   300,   309,
     300,   310,   300,   311,   300,   312,   300,   313,   300,   314,
     300,   315,   315,   317,   316,   318,   316,   319,   316,   320,
     316
  };

  const signed char
  conf_parser::yyr2_[] =
  {
       0,     2,     0,     2,     1,     1,     1,     1,     1,     4,
       0,     2,     0,     5,     0,     6,     0,     5,     0,     6,
       0,     4,     0,     4,     0,     4,     0,     4,     0,     4,
       0,     4,     0,     4,     0,     4,     0,     4,     0,     4,
       0,     4,     0,     4,     0,     4,     0,     6,     0,     2,
       0,     3,     0,     5,     0,     2,     0,     4,     0,     4,
       0,     4,     0,     4,     0,     4,     0,     4,     0,     4,
       0,     4,     0,     4,     0,     4,     4,     0,     2,     0,
       4,     0,     5,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     2,     1,     0,     2,
       1,     0,     2,     1,     0,     6,     0,     7,     0,     2,
       0,     4,     0,     4,     0,     4,     0,     4,     0,     4,
       0,     4,     0,     4,     0,     5,     0,     5,     0,     4,
       0,     4,     0,     4,     0,     4,     0,     4,     0,     4,
       0,     4,     0,     4,     0,     4,     0,     4,     0,     4,
       0,     4,     0,     4,     0,     5,     0,     6,     0,     6,
       0,     6,     0,     6,     0,     5,     0,     6,     0,     5,
       0,     6,     0,     6,     0,     6,     0,     6,     0,     5,
       0,     6,     0,     5,     0,     5,     0,     6,     0,     5,
       0,     6,     0,     5,     0,     6,     0,     4,     0,     4,
       0,     4,     0,     4,     0,     4,     0,     5,     0,     4,
       0,     5,     0,     4,     0,     5,     0,     5,     0,     4,
       0,     4,     0,     4,     4,     0,     6,     0,     6,     0,
       6,     0,     6,     0,     2,     0,     4,     0,     5,     0,
       4,     0,     5,     0,     2,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     2,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     2,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     2,     0,     4,     0,     4,     0,     4,     0,
       4
  };


#if YYDEBUG || 1
  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a YYNTOKENS, nonterminals.
  const char*
  const conf_parser::yytname_[] =
  {
  "\"end of file\"", "error", "\"invalid token\"", "\"begin section\"",
  "\"end section\"", "\"begin grouping\"", "\"end grouping\"",
  "\"end of statement\"", "\"sequence\"", "\"enable\"", "\"disable\"",
  "\"force\"", "\"draft\"", "\"rfc\"", "\"deamon section\"", "\"socket\"",
  "\"ike\"", "\"natt\"", "\"syslog\"", "\"none\"", "\"error\"", "\"info\"",
  "\"debug\"", "\"loud\"", "\"decode\"", "\"log level\"", "\"log file\"",
  "\"dhcp file\"", "\"decrypted ike pcap dump file\"",
  "\"encrypted ike pcap dump file\"", "\"retry count\"", "\"retry delay\"",
  "\"netgroup section\"", "\"xauth ldap section\"", "\"version\"",
  "\"url\"", "\"base\"", "\"subtree\"", "\"bind dn\"", "\"bind pw\"",
  "\"user attribute\"", "\"group attribute\"", "\"member attribute\"",
  "\"xconfig local section\"", "\"network4\"", "\"domain name server\"",
  "\"nerbios name server\"", "\"dns suffix\"", "\"dns list\"",
  "\"banner\"", "\"pfs group\"", "\"peer section\"", "\"contact type\"",
  "\"initiator\"", "\"responder\"", "\"exchange type\"", "\"main\"",
  "\"aggressive\"", "\"natt mode\"", "\"natt keepalive rate\"",
  "\"dpd mode\"", "\"dpd notifiy delay\"", "\"dpd notifiy retries\"",
  "\"frag ike mode\"", "\"frag ike size\"", "\"frag esp mode\"",
  "\"frag esp size\"", "\"peer id\"", "\"local\"", "\"remote\"",
  "\"address\"", "\"fqdn\"", "\"ufqdn\"", "\"asn1dn\"", "\"keyid\"",
  "\"authdata\"", "\"psk\"", "\"ca\"", "\"cert\"", "\"pkey\"",
  "\"lifetime check\"", "\"obey\"", "\"claim\"", "\"strict\"", "\"exact\"",
  "\"xauth source\"", "\"xconf source\"", "\"pull\"", "\"push\"",
  "\"ldap\"", "\"policy mode\"", "\"config\"", "\"compat\"",
  "\"policy list section\"", "\"include\"", "\"exclude\"",
  "\"proposal section\"", "\"isakmp\"", "\"ah\"", "\"esp\"", "\"ipcomp\"",
  "\"auth\"", "\"hybrid xauth rsa\"", "\"mutual xauth rsa\"",
  "\"mutual xauth psk\"", "\"mutual rsa\"", "\"mutual psk\"", "\"cipher\"",
  "\"klen\"", "\"hash\"", "\"hmac\"", "\"compress\"", "\"dh group\"",
  "\"aes\"", "\"blowfish\"", "\"3des\"", "\"cast\"", "\"des\"", "\"md5\"",
  "\"sha1\"", "\"sha2-256\"", "\"sha2-384\"", "\"sha2-512\"", "\"dhgr\"",
  "\"deflate\"", "\"lzs\"", "\"life sec\"", "\"life kbs\"",
  "\"number value\"", "\"quoted value\"", "\"label value\"",
  "\"address value\"", "\"network value\"", "\"number\"", "\"quoted\"",
  "\"label\"", "\"network\"", "$accept", "sections", "section",
  "daemon_section", "daemon_lines", "daemon_line", "$@1", "$@2", "$@3",
  "$@4", "$@5", "$@6", "$@7", "$@8", "$@9", "$@10", "$@11", "$@12", "$@13",
  "$@14", "$@15", "$@16", "$@17", "netgroup_section", "$@18",
  "netgroup_lines", "netgroup_line", "$@19", "xauth_ldap_section", "$@20",
  "xauth_ldap_lines", "xauth_ldap_line", "$@21", "$@22", "$@23", "$@24",
  "$@25", "$@26", "$@27", "$@28", "$@29", "$@30", "xconf_local_section",
  "xconf_local_lines", "xconf_local_line", "$@31", "$@32", "$@33", "$@34",
  "$@35", "$@36", "$@37", "$@38", "xconf_local_dns_servers",
  "xconf_local_dns_server", "xconf_local_nbn_servers",
  "xconf_local_nbn_server", "xconf_local_dns_names",
  "xconf_local_dns_name", "peer_section", "$@39", "$@40", "peer_lines",
  "peer_line", "$@41", "$@42", "$@43", "$@44", "$@45", "$@46", "$@47",
  "$@48", "$@49", "$@50", "$@51", "$@52", "$@53", "$@54", "$@55", "$@56",
  "$@57", "$@58", "$@59", "$@60", "$@61", "$@62", "$@63", "$@64", "$@65",
  "$@66", "$@67", "$@68", "$@69", "$@70", "$@71", "$@72", "$@73", "$@74",
  "$@75", "$@76", "$@77", "$@78", "$@79", "$@80", "$@81", "$@82", "$@83",
  "$@84", "$@85", "$@86", "$@87", "$@88", "$@89", "$@90", "$@91", "$@92",
  "$@93", "$@94", "$@95", "$@96", "$@97", "$@98", "$@99", "$@100", "$@101",
  "plcy_list_lines", "plcy_list_line", "$@102", "$@103", "$@104", "$@105",
  "proposal_lines_isakmp", "proposal_line_isakmp", "$@106", "$@107",
  "$@108", "$@109", "$@110", "$@111", "$@112", "$@113", "$@114", "$@115",
  "$@116", "$@117", "$@118", "$@119", "$@120", "$@121", "$@122", "$@123",
  "$@124", "proposal_lines_ah", "proposal_line_ah", "$@125", "$@126",
  "$@127", "$@128", "$@129", "$@130", "$@131", "$@132",
  "proposal_lines_esp", "proposal_line_esp", "$@133", "$@134", "$@135",
  "$@136", "$@137", "$@138", "$@139", "$@140", "$@141", "$@142", "$@143",
  "$@144", "$@145", "$@146", "proposal_lines_ipcomp",
  "proposal_line_ipcomp", "$@147", "$@148", "$@149", "$@150", YY_NULLPTR
  };
#endif


#if YYDEBUG
  const short
  conf_parser::yyrline_[] =
  {
       0,   245,   245,   246,   249,   250,   251,   252,   253,   262,
     265,   266,   270,   269,   282,   281,   297,   296,   313,   312,
     332,   331,   341,   340,   348,   347,   354,   353,   359,   358,
     364,   363,   369,   368,   374,   373,   379,   378,   384,   383,
     391,   390,   398,   397,   403,   402,   416,   415,   428,   429,
     433,   432,   465,   464,   473,   474,   478,   477,   488,   487,
     496,   495,   504,   503,   511,   510,   518,   517,   526,   525,
     534,   533,   542,   541,   550,   549,   565,   568,   569,   573,
     572,   588,   587,   603,   602,   608,   607,   613,   612,   626,
     625,   631,   630,   646,   645,   654,   655,   658,   672,   673,
     676,   690,   691,   694,   709,   708,   744,   743,   780,   781,
     785,   784,   790,   789,   795,   794,   800,   799,   805,   804,
     814,   813,   823,   822,   832,   831,   845,   844,   854,   853,
     863,   862,   868,   867,   873,   872,   878,   877,   883,   882,
     888,   887,   893,   892,   898,   897,   903,   902,   908,   907,
     913,   912,   918,   917,   923,   922,   928,   927,   935,   934,
     942,   941,   949,   948,   956,   955,   961,   960,   968,   967,
     973,   972,   980,   979,   987,   986,   994,   993,  1001,  1000,
    1006,  1005,  1013,  1012,  1019,  1018,  1032,  1031,  1047,  1046,
    1061,  1060,  1076,  1075,  1089,  1088,  1103,  1102,  1108,  1107,
    1113,  1112,  1118,  1117,  1123,  1122,  1128,  1127,  1135,  1134,
    1147,  1146,  1161,  1160,  1167,  1166,  1173,  1172,  1179,  1178,
    1184,  1183,  1189,  1188,  1193,  1195,  1194,  1206,  1205,  1215,
    1214,  1224,  1223,  1235,  1236,  1240,  1239,  1261,  1260,  1283,
    1282,  1304,  1303,  1328,  1329,  1333,  1332,  1338,  1337,  1343,
    1342,  1348,  1347,  1353,  1352,  1358,  1357,  1363,  1362,  1368,
    1367,  1373,  1372,  1378,  1377,  1383,  1382,  1388,  1387,  1393,
    1392,  1398,  1397,  1403,  1402,  1408,  1407,  1413,  1412,  1455,
    1454,  1460,  1459,  1467,  1468,  1472,  1471,  1478,  1477,  1484,
    1483,  1490,  1489,  1496,  1495,  1502,  1501,  1544,  1543,  1549,
    1548,  1556,  1557,  1561,  1560,  1566,  1565,  1571,  1570,  1576,
    1575,  1581,  1580,  1586,  1585,  1591,  1590,  1596,  1595,  1601,
    1600,  1606,  1605,  1611,  1610,  1616,  1615,  1658,  1657,  1663,
    1662,  1670,  1671,  1675,  1674,  1680,  1679,  1685,  1684,  1690,
    1689
  };

  void
  conf_parser::yy_stack_print_ () const
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << int (i->state);
    *yycdebug_ << '\n';
  }

  void
  conf_parser::yy_reduce_print_ (int yyrule) const
  {
    int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):\n";
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG

  conf_parser::symbol_kind_type
  conf_parser::yytranslate_ (int t) YY_NOEXCEPT
  {
    // YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to
    // TOKEN-NUM as returned by yylex.
    static
    const unsigned char
    translate_table[] =
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
     135,   136
    };
    // Last valid token kind.
    const int code_max = 391;

    if (t <= 0)
      return symbol_kind::S_YYEOF;
    else if (t <= code_max)
      return static_cast <symbol_kind_type> (translate_table[t]);
    else
      return symbol_kind::S_YYUNDEF;
  }

} // yy
#line 3446 "/home/luizfelipe/ike/source/iked/conf.parse.cpp"

#line 1696 "/home/luizfelipe/ike/source/iked/conf.parse.yy"


void yy::conf_parser::error(
	const yy::conf_parser::location_type & l,
        const std::string & m )
{
	iked.log.txt( LLOG_ERROR,
		"%s ( line %i, col %i )\n",
		m.c_str(),
		l.end.line,
		l.end.column );

	exit( -1 );

	iked.conf_fail = true;
}
