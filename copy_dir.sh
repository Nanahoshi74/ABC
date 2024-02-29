#!/bin/bash

# フォルダの基準となるパス
base_folder="."

# コピー元のフォルダ名
source_folder="forcopy"

# コピー先のフォルダの番号の範囲
start_number=342
end_number=350

# start_numberからend_numberまでの番号のフォルダを作成してコピー
for ((i = $start_number; i <= $end_number; i++)); do
    destination_folder="${base_folder}/${i}"
    echo "Copying $source_folder to $destination_folder"
    cp -r "${base_folder}/${source_folder}" "$destination_folder"
done

echo "Copy task completed."
