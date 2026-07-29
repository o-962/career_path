$path = Join-Path $PSScriptRoot "main.cpp"
$content = Get-Content -Raw -Path $path

if ($content -notmatch 'freopen\("input\.txt"') {
    $pattern = '(int\s+main\s*\([^)]*\)\s*\r?\n\{)'
    $inject = "`$1`r`n  freopen(""input.txt"", ""r"", stdin);`r`n"
    $newContent = [regex]::Replace($content, $pattern, $inject, 1)

    if ($newContent -ne $content) {
        Set-Content -Path $path -Value $newContent -NoNewline
        Write-Host "Injected freopen(""input.txt"") into main.cpp"
    }
}
