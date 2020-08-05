$filename = $args[0]

if ((Test-Path $filename) -eq $false) {
    Write-Host "Couldn't find file: $filename"
    exit 1
}

if ($filename -match '\.cpp$') {
    $outstring = [System.Convert]::ToBase64String(
        [System.IO.File]::ReadAllBytes($filename), 'InsertLineBreaks')
    $outfile = "${filename}.base64"
} elseif ($filename -match '\.base64$') {
    $outstring = [System.Text.Encoding]::UTF8.GetString(
        [System.Convert]::FromBase64String(
            [System.Text.Encoding]::UTF8.GetString(
                [System.IO.File]::ReadAllBytes($filename)
            )
        )
    )
    $outfile = [regex]::replace($filename, '\.base64$', '')
} else {
    Write-Host "Unrecognized file type!"
    exit 1
}

[System.IO.File]::WriteAllText($outfile, $outstring)
Write-Host -NoNewline "Wrote to file: "
Write-Host -ForegroundColor Green $outfile