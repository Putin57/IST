# computer graphics repository

## Windows

1. Open CMD
2. Check Python version
```txt
py --version
```

3. Check pip
```txt
py -m pip --version
```

4. Download notebook
```txt
py -m pip install notebook
```

5. Open notebook
```txt
py -m notebook
```
[N:B:] Sometimes there can be problems with specific versions of Python.



## Linux (Ubuntu 24.04)

Ubuntu 24.04 blocks `pip install` on the system Python (the "externally-managed-environment" error), so `pipx` is used instead. It installs each app in its own isolated environment.

1. Open Terminal (`Ctrl+Alt+T`)
2. Check Python version
```bash
python3 --version
```

3. Install pipx
```bash
sudo apt update
sudo apt install pipx -y
```

4. Add pipx apps to PATH, then close and reopen the terminal
```bash
pipx ensurepath
```
[N:B:] If it says `/home/<user>/.local/bin is already in PATH`, nothing more is needed. Ignore the `--force` hint.

5. Download notebook
```bash
pipx install notebook
```
[N:B:] A warning like `jupyter-notebook was already on your PATH` is only a notice, not an error.

6. Go to the folder that contains your `.ipynb` file
```bash
cd ~/Downloads
```

7. Open notebook
```bash
jupyter-notebook
```
To stop the server, press `Ctrl+C` in the terminal and type `y`.

### Missing libraries (Linux)

If a notebook shows `ModuleNotFoundError: No module named 'pandas'`, install the library into the notebook environment, then restart the kernel (**Kernel > Restart**):
```bash
pipx inject notebook pandas
```

### Troubleshooting (Linux)

| Problem | Fix |
|---|---|
| `jupyter-notebook: command not found` | Run `pipx ensurepath`, then close and reopen the terminal |
| Wrong or old version opens | Run `~/.local/bin/jupyter-notebook` directly |
