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
--  Unit    Name :  GTP_16b20bEnc
--  Unit    Type :  Block Diagram
--
------------------------------------------------------

library ieee;
use ieee.STD_LOGIC_1164.all;
use ieee.NUMERIC_STD.all;
entity GTP_16b20bEnc is
  port (
        In_16b : in std_logic_vector(15 downto 0 );
        Clk : in std_logic;
        Out_20b : out std_logic_vector(19 downto 0 );
        KMode : in std_logic_vector(1 downto 0 );
        Str : in std_logic
        );


end GTP_16b20bEnc;


use work.all;
architecture GTP_16b20bEnc of GTP_16b20bEnc is

  signal Loc_Out : std_logic_vector(19 downto 0 );
  signal KMode1 : std_logic_vector(1 downto 0 );
  signal RunDispD : std_logic;
  signal Str1 : std_logic;
  signal KOut : std_logic_vector(19 downto 0 );
  signal Loc_RunDisp : std_logic;
  signal RunDispK : std_logic;
  signal RunDisp : std_logic;
  signal DOut : std_logic_vector(19 downto 0 );
  signal RunDisp1 : std_logic;
  signal DispInv : std_logic;
  signal Loc_In : std_logic_vector(15 downto 0 );
  component GTP_8b10bEnc
      port (
            In_8b : in std_logic_vector(7 downto 0 );
            In_RunDisp : in std_logic;
            Out_RunDisp : out std_logic;
            Out_10b : out std_logic_vector(9 downto 0 )
            );
  end component;
  component GTP_CommaTable
      port (
            Mode : in std_logic_vector(1 downto 0 );
            Disp : in std_logic;
            Comma : out std_logic_vector(19 downto 0 );
            DispInv : out std_logic
            );
  end component;

  -- Start Configuration Specification
  -- ++ for all : GTP_8b10bEnc use entity work.GTP_8b10bEnc(GTP_8b10bEnc);
  -- ++ for all : GTP_CommaTable use entity work.GTP_CommaTable(GTP_CommaTable);
  -- End Configuration Specification

begin

  B_8b10bEnc_LSB: GTP_8b10bEnc
    port map (
              In_8b => Loc_In(7 downto 0),
              In_RunDisp => RunDisp,
              Out_RunDisp => Loc_RunDisp,
              Out_10b => DOut(19 downto 10)
              );

  B_8b10bEnc_MSB: GTP_8b10bEnc
    port map (
              In_8b => Loc_In(15 downto 8),
              In_RunDisp => Loc_RunDisp,
              Out_RunDisp => RunDispD,
              Out_10b => DOut(9 downto 0)
              );

  C13: GTP_CommaTable
    port map (
              Mode => KMode1(1 downto 0),
              Disp => RunDisp,
              Comma => KOut(19 downto 0),
              DispInv => DispInv
              );

  process (Clk)
  begin
  if (Clk'event and Clk = '1') then
        Out_20b(19 downto 0) <= (Loc_Out(19 downto 0));


  end if;
  end process;

  process (DOut , KOut , Str1)
   begin
     case Str1 is
       when '1' =>
         Loc_Out(19 downto 0) <=  DOut(19 downto 0);
       when others =>
         Loc_Out(19 downto 0) <=  KOut(19 downto 0);
     end case;
   end process;

  process (Clk)
  begin
  if (Clk'event and Clk = '1') then
        RunDisp <= (RunDisp1);


  end if;
  end process;

  process (Clk)
  begin
  if (Clk'event and Clk = '1') then
        Loc_In(15 downto 0) <= (In_16b(15 downto 0));


  end if;
  end process;

  process (Clk)
  begin
  if (Clk'event and Clk = '1') then
        Str1 <= (Str);


  end if;
  end process;

  process (RunDispD , RunDispK , Str1)
   begin
     case Str1 is
       when '1' =>
         RunDisp1 <=  RunDispD;
       when others =>
         RunDisp1 <=  RunDispK;
     end case;
   end process;

  process (Clk)
  begin
  if (Clk'event and Clk = '1') then
        KMode1(1 downto 0) <= (KMode(1 downto 0));


  end if;
  end process;

  process (RunDisp , DispInv)
   begin
     case DispInv is
       when '0' =>
         RunDispK <=  RunDisp;
       when others =>
         RunDispK <= not RunDisp;
     end case;
   end process;
end GTP_16b20bEnc;
