from argparse import ArgumentParser
import re


def conv_file(in_file, out_file):
    f = open(in_file)

    vcd_dump = f.readlines()

    new_vcd = """"""


    for l in vcd_dump:
        if "$var" in l:
            var_line = l.split(" ")
            if '[' in var_line[-2]:
                if ':' in var_line[-3]:
                    var_line[-3] = var_line[-3].replace(":", "_")
            else:
                if ':' in var_line[-2]:
                    var_line[-2] = var_line[-2].replace(":", "_")
        
            new_vcd = new_vcd + " ".join(var_line)
        else:
            new_vcd = new_vcd + l

    f.close()

    with open(out_file, "w") as f:
        f.write(new_vcd) 

def main():
    parser = ArgumentParser(prog="ModVCD", description="This file will convert incompatible VCD to gtkwave compatible VCD")
    parser.add_argument('-i','--in_file')
    parser.add_argument('-o','--out_file')

    args = parser.parse_args()

    conv_file(args.in_file, args.out_file)

if __name__ == '__main__':
    main()