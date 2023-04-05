from amaranth import *
from rich.table import Table
# from rich.console import Console
Signal

def get_sig_info(ports):
    tab = Table(title="IO Ports")
    tab.add_column("Port Name", style="cyan")
    tab.add_column("Direction", style="green")

    for p in ports:
        tab.add_row(f"{p.name}[{p.shape().width-1}:0]", "IN/OUT")

    return tab