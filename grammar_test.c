function int main () {

    // Pruebas de declaracion y asignacion de variables.
    local int var1 <= 10 |
    local float var2 <= 0.10 |
    local char var3 <= 'a' |
    local string var4 <= "hola" |
    local bool var5 <= true |

    // Pruebas de declaracion y asignacion de arrays.
    local int arr1 <= [10, (3-1), var1] |
    local char arr2 <= ['a', var3] |

    // Pruebas de declaracion de funciones.
    function int func1 (int p1, int p2) {

        // Declaracion sin asignacion.
        local int var6 |
        local int var7 |
        local int var8 |

        // Asignacion.
        var6 <= p1 + p2 |
        var7 <= p1 * p2 |
        var8 <= var6 ** var7 | 

        // Retorno de expresion.
        return ((id4 - id5) / id6) |

    }

    function int func2 (int p1[]) {

        local int i |
        local int sum |

        // Ciclo for
        for ( i <= 0 | i =< 4 | ++i ) {
            sum <= sum + p1[i] |

            if (sum == 0) {
                break |
            }

        }

        return sum |
    }

    function bool func3 (int p1, int p2) {

        // Estructuras de control
        if (p1 < p2) {
            return true |
        } 
        else if (p1 == p2) {
            return true |
        }
        else if (p1 > p2) {
            return true |
        } 
        else {
            return false |
        }

    }

    function int func4 (int p1, int p2[]) {
        
        return  func1(p1, p2[0])|

    }

    function int func5 (int p1, int p2) {

        local int var9 <= 0

        // Ciclo do - until
        do {

            var9 <= ++var9

        } until (i > 10) |

        return var9 |

    }

    return 0 |
}