FasdUAS 1.101.10   ��   ��    k             l     ��  ��    B < Portions of this AppleScript may incorporate work from 3rd      � 	 	 x   P o r t i o n s   o f   t h i s   A p p l e S c r i p t   m a y   i n c o r p o r a t e   w o r k   f r o m   3 r d     
  
 l     ��  ��    D > parties. These portions of code are noted. All other work is      �   |   p a r t i e s .   T h e s e   p o r t i o n s   o f   c o d e   a r e   n o t e d .   A l l   o t h e r   w o r k   i s        l     ��  ��    ; 5 Copyright � 2010 � 2013 Codeux Software. See README      �   j   C o p y r i g h t   �   2 0 1 0      2 0 1 3   C o d e u x   S o f t w a r e .   S e e   R E A D M E        l     ��  ��    %  for full license information.      �   >   f o r   f u l l   l i c e n s e   i n f o r m a t i o n .        l     ��������  ��  ��        i         I      �� ���� 0 
textualcmd      ��   o      ���� 	0 input  ��  ��    k     8 ! !  " # " Z      $ %���� $ =     & ' & o     ���� 	0 input   ' m     ( ( � ) )   % L     * * m     + + � , , J / d e b u g   P l e a s e   e n t e r   a   U R L   t o   s h o r t e n .��  ��   #  - . - l   ��������  ��  ��   .  / 0 / r     1 2 1 I   �� 3��
�� .sysoexecTEXT���     TEXT 3 l    4���� 4 b     5 6 5 b     7 8 7 m     9 9 � : : p c u r l   - - c o n n e c t - t i m e o u t   1 0   " h t t p : / / i s . g d / a p i . p h p ? l o n g u r l = 8 I    �� ;���� 0 	urlencode   ;  <�� < o    ���� 	0 input  ��  ��   6 m     = = � > >  "��  ��  ��   2 o      ���� 0 shorturl   0  ? @ ? l   ��������  ��  ��   @  A�� A Z    8 B C D E B =   ! F G F o    ���� 0 shorturl   G m      H H � I I   C L   $ & J J m   $ % K K � L L B / d e b u g   A n   u n k n o w n   e r r o r   o c c u r r e d . D  M N M C  ) , O P O o   ) *���� 0 shorturl   P m   * + Q Q � R R  E r r o r :   N  S�� S L   / 3 T T b   / 2 U V U m   / 0 W W � X X  / d e b u g   V o   0 1���� 0 shorturl  ��   E L   6 8 Y Y o   6 7���� 0 shorturl  ��     Z [ Z l     ��������  ��  ��   [  \ ] \ l     �� ^ _��   ^ - ' urlencode() AppleScript function from:    _ � ` ` N   u r l e n c o d e ( )   A p p l e S c r i p t   f u n c t i o n   f r o m : ]  a b a l     �� c d��   c = 7 <http://harvey.nu/applescript_url_encode_routine.html>    d � e e n   < h t t p : / / h a r v e y . n u / a p p l e s c r i p t _ u r l _ e n c o d e _ r o u t i n e . h t m l > b  f�� f i     g h g I      �� i���� 0 	urlencode   i  j�� j o      ���� 0 thetext theText��  ��   h k     k k  l m l r      n o n m      p p � q q   o o      ���� 0 
thetextenc 
theTextEnc m  r s r l   ��������  ��  ��   s  t u t X     v�� w v k    � x x  y z y r     { | { o    ���� 0 eachchar eachChar | o      ���� 0 usechar useChar z  } ~ } r    !  �  I   �� ���
�� .sysoctonshor       TEXT � o    ���� 0 eachchar eachChar��   � o      ���� 0 eachcharnum eachCharNum ~  � � � l  " "��������  ��  ��   �  � � � Z   " � � � ��� � =   " % � � � o   " #���� 0 eachcharnum eachCharNum � m   # $����   � r   ( + � � � m   ( ) � � � � �  + � o      ���� 0 usechar useChar �  � � � F   .  � � � F   . k � � � F   . Y � � � F   . I � � � F   . 9 � � � l  . 1 ����� � >   . 1 � � � o   . /���� 0 eachcharnum eachCharNum � m   / 0���� *��  ��   � l  4 7 ����� � >   4 7 � � � o   4 5���� 0 eachcharnum eachCharNum � m   5 6���� _��  ��   � l  < G ����� � G   < G � � � A   < ? � � � o   < =���� 0 eachcharnum eachCharNum � m   = >���� - � ?   B E � � � o   B C���� 0 eachcharnum eachCharNum � m   C D���� .��  ��   � l  L W ����� � G   L W � � � A   L O � � � o   L M���� 0 eachcharnum eachCharNum � m   M N���� 0 � ?   R U � � � o   R S���� 0 eachcharnum eachCharNum � m   S T���� 9��  ��   � l  \ i ����� � G   \ i � � � A   \ _ � � � o   \ ]���� 0 eachcharnum eachCharNum � m   ] ^���� A � ?   b g � � � o   b c���� 0 eachcharnum eachCharNum � m   c f���� Z��  ��   � l  n } ����� � G   n } � � � A   n s � � � o   n o���� 0 eachcharnum eachCharNum � m   o r���� a � ?   v { � � � o   v w���� 0 eachcharnum eachCharNum � m   w z���� z��  ��   �  ��� � k   � � � �  � � � r   � � � � � I  � ��� � �
�� .sysorondlong        doub � l  � � ����� � ^   � � � � � o   � ����� 0 eachcharnum eachCharNum � m   � ����� ��  ��   � �� ���
�� 
dire � m   � ���
�� olierndD��   � o      ���� 0 firstdig firstDig �  � � � r   � � � � � `   � � � � � o   � ����� 0 eachcharnum eachCharNum � m   � �����  � o      ���� 0 	seconddig 	secondDig �  � � � l  � ���������  ��  ��   �  � � � Z   � � � ����� � ?   � � � � � o   � ����� 0 firstdig firstDig � m   � ����� 	 � k   � � � �  � � � r   � � � � � [   � � � � � o   � ����� 0 firstdig firstDig � m   � ����� 7 � o      ���� 0 anum aNum �  ��� � r   � � � � � I  � ��� ���
�� .sysontocTEXT       shor � o   � ����� 0 anum aNum��   � o      ���� 0 firstdig firstDig��  ��  ��   �  � � � l  � ���������  ��  ��   �  � � � Z   � � � ���� � ?   � � � � � o   � ��~�~ 0 	seconddig 	secondDig � m   � ��}�} 	 � k   � � � �  � � � r   � � � � � [   � � � � � o   � ��|�| 0 	seconddig 	secondDig � m   � ��{�{ 7 � o      �z�z 0 anum aNum �  ��y � r   � � � � � I  � ��x ��w
�x .sysontocTEXT       shor � o   � ��v�v 0 anum aNum�w   � o      �u�u 0 	seconddig 	secondDig�y  ��  �   �  � � � l  � ��t�s�r�t  �s  �r   �  � � � r   � � � � � c   � � � � � l  � � ��q�p � b   � � � � � b   � �   m   � � �  % l  � ��o�n c   � � o   � ��m�m 0 firstdig firstDig m   � ��l
�l 
TEXT�o  �n   � l  � ��k�j c   � �	 o   � ��i�i 0 	seconddig 	secondDig	 m   � ��h
�h 
TEXT�k  �j  �q  �p   � m   � ��g
�g 
TEXT � o      �f�f 0 numhex numHex � 
�e
 r   � � o   � ��d�d 0 numhex numHex o      �c�c 0 usechar useChar�e  ��  ��   �  l  � ��b�a�`�b  �a  �`   �_ r   � � c   � � b   � � o   � ��^�^ 0 
thetextenc 
theTextEnc o   � ��]�] 0 usechar useChar m   � ��\
�\ 
TEXT o      �[�[ 0 
thetextenc 
theTextEnc�_  �� 0 eachchar eachChar w n    
 2   
�Z
�Z 
cha  o    �Y�Y 0 thetext theText u  l �X�W�V�X  �W  �V   �U L   o  �T�T 0 
thetextenc 
theTextEnc�U  ��       �S�S   �R�Q�R 0 
textualcmd  �Q 0 	urlencode   �P �O�N �M�P 0 
textualcmd  �O �L!�L !  �K�K 	0 input  �N   �J�I�J 	0 input  �I 0 shorturl    
 ( + 9�H =�G H K Q W�H 0 	urlencode  
�G .sysoexecTEXT���     TEXT�M 9��  �Y hO�*�k+ %�%j E�O��  �Y �� 	�%Y � �F h�E�D"#�C�F 0 	urlencode  �E �B$�B $  �A�A 0 thetext theText�D  " 	�@�?�>�=�<�;�:�9�8�@ 0 thetext theText�? 0 
thetextenc 
theTextEnc�> 0 eachchar eachChar�= 0 usechar useChar�< 0 eachcharnum eachCharNum�; 0 firstdig firstDig�: 0 	seconddig 	secondDig�9 0 anum aNum�8 0 numhex numHex#  p�7�6�5�4�3�2 ��1�0�/�.�-�,�+�*�)�(�'�&�%�$�#�"�!� �
�7 
cha 
�6 
kocl
�5 
cobj
�4 .corecnte****       ****
�3 .sysoctonshor       TEXT�2  �1 *�0 _
�/ 
bool�. -�- .�, 0�+ 9�* A�) Z�( a�' z�& 
�% 
dire
�$ olierndD
�# .sysorondlong        doub�" 	�! 7
�  .sysontocTEXT       shor
� 
TEXT�C�E�O ���-[��l kh �E�O�j E�O��  �E�Y Ť�	 ���&	 ��
 ���&�&	 ��
 ���&�&	 ��
 	�a �&�&	 �a 
 	�a �&�& p�a !a a l E�O�a #E�O�a  �a E�O�j E�Y hO�a  �a E�O�j E�Y hOa �a &%�a &%a &E�O�E�Y hO��%a &E�[OY�O�ascr  ��ޭ