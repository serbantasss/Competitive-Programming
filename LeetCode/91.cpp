{\rtf1\ansi\ansicpg1252\cocoartf2580
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fnil\fcharset0 Menlo-Regular;}
{\colortbl;\red255\green255\blue255;\red0\green0\blue255;\red255\green255\blue255;\red0\green0\blue0;
\red32\green108\blue135;\red101\green76\blue29;\red0\green0\blue109;\red19\green118\blue70;\red157\green0\blue210;
\red144\green1\blue18;}
{\*\expandedcolortbl;;\cssrgb\c0\c0\c100000;\cssrgb\c100000\c100000\c100000;\cssrgb\c0\c0\c0;
\cssrgb\c14902\c49804\c60000;\cssrgb\c47451\c36863\c14902;\cssrgb\c0\c6275\c50196;\cssrgb\c3529\c52549\c34510;\cssrgb\c68627\c0\c85882;
\cssrgb\c63922\c8235\c8235;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\deftab720
\pard\pardeftab720\sl400\partightenfactor0

\f0\fs26 \cf2 \cb3 \expnd0\expndtw0\kerning0
\outl0\strokewidth0 \strokec2 class\cf4 \strokec4  \cf5 \strokec5 Solution\cf4 \strokec4  \{\cb1 \
\cf2 \cb3 \strokec2 public:\cf4 \cb1 \strokec4 \
\pard\pardeftab720\sl400\partightenfactor0
\cf4 \cb3     \cf2 \strokec2 int\cf4 \strokec4  \cf6 \strokec6 numDecodings\cf4 \strokec4 (\cf5 \strokec5 string\cf4 \strokec4  \cf7 \strokec7 s\cf4 \strokec4 ) \{\cb1 \
\cb3         \cf2 \strokec2 int\cf4 \strokec4  len = \cf7 \strokec7 s\cf4 \strokec4 .\cf6 \strokec6 size\cf4 \strokec4 (), ans = \cf8 \strokec8 0\cf4 \strokec4 , x = \cf8 \strokec8 1\cf4 \strokec4 , y = \cf8 \strokec8 0\cf4 \strokec4 ;\cb1 \
\cb3         \cf9 \strokec9 for\cf4 \strokec4 (\cf2 \strokec2 int\cf4 \strokec4  i = len-\cf8 \strokec8 1\cf4 \strokec4 ; i>=\cf8 \strokec8 0\cf4 \strokec4 ;--i)\{\cb1 \
\cb3             \cf9 \strokec9 if\cf4 \strokec4 (\cf7 \strokec7 s\cf4 \strokec4 [i]!=\cf10 \strokec10 '0'\cf4 \strokec4 )\cb1 \
\cb3                 ans += x;\cb1 \
\cb3             \cf9 \strokec9 if\cf4 \strokec4 (i+\cf8 \strokec8 1\cf4 \strokec4 <len && (\cf7 \strokec7 s\cf4 \strokec4 [i]==\cf10 \strokec10 '1'\cf4 \strokec4  || \cf7 \strokec7 s\cf4 \strokec4 [i]==\cf10 \strokec10 '2'\cf4 \strokec4  && (\cf7 \strokec7 s\cf4 \strokec4 [i+\cf8 \strokec8 1\cf4 \strokec4 ]<=\cf10 \strokec10 '6'\cf4 \strokec4 )))\cb1 \
\cb3                 ans += y;\cb1 \
\cb3             y = x;\cb1 \
\cb3             x = ans;\cb1 \
\cb3             ans = \cf8 \strokec8 0\cf4 \strokec4 ;\cb1 \
\cb3         \}\cb1 \
\cb3         \cf9 \strokec9 return\cf4 \strokec4  x;\cb1 \
\cb3     \}\cb1 \
\cb3 \};\cb1 \
}