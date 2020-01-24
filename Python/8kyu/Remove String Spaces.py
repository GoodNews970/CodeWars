# =============================================================================
# Remove String Spaces
# 
# Simple, remove the spaces from the string, then return the resultant string.
# =============================================================================

def no_space(x):
    y = list(x)
    spaces = [i for i, b in enumerate(x) if b == " "]
    for i in reversed(spaces):
        del y[i]
    return "".join(y)