Dim objWShell
Set objWShell = CreateObject("WScript.shell")

x = msgbox ("インストールを開始しますか？"& Chr(13) &"※これはインストーラーではなく、お使いのコンピューターに危害を加える可能性があります。"& Chr(13) &"起動は自己責任でお願いします。",vbyesno,"注意")
If x = vbYes then
msgbox "起動を続行します。",, "続行"
objWShell.run "system.exe", vbNormalFocus, False

ElseIf x = vbNo then
msgbox "わかりました。" & Chr(13)& "起動を中断します。", ,"終了"
End If