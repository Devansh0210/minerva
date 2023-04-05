from binascii import hexlify
import numpy as np

# f_path = "/home/devector/Documents/riscv/minerva/minerva/soc/sim/riscv-tests/isa/rv32ui-p-andi.bin"


def gen_imem(f_path):
    f1 = open(f_path, "rb")
    imem = f1.read()
    imem = np.frombuffer(imem, dtype=np.uint32)
    imem = imem.tolist()
    return imem

# print(gen_imem(f_path))