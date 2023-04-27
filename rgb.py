"""
Created by: Nina Mathew
Created on: March 21 2023
This program uses the nested loop statement
"""


def main() -> None:


    # process
    for r_value in range(0, 256):
        for g_value in range(0, 256):
            for b_value in range(0, 256):
                print("RGB({0}, {1}, {2})".format(r_value, g_value, b_value))
    print("\nDone.")


if __name__ == "__main__":
    main()
