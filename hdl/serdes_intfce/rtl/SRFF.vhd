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
--  Library Name :  CommonVisual
--  Unit    Name :  SRFF
--  Unit    Type :  Text Unit
--
------------------------------------------------------
------------------------------------------
------------------------------------------
-- Date        : Wed Jun 11 17:46:39 2003
--
-- Author      : J.C.Molendijk
--
-- Company     : CERN BE-RF-FB
--
-- Description : A Synchronous Set Reset FF
--
------------------------------------------
------------------------------------------
library ieee;
use ieee.std_logic_1164.all;

entity SRFF is
port (Clk,Set,Clr: in std_logic;
      Rst : in std_logic:='0'; --Reset active high, port can be left open is unused
      Q: out std_logic);

end;




------------------------------------------
------------------------------------------
-- Date        : Wed Jun 11 17:50:49 2003
--
-- Author      : J.C.Molendijk
--
-- Company     : CERN BE-RF-FB
--
-- Description : A Synchronous Set Reset FF
--
------------------------------------------
------------------------------------------
architecture  V1 of SRFF is
begin

process(Clk)
  begin
    if rising_edge(Clk) then
      if Rst='1' then       --Highest priority (Synchronous reset)
        Q <= '0';
      elsif Set = '1' then
        Q <= '1';
      elsif Clr = '1' then  --Clear with lowest priority
        Q <= '0';
      end if;
    end if;
  end process;

end;



