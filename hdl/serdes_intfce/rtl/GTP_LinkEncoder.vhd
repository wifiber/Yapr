----------------------------------------------------
----------------------------------------------------
-- THIS FILE WAS GENERATED BY VISUAL ELITE
-- DO NOT HAND-EDIT UNLESS IT'S ABSOLUTELY NECESSARY!
----------------------------------------------------
----------------------------------------------------
-- GNU LESSER GENERAL PUBLIC LICENSE
----------------------------------------------------
-- This source file is free software; you can redistribute it and/or modify it
-- under the terms of the GNU Lesser General Public License as published by the
-- Free Software Foundation; either version 2.1 of the License, or (at your
-- option) any later version. This source is distributed in the hope that it
-- will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty
-- of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
-- See the GNU Lesser General Public License for more details. You should have
-- received a copy of the GNU Lesser General Public License along with this
-- source; if not, download it from http://www.gnu.org/licenses/lgpl-2.1.html
----------------------------------------------------
----------------------------------------------------
--
--  Library Name :  GTP
--  Unit    Name :  GTP_LinkEncoder
--  Unit    Type :  Truth Table
--
------------------------------------------------------

library ieee;
use ieee.STD_LOGIC_1164.all;
use ieee.NUMERIC_STD.all;
entity GTP_LinkEncoder is
  port (
        HeadCnt : in std_logic_vector(4 downto 0 );
        DataOut : out std_logic_vector(15 downto 0 );
        Str : out std_logic;
        Mkr : out std_logic;
        LinkData : in std_logic_vector(15 downto 0 );
        LinkStr : in std_logic;
        Header : in std_logic_vector(31 downto 0 );
        SourceID : in std_logic_vector(31 downto 0 );
        BlockSize : in std_logic_vector(31 downto 0 );
        Turn : in std_logic_vector(31 downto 0 );
        Tags : in std_logic_vector(31 downto 0 );
        CRC : in std_logic_vector(31 downto 0 );
        AddCRC : out std_logic
        );

end GTP_LinkEncoder;


architecture GTP_LinkEncoder of GTP_LinkEncoder is


begin
  GTP_LinkEncoder:
  process (HeadCnt, CRC, Header, SourceID, BlockSize, Turn, Tags, LinkData,
  LinkStr)
  begin

    if (HeadCnt = ('0' & X"0")) then
      DataOut <= CRC(31 downto 16);
      Str <= '1';
      Mkr <= '0';
      AddCRC <= '1';
    elsif (HeadCnt = ('0' & X"1")) then
      DataOut <= CRC(15 downto 0);
      Str <= '1';
      Mkr <= '0';
      AddCRC <= '1';
    elsif (HeadCnt = ('0' & X"2")) then
      DataOut <= X"0000";
      Str <= '0';
      Mkr <= '0';
      AddCRC <= '0';
    elsif (HeadCnt = ('0' & X"3")) then
      DataOut <= X"0000";
      Str <= '0';
      Mkr <= '0';
      AddCRC <= '0';
    elsif (HeadCnt = ('0' & X"4")) then
      DataOut <= X"0000";
      Str <= '0';
      Mkr <= '0';
      AddCRC <= '0';
    elsif (HeadCnt = ('0' & X"5")) then
      DataOut <= X"0000";
      Str <= '0';
      Mkr <= '1';
      AddCRC <= '0';
    elsif (HeadCnt = ('0' & X"6")) then
      DataOut <= Header(31 downto 16);
      Str <= '1';
      Mkr <= '0';
      AddCRC <= '0';
    elsif (HeadCnt = ('0' & X"7")) then
      DataOut <= Header(15 downto 0);
      Str <= '1';
      Mkr <= '0';
      AddCRC <= '0';
    elsif (HeadCnt = ('0' & X"8")) then
      DataOut <= SourceID(31 downto 16);
      Str <= '1';
      Mkr <= '0';
      AddCRC <= '0';
    elsif (HeadCnt = ('0' & X"9")) then
      DataOut <= SourceID(15 downto 0);
      Str <= '1';
      Mkr <= '0';
      AddCRC <= '0';
    elsif (HeadCnt = ('0' & X"A")) then
      DataOut <= BlockSize(31 downto 16);
      Str <= '1';
      Mkr <= '0';
      AddCRC <= '0';
    elsif (HeadCnt = ('0' & X"B")) then
      DataOut <= BlockSize(15 downto 0);
      Str <= '1';
      Mkr <= '0';
      AddCRC <= '0';
    elsif (HeadCnt = ('0' & X"C")) then
      DataOut <= Turn(31 downto 16);
      Str <= '1';
      Mkr <= '0';
      AddCRC <= '0';
    elsif (HeadCnt = ('0' & X"D")) then
      DataOut <= Turn(15 downto 0);
      Str <= '1';
      Mkr <= '0';
      AddCRC <= '0';
    elsif (HeadCnt = ('0' & X"E")) then
      DataOut <= Tags(31 downto 16);
      Str <= '1';
      Mkr <= '0';
      AddCRC <= '0';
    elsif (HeadCnt = ('0' & X"F")) then
      DataOut <= Tags(15 downto 0);
      Str <= '1';
      Mkr <= '0';
      AddCRC <= '0';
    elsif (HeadCnt = ('1' & X"0")) then
      DataOut <= X"0000";
      Str <= '1';
      Mkr <= '0';
      AddCRC <= '0';
    elsif (HeadCnt = ('1' & X"1")) then
      DataOut <= X"0000";
      Str <= '1';
      Mkr <= '0';
      AddCRC <= '0';
    elsif (HeadCnt = ('1' & X"2")) then
      DataOut <= X"0000";
      Str <= '1';
      Mkr <= '0';
      AddCRC <= '0';
    elsif (HeadCnt = ('1' & X"3")) then
      DataOut <= X"0000";
      Str <= '1';
      Mkr <= '0';
      AddCRC <= '0';
    elsif (HeadCnt = ('1' & X"4")) then
      DataOut <= X"0000";
      Str <= '1';
      Mkr <= '0';
      AddCRC <= '0';
    elsif (HeadCnt = ('1' & X"5")) then
      DataOut <= X"0000";
      Str <= '1';
      Mkr <= '0';
      AddCRC <= '0';
    else
      DataOut <= LinkData;
      Str <= LinkStr;
      Mkr <= '0';
      AddCRC <= '0';
    end if ;
  end process GTP_LinkEncoder;

end GTP_LinkEncoder;
